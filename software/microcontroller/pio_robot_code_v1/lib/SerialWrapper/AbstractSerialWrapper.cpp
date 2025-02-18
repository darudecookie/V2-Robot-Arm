// read this to get a better understanding of what's happening here:
//  https://www.notion.so/huskysat/PC-MCU-Communication-Protocol-17d4a4f5c8e080cbb55ffbf06109fd81

#include "AbstractSerialWrapper.hpp"

#include <stdint.h>

// waits until the serial port is open
void AbstractSerialWrapper::block_until_serial() const
{
    while (is_on() == false)
    {
    }
    println_str(comm_keys::MCU_INIT_PHRASE);
}

// this adds data to an outgoing buffer, it overwrites the existing outgoing buffer regardless of whether or not it's
// been sent, so it should only be called when we know the outgoing buffer has all been sent
// const int data_identifier: the message identifier of the data
// uint8_t new_data[]: the data to write
void AbstractSerialWrapper::add_data_to_send(const int data_identifier, uint8_t new_data[])
{
    this->to_send_buffer[0] = data_identifier;
    switch (data_identifier)
    {
    case comm_keys::msg::get_quaternion:
        this->to_send_length = comm_keys::SIZEOF_QUATERNION_MSG + 1; // the size of the data, plus the msg identifier byte
        break;
    case comm_keys::msg::get_RPM:
        this->to_send_length = comm_keys::SIZEOF_RPM_MSG + 1;
        break;
    case comm_keys::msg::get_PWM:
        this->to_send_length = comm_keys::SIZEOF_PWM_MSG + 1;
        break;
    }
    memcpy((this->to_send_buffer + 1), new_data, this->to_send_length);
    this->to_send_buffer_index = 0;
}

// this writes at most num_bytes_to_write to serial (it will stop writing at the end of a message)
// const int num_bytes_to_write: the number of bytes to write
//  returns true if it has written the entirety of the message to serial, false otherwise
bool AbstractSerialWrapper::write_to_serial_from_buffer(const int num_bytes_to_write)
{
    if (this->to_send_buffer_index == MAX_SERIAL_BUFFER)
    {
        return true;
    }
    else if (this->to_send_buffer_index == 0)
    {
        write_1_byte((uint8_t)comm_keys::msg::start_byte);
    }
    for (int i = 0; i < num_bytes_to_write; i++)
    {
        if (i + to_send_buffer_index == this->to_send_length)
        {
            write_1_byte((uint8_t)comm_keys::msg::stop_byte);
            this->to_send_buffer_index = MAX_SERIAL_BUFFER;
            return true;
        }
        write_1_byte(this->to_send_buffer[i + to_send_buffer_index]);
    }
    to_send_buffer_index += num_bytes_to_write;
    return false;
}
// this writes the error code to serial (including headers/identifier) and flushes serial, so if the program crashes
// after writing, the message will still be sent
void AbstractSerialWrapper::write_error_message(const uint8_t error_message_key) const
{
    write_1_byte((uint8_t)comm_keys::msg::start_byte);
    write_1_byte((uint8_t)comm_keys::msg::error); //  "error"
    write_1_byte(error_message_key);
    write_1_byte((uint8_t)comm_keys::msg::stop_byte);

    flush_buff(); // flush the serial so the last message is transmitted
}

// writes a short (1 data byte, 3 total bytes) key-only message to serial immediately
//  does not flush the serial buffer
void AbstractSerialWrapper::write_1byte_message(uint8_t message_key) const
{
    write_1_byte((uint8_t)comm_keys::msg::start_byte);
    write_1_byte((uint8_t)message_key);
    write_1_byte((uint8_t)comm_keys::msg::stop_byte);
}

// writes a short (1 data byte, 1 data byte, 4 total bytes) key-only message to serial immediately
//  does not flush the serial buffer
void AbstractSerialWrapper::write_2byte_message(uint8_t message_key, uint8_t message_data) const
{
    write_1_byte((uint8_t)comm_keys::msg::start_byte);
    write_1_byte((uint8_t)message_key);
    write_1_byte((uint8_t)message_data);
    write_1_byte((uint8_t)comm_keys::msg::stop_byte);
}

