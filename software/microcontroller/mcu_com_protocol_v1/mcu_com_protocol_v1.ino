#include "Arduino.h"
#include <TimerThree.h>


const int max_unparsed_serial_input = 26;
volatile bool new_unparsed_serial_input = false;
volatile byte unparsed_serial_input[max_unparsed_serial_input];

int current_cmd = 0;
byte current_arg[max_unparsed_serial_input - 1];
bool new_cmd = false;

float target_angles[7] = { 0, 0, 0, 0, 0, 0, 0 };

void setup() {
  Serial.begin(115200);
  Timer3.initialize(1000);
  Timer3.attachInterrupt(get_string_from_serial);
  Serial.println("<MCU_init>");
}

void loop() {

  static long last_parse = 0;
  if (micros() - last_parse > 1000) {
    parse_string_from_serial();
    last_parse = micros();
  }

  if (new_cmd && current_cmd == 49) {

    new_cmd = false;

    decode_7_floats_from_arg(target_angles);

    for (int i = 0; i < 7; i++) {
      Serial.print(target_angles[i]);
      Serial.print(" ");
    }
    Serial.println(" ");
  }
}

// higher frequency timer interrupt that just grabs a string from serial
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

// lower frequency timer interrupt parses that strings for a command (int from 0 to 255) and args (string length <=26)
void parse_string_from_serial() {

  if (new_unparsed_serial_input) {

    byte unparsed_serial_input_AT_THIS_MOMENT[max_unparsed_serial_input];                            //create internal byte aarray
    memcpy(unparsed_serial_input_AT_THIS_MOMENT, unparsed_serial_input, max_unparsed_serial_input);  //copy volatile byte array from serial to internal byte array so that a timer callback while the meat of the function is running doesnt fuck everything

    memset(current_arg, 0, max_unparsed_serial_input);  //clear current arg

    current_cmd = static_cast<int>(unparsed_serial_input_AT_THIS_MOMENT[0]);

    for (int i = 0; i < max_unparsed_serial_input; i++) {
      if (unparsed_serial_input_AT_THIS_MOMENT[i]) {
        current_arg[i] = unparsed_serial_input_AT_THIS_MOMENT[i + 1];
      } else {  //if the string is shorter than 15 bytes, than the function ends early here
        new_unparsed_serial_input = false;
        new_cmd = true;
        return;
      }
    }
    new_cmd = true;
    new_unparsed_serial_input = false;
  }
}

float decode_1_float(byte byte_array[3]) {

  float parsed_float = 0;
  Serial.print(byte_array[0]);

  if (static_cast<int>(byte_array[0]) >= 101) {
    parsed_float = -(static_cast<int>(byte_array[0]) - 101);
    parsed_float -= (static_cast<float>(byte_array[1]) - 101) / 100;
    parsed_float -= (static_cast<float>(byte_array[2]) - 101) / (100 * 100);

  } else {
    parsed_float = static_cast<int>(byte_array[0]);
    parsed_float += static_cast<float>(byte_array[1]) / 100;
    parsed_float += static_cast<float>(byte_array[2]) / (100 * 100);
  }
  return parsed_float;
}

void decode_7_floats_from_arg(float target_array[7]) {

  for (int i = 0; i < 7; i++) {
    byte byte_array[3] = { current_arg[i * 3], current_arg[i * 3 + 1], current_arg[i * 3 + 2] };

    target_array[i] = decode_1_float(byte_array);
  }
}
