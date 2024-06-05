#include "Arduino.h"
#include <TimerThree.h>


const int max_unparsed_serial_input = 35;
volatile bool new_unparsed_serial_input = false;
volatile char unparsed_serial_input[max_unparsed_serial_input];

int current_cmd = 0;
String current_arg;
bool new_cmd = false;


void setup() {
  Serial.begin(115200);
  Timer3.initialize(500);
  Timer3.attachInterrupt(get_string_from_serial);
  Serial.println("<MCU_init>");
}

long last = 0;
void loop() {

  static long last_parse = 0;
  if (micros() - last_parse > 1000) {
    get_parsed_string();
    last_parse = micros();
  }

  if (new_cmd) {
    Serial.print("cmd: ");
    Serial.print(current_cmd);
    Serial.print(", arg: ");
    Serial.println(current_arg);
    new_cmd = false;
  }
}

void get_string_from_serial() {
  const char init_char = '<';
  const char end_char = '>';
  static uint8_t serial_input_parse_position = 0;
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

void get_parsed_string() {

  if (new_unparsed_serial_input) {
    char unparsed_serial_input_AT_THIS_MOMENT[35];
    strcpy(unparsed_serial_input_AT_THIS_MOMENT, unparsed_serial_input);

    current_arg = "";

    for (int i = 0; i < 35; i++) {
      if (unparsed_serial_input_AT_THIS_MOMENT[i]) {
        if (i == 0) {
          print("")
          current_cmd = 10 * static_cast<int>(unparsed_serial_input_AT_THIS_MOMENT[0]) - 47;
        } else if (i == 1) {
          current_cmd = static_cast<int>(unparsed_serial_input_AT_THIS_MOMENT[1]) - 47;
        } else {
          current_arg += unparsed_serial_input_AT_THIS_MOMENT[i];
        }
      } else {
        new_unparsed_serial_input = false;
        new_cmd = true;

        return;
      }
    }

    new_cmd = true;
    new_unparsed_serial_input = false;
  }
}