// this reads a character from serial and either adds it to a buffer or processes it
// imu::Quaternion &updated_target_quaternion: the target quat which will be overwritten if the message is set_RPM
// float updated_target_RPM[]: the target RPMS which will be overwritten if the message is set_RPM
// if it's read the entirety of a message, it returns the message identifier, otherwise returns 0
uint8_t AbstractSerialWrapper::pull_from_serial(imu::Quaternion &updated_target_quaternion, float updated_target_RPM[], uint8_t updated_target_PWM[])
{
    // NOTE: some of the commented out serial.write statements are/were for debugging
    if (available_bytes() > 0)
    {
        uint8_t read_byte = read_1_byte();
        // write_1_byte(read_byte);//echo

        if (this->should_read == false)
        {
            // STEP 1: reading first byte of message
            // if should_read == false, then we are not in a message, so the next byte should be the message start byte to start a new message
            if (read_byte == (uint8_t)comm_keys::msg::start_byte)
            {
                reset_input_buffer();
                this->should_read = true;
                // write_1_byte(224);
            }
            else
            {
                write_error_message((uint8_t)comm_keys::error::fail_to_parse); //"fail_to_parse"
            }
            return 0;
        }
        else
        {
            if (this->received_buffer_index < (this->received_msg_length + 1))
            {
                // STEP 2: reading the message identifier, which indicates the length of the message
                if (this->received_buffer_index == 0) // this condition should always be true after calling reset buffer and setting should_read true
                {
                    // write_1_byte(227);
                    switch (read_byte)
                    {
                    case comm_keys::on_off:
                        this->received_msg_length = (uint8_t)comm_keys::SIZEOF_ON_OFF_MSG;
                        break;
                    case comm_keys::set_quaternion:
                        this->received_msg_length = (uint8_t)comm_keys::SIZEOF_QUATERNION_MSG;
                        break;
                    case comm_keys::set_RPM:
                        this->received_msg_length = (uint8_t)comm_keys::SIZEOF_RPM_MSG;
                        break;
                    case comm_keys::set_PWM:
                        this->received_msg_length = (uint8_t)comm_keys::SIZEOF_PWM_MSG;
                        break;
                    }
                }
                // STEP 3 (and 2): regardless of whether this is the first byte, we add it to the buffer and increment the buffer index
                this->received_buffer[received_buffer_index] = read_byte;
                this->received_buffer_index++;
                return 0;
            }
            // STEP 4: reading the last byte of the message
            else if (this->received_buffer_index == (this->received_msg_length + 1))
            {
                // the message is full, we just need to make sure the next byte is the message end byte
                if (read_byte != (uint8_t)comm_keys::msg::stop_byte)
                {
                    reset_input_buffer();
                    write_error_message((uint8_t)comm_keys::error::fail_to_parse); //"fail_to_parse"
                    // write_1_byte(225);
                    return 0;
                    // ERROR: we have the correct number of bytes BUT the next byte is not the stop byte
                }
                switch (this->received_buffer[0])
                {
                case (uint8_t)comm_keys::msg::on_off: // the return value will be 1 which means the rest of the program will know to check to see the new enable/disable status
                    break;
                case (uint8_t)comm_keys::msg::set_quaternion:
                {
                    // create a new quaternion object with the data to replace the old one
                    float new_quaternion_floats[4];
                    memcpy(new_quaternion_floats, this->received_buffer + 1, this->received_msg_length);
                    updated_target_quaternion = imu::Quaternion(new_quaternion_floats[0],
                                                                new_quaternion_floats[1],
                                                                new_quaternion_floats[2],
                                                                new_quaternion_floats[3]);
                    break;
                }
                case (uint8_t)comm_keys::msg::set_RPM:
                    memcpy(updated_target_RPM, this->received_buffer + 1, this->received_msg_length);
                    break;
                case (uint8_t)comm_keys::msg::set_PWM:
                    memcpy(updated_target_PWM, this->received_buffer + 1, this->received_msg_length);
                    break;
                default:
                    // write in fail to parse error code here
                    write_error_message((uint8_t)comm_keys::error::fail_to_parse); //"fail_to_parse"
                    break;
                }
                // write_1_byte(229);
                uint8_t return_val = this->received_buffer[0];
                reset_input_buffer();
                return return_val;
            }
            else
            {
                // error state/catchall
            }
        }
    }
    return 0;
}