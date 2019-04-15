/* ---------------- */
/* --- nrset1.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRSET1_H_
#define _NRSET1_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrset1.h")
#endif

/*
 * ------------
 * --- Zero ---
 * ------------
 */

void zero_si8vector  (sint8   *v, long nl, long nh);
void zero_ui8vector  (uint8   *v, long nl, long nh);
void zero_si16vector (sint16  *v, long nl, long nh);
void zero_ui16vector (uint16  *v, long nl, long nh);
void zero_si32vector (sint32  *v, long nl, long nh);
void zero_ui32vector (uint32  *v, long nl, long nh);
void zero_si64vector (sint64  *v, long nl, long nh);
void zero_ui64vector (uint64  *v, long nl, long nh);

void zero_f32vector  (float32 *v, long nl, long nh);
void zero_f64vector  (float64 *v, long nl, long nh);

void zero_rgb8vector (rgb8    *v, long nl, long nh);
void zero_rgbx8vector(rgbx8   *v, long nl, long nh);

/*
 * ------------------
 * --- set_vector ---
 * ------------------
 */

void set_si8vector  (sint8   *v, long nl, long nh, sint8   x);
void set_ui8vector  (uint8   *v, long nl, long nh, uint8   x);
void set_si16vector (sint16  *v, long nl, long nh, int16   x);
void set_ui16vector (uint16  *v, long nl, long nh, uint16  x);
void set_si32vector (sint32  *v, long nl, long nh, sint32  x);
void set_ui32vector (uint32  *v, long nl, long nh, uint32  x);
void set_si64vector (sint64  *v, long nl, long nh, sint64  x);
void set_ui64vector (uint64  *v, long nl, long nh, uint64  x);

void set_f32vector  (float32 *v, long nl, long nh, float32 x);
void set_f64vector  (float64 *v, long nl, long nh, float64 x);

void set_rgb8vector (rgb8    *v, long nl, long nh, rgb8    x);
void set_rgbx8vector(rgbx8   *v, long nl, long nh, rgbx8   x);

/*
 * ------------------------
 * --- set_vector_param ---
 * ------------------------
 */

void set_si8vector_param  (sint8   *v, long nl, long nh, sint8   x, sint8  xstep);
void set_ui8vector_param  (uint8   *v, long nl, long nh, uint8   x, uint8  xstep);
void set_si16vector_param (sint16  *v, long nl, long nh, int16   x, sint16 xstep);
void set_ui16vector_param (uint16  *v, long nl, long nh, uint16  x, uint16 xstep);
void set_si32vector_param (sint32  *v, long nl, long nh, sint32  x, sint32 xstep);
void set_ui32vector_param (uint32  *v, long nl, long nh, uint32  x, uint32 xstep);
void set_si64vector_param (sint64  *v, long nl, long nh, sint64  x, sint64 xstep);
void set_ui64vector_param (uint64  *v, long nl, long nh, uint64  x, uint64 xstep);

void set_f32vector_param  (float32 *v, long nl, long nh, float32 x, float32 xstep);
void set_f64vector_param  (float64 *v, long nl, long nh, float64 x, float64 xstep);

void set_rgb8vector_param (rgb8    *v, long nl, long nh, rgb8    x, rgb8  xstep);
void set_rgbx8vector_param(rgbx8   *v, long nl, long nh, rgbx8   x, rgbx8 xstep);

/*
 * --------------------
 * --- set_vector_j ---
 * --------------------
 */

void set_si8vector_j  (sint8   *v, long nl, long nh);
void set_ui8vector_j  (uint8   *v, long nl, long nh);
void set_si16vector_j (sint16  *v, long nl, long nh);
void set_ui16vector_j (uint16  *v, long nl, long nh);
void set_si32vector_j (sint32  *v, long nl, long nh);
void set_ui32vector_j (uint32  *v, long nl, long nh);

void set_f32vector_j  (float32 *v, long nl, long nh);
void set_f64vector_j  (float64 *v, long nl, long nh);

void set_rgb8vector_j (rgb8    *v, long nl, long nh);
void set_rgbx8vector_j(rgbx8   *v, long nl, long nh);

/*
 * ----------------------
 * --- set_vector_str ---
 * ----------------------
 */

void set_si8vector_str  (sint8  *v, long nl, long nh, char *str);
void set_ui8vector_str  (uint8  *v, long nl, long nh, char *str);
void set_si16vector_str (sint16 *v, long nl, long nh, char *str);
void set_ui16vector_str (uint16 *v, long nl, long nh, char *str);
void set_si32vector_str (sint32 *v, long nl, long nh, char *str);
void set_ui32vector_str (uint32 *v, long nl, long nh, char *str);

#ifdef __cplusplus
}
#endif

#endif /* __NRSET1_H__ */
