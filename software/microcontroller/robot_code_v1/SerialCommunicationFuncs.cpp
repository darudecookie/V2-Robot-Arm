#include "SerialCommunicationFuncs.h"

#include "Arduino.h"
#include <stdlib.h>


float decode_1_float(unsigned char byte_array[3]) {
  float parsed_float = 0;

  if (static_cast<short>(byte_array[0]) >= 101) {
    parsed_float = -(static_cast<short>(byte_array[0]) - 101);
    parsed_float -= (static_cast<float>(byte_array[1]) - 101) / 100;
    parsed_float -= (static_cast<float>(byte_array[2]) - 101) / (100 * 100);
  } else {
    parsed_float = static_cast<int>(byte_array[0]);
    parsed_float += static_cast<float>(byte_array[1]) / 100;
    parsed_float += static_cast<float>(byte_array[2]) / (100 * 100);
  }
  return parsed_float;
}

void decode_7_floats(float target_array[7], unsigned char input_bytes[21]) {
  for (int i = 0; i < 7; i++) {
    unsigned char byte_array[3] = { input_bytes[i * 3], input_bytes[i * 3 + 1], input_bytes[i * 3 + 2] };

    target_array[i] = decode_1_float(byte_array);
  }
}

void encode_1_float(float input_float, unsigned char modified_bytes[3]) {
  short float_sections[3] = {
    (short)(input_float),
    (short)(input_float * 100) - (short)(input_float)*100,
    (short)(input_float * 100 * 100) - (short)(input_float * 100) * 100,
  };

  for (unsigned char i = 0; i < 3; i++) {
    if (float_sections[i] < 0) {
      modified_bytes[i] = abs(float_sections[i]) + 101;
    }
  }
}

void encode_7_floats(float input_float_aray[7], unsigned char modified_bytes[21]) {
  for (unsigned char i = 0; i < 21; i += 3) {
    unsigned char input_bytes[3] = {
      modified_bytes[i], modified_bytes[i + 1], modified_bytes[i + 2]
    };
    encode_1_float(input_float_aray[i / 3], input_bytes);
  }
}
