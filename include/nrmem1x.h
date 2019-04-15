/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

void convert_rgb32vector_rgb8vector(rgb32  *x, long nl, long nh, rgb8    *y);

void roll_svector(sint16  *v, long nl, long nh);

void move_ui8vector_1left_block   (uint8   *v, long nl, long nh);
void move_ui16vector_1left_block(uint16 *v, long nl, long nh);
void move_si16vector_1left_block(sint16 *v, long nl, long nh);
void move_ui32vector_1left_block(uint32 *v, long nl, long nh);
void move_si32vector_1left_block(sint32 *v, long nl, long nh);

void move_ui8vector_1right_block (uint8  *v, long nl, long nh);
void move_ui16vector_1right_block(uint16 *v, long nl, long nh);
void move_si16vector_1right_block(sint16 *v, long nl, long nh);
void move_ui32vector_1right_block(uint32 *v, long nl, long nh);
void move_si32vector_1right_block(sint32 *v, long nl, long nh);

void copy1c_bvector    (uint8   *src, long nc, uint8   *dst, long nl, long nh);
void copy1c_si16vector (sint16  *src, long nc, sint16  *dst, long nl, long nh);
void copy1c_ui16vector (uint16  *src, long nc, uint16  *dst, long nl, long nh);
void copy1c_ui32vector (uint32  *src, long nc, uint32  *dst, long nl, long nh);
void copy1c_f32vector  (float32 *src, long nc, float32 *dst, long nl, long nh);
void copy1c_f64vector  (float64 *src, long nc, float64 *dst, long nl, long nh);
void copy1c_rgb8vector (rgb8    *src, long nc, rgb8    *dst, long nl, long nh);
void copy1c_rgbx8vector(rgbx8   *src, long nc, rgbx8   *dst, long nl, long nh);

void copy_ui8vector_mod (uint8   *src, long nl, long nh, long m, uint8   *dst);
void copy_ui16vector_mod(uint16  *src, long nl, long nh, long m, uint16  *dst);
void copy_si16vector_mod(sint16  *src, long nl, long nh, long m, sint16  *dst);
void copy_ui32vector_mod(uint32  *src, long nl, long nh, long m, uint32  *dst);
void copy_si32vector_mod(sint32  *src, long nl, long nh, long m, sint32  *dst);
void copy_f32vector_mod (float32 *src, long nl, long nh, long m, float32 *dst);
void copy_f64vector_mod (float64 *src, long nl, long nh, long m, float64 *dst);
