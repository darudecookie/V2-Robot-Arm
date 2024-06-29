#ifndef Serial_Communications_Funcs_h
#define Serial_Communications_Funcs_h


extern float decode_1_float(unsigned char byte_array[3]);

extern void decode_7_floats(float target_array[7], unsigned char input_bytes[21]);

extern void get_string_from_serial();


extern void encode_1_float(float input_float, unsigned char modified_bytes[3]);

extern void encode_7_floats(float input_float_aray[7], unsigned char modifid_bytes[21]);


#endif