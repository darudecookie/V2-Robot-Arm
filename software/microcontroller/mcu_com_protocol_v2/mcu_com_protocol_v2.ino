#include "Arduino.h"
#include <TimerThree.h>

const int max_unparsed_serial_input = 15;
volatile bool new_unparsed_serial_input = false;
volatile byte unparsed_serial_input[max_unparsed_serial_input];

int current_cmd = 0;
byte current_arg[max_unparsed_serial_input - 1];
bool new_cmd = false;

void setup() {
  Serial.begin(115200);
  Timer3.initialize(1000);
  Timer3.attachInterrupt(get_string_from_serial);
  Serial.println("<MCU_init>");
}

void loop() {

  static long last_parse = 0;

  if (micros() - last_parse > 1000) {
    get_parsed_string();
    last_parse = micros();
  }

  if (new_cmd && current_cmd == 49) {
    Serial.println("checkin");
    
    float float_val = current_arg[0]+current_arg[1]+current_arg[2]+ current_arg[3];

        for (int i = 0; i < 4; i++)
    {
        Serial.print(current_arg[i]);
        Serial.print(" ");
    }
    Serial.println("");
    Serial.println(float_val);
    new_cmd = false;
  }
}

void get_string_from_serial() {
  const char init_char = '<';
  const char end_char = '>';
  static int serial_input_parse_position = 0;
  static bool should_read = false;

  if (Serial.available() > 0) {
    char read_char = Serial.read();

    if (read_char == init_char) {
      should_read = true;
      serial_input_parse_position = 0;

      memset(unparsed_serial_input, 0, max_unparsed_serial_input);
    } else if (read_char == end_char && should_read) {
      should_read = false;
      new_unparsed_serial_input = true;
    } else if (should_read) {
      unparsed_serial_input[serial_input_parse_position] = read_char;
      serial_input_parse_position++;
    }
  } else {
    serial_input_parse_position = 0;
    should_read = false;

    memset(unparsed_serial_input, 0, max_unparsed_serial_input);
  }
}

// lower frequency timer interrupt parses that strings for a command (int from 0 to 100) and args (string length <32)
void get_parsed_string() {

  if (new_unparsed_serial_input) {

    byte unparsed_serial_input_AT_THIS_MOMENT[max_unparsed_serial_input];                            // create internal byte aarray
    memcpy(unparsed_serial_input_AT_THIS_MOMENT, unparsed_serial_input, max_unparsed_serial_input);  // copy volatile byte array from serial to internal byte array so that a timer callback while the meat of the function is running doesnt fuck everything

    memset(current_arg, 0, max_unparsed_serial_input);  // clear current arg

    current_cmd = static_cast<int>(unparsed_serial_input_AT_THIS_MOMENT[0]);

    for (int i = 0; i < max_unparsed_serial_input; i++) {
      if (unparsed_serial_input_AT_THIS_MOMENT[i]) {
        current_arg[i] = unparsed_serial_input_AT_THIS_MOMENT[i + 1];
      } else {  // if the string is shorter than 15 bytes, than the function ends early here
        new_unparsed_serial_input = false;
        new_cmd = true;
        return;
      }
    }
    new_cmd = true;
    new_unparsed_serial_input = false;
  }
}

float decode_1_float(byte bytes[4]) {
  float float_val;
  memcpy(&float_val, &bytes, sizeof(float_val));
  return float_val;
}