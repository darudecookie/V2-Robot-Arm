#ifndef Serial_Communications_Funcs_h
#define Serial_Communications_Funcs_h

#include "Arduino.h"

extern float decode_1_float(byte byte_array[3]);
extern void decode_7_floats(float target_array[7], byte input_bytes[21]);

extern void encode_1_float(float input_float, byte modified_bytes[3]);
extern void encode_7_floats(float input_float_aray[7], byte modifid_bytes[21]);

#endif