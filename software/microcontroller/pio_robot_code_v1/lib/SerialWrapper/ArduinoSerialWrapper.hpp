#pragma once

#ifndef ARDUINO_SERIAL_WRAPPER_HPP
#define ARDUINO_SERIAL_WRAPPER_HPP

#include "Arduino.h"
#include "AbstractSerialWrapper.hpp"

class ArduinoSerialWrapper : public AbstractSerialWrapper
{
private:
    bool is_on() const override { return Serial.available(); }

    void write_1_byte(uint8_t input) const override { Serial.write(input); }
    void flush_buff() const override { Serial.flush(); }
    void print_str(const char *data) const override { Serial.print(data); }
    void println_str(const char *data) const override { Serial.println(data); }

    int available_bytes() const override { return Serial.available(); }
    uint8_t read_1_byte() const override { return Serial.read(); }
};

#endif // ARDUINO_SERIAL_WRAPPER_HPP