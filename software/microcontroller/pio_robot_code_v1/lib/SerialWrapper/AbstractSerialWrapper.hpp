// read this to get a better understanding of what's happening here:
//  https://www.notion.so/huskysat/PC-MCU-Communication-Protocol-17d4a4f5c8e080cbb55ffbf06109fd81

#ifndef ABSTRACT_SERIAL_WRAPPER_HPP
#define ABSTRACT_SERIAL_WRAPPER_HPP

#include <stdint.h>

#ifdef TESTING
#include "../../include/imumaths.hpp"
#else
#include "imumaths.h"
#endif

namespace comm_keys
{
    enum msg
    {
        on_off = 1,

        set_quaternion = 10,
        get_quaternion = 11,

        set_RPM = 20,
        get_RPM = 21,

        set_PWM = 30,
        get_PWM = 31,

        POST_start = 110,
        POST_skip_check = 111,
        POST_fail = 112,
        POST_finish = 113,

        error = 99,

        start_byte = 2,
        stop_byte = 4
    };

    enum error
    {
        // IMU errors
        BNO55_IMU_init_fail = 10, // fatal

        BNO08x_IMU_init_fail = 11,                 // fatal
        BNO08x_SH2_GAME_ROTATION_VECTOR_fail = 12, //  fatal
        BNO08x_SH2_GYROSCOPE_CALIBRATED_fail = 13, //  fatal

        BNO08x_read_fail = 14,

        // misc errors
        interrupt_init_fail = 20,
        program_timeout = 21, // fatal

        fail_to_parse = 30
    };

    const uint8_t SIZEOF_ON_OFF_MSG = sizeof(uint8_t);
    const uint8_t SIZEOF_QUATERNION_MSG = sizeof(float) * 4;
    const uint8_t SIZEOF_RPM_MSG = sizeof(float) * 4;
    const uint8_t SIZEOF_PWM_MSG = sizeof(uint8_t) * 4;

    const char MCU_INIT_PHRASE[11] = "<MCU_init>";
} // communication_keys

// this class is a platform-agnostic serial interface, it just implements the communication protocol logic, not any of the actual serial functions
// made so that the serial protocol is easier to translate across MCU's and frameworks, and to allow for native unit testing
class AbstractSerialWrapper
{
public:
    static const int MAX_SERIAL_BUFFER = 32; // size of serial buffer, as long as it's greater than the longest message (16 bytes) it should be fine
private:
    bool should_read = false; // whether or not the reader should parse for data
    // bool first_byte = true;   // whether or not the serial reader is reading the first character of the message, after the start byte

    // uint8_t received_msg_identifier;   // the most recent identifier (first byte) read from serial
    uint8_t received_buffer_index = 0; // what position in the input data buffer is being written to
    uint8_t received_msg_length = 0;
    uint8_t received_buffer[MAX_SERIAL_BUFFER]; // the received data buffer

    uint8_t to_send_buffer_index = MAX_SERIAL_BUFFER;          // the index of the char in  to_send_buffer that is being written
    uint8_t to_send_length = 0;                // the length of the current to_send_message data
    uint8_t to_send_buffer[MAX_SERIAL_BUFFER]; // sending data buffer

    void reset_input_buffer()
    {
        this->should_read = false;
        this->received_buffer_index = 0;
        this->received_msg_length = received_buffer_index + 1;         // just needs to be more than one byte different from received_buffer_index
        memset(this->received_buffer, false, this->MAX_SERIAL_BUFFER); // clear current arg
    }

protected:
    // override all of these with platform-specific functions to create a serial interface
    virtual bool is_on() const = 0;

    virtual void write_1_byte(uint8_t input) const = 0;
    virtual void flush_buff() const = 0;
    virtual void print_str(const char *data) const = 0;
    virtual void println_str(const char *data) const = 0;

    virtual int available_bytes() const = 0;
    virtual uint8_t read_1_byte() const = 0;

public:
    AbstractSerialWrapper() { reset_input_buffer(); }

    void block_until_serial() const;

    void add_data_to_send(const int data_identifier, uint8_t new_data[]);
    bool write_to_serial_from_buffer(const int num_bytes_to_write);
    void write_error_message(const uint8_t error_message_key) const;
    void write_1byte_message(uint8_t message_key) const;
    void write_2byte_message(uint8_t message_key, uint8_t message_data) const;

    uint8_t pull_from_serial(imu::Quaternion &updated_target_quaternion,
                             float updated_target_RPM[],
                             uint8_t updated_target_PWM[]);

    // returns the most recent message identifier
    uint8_t get_received_msg_identifier() const { return this->received_buffer[0]; }
    // returns the first byte of the data buffer, which is useful for commands like on_off, where only the first byte is of interest
    uint8_t get_first_data_byte() const { return this->received_buffer[1]; }
};
#endif // ABSTRACT_SERIAL_WRAPPER_HPP
