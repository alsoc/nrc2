/* ---------------- */
/* --- nrmem1.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * 
*/

#ifndef __NRMEM1_H__
#define __NRMEM1_H__

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrmem1.h ***")
#endif


void dup_si8vector   (sint8   *X, long nl, long nh, sint8   *Y);
void dup_ui8vector   (uint8   *X, long nl, long nh, uint8   *Y);
void dup_si16vector  (sint16  *X, long nl, long nh, sint16  *Y);
void dup_ui16vector  (uint16  *X, long nl, long nh, uint16  *Y);
void dup_si32vector  (sint32  *X, long nl, long nh, sint32  *Y);
void dup_ui32vector  (uint32  *X, long nl, long nh, uint32  *Y);
void dup_si64vector  (sint64  *X, long nl, long nh, sint64  *Y);
void dup_ui64vector  (uint64  *X, long nl, long nh, uint64  *Y);
void dup_f32vector   (float32 *X, long nl, long nh, float32 *Y);
void dup_f64vector   (float64 *X, long nl, long nh, float64 *Y);
void dup_rgb8vector  (rgb8    *X, long nl, long nh, rgb8    *Y);
void dup_rgbx8vector (rgbx8   *X, long nl, long nh, rgbx8   *Y);

/* ---------------- */
/* -- Convertion -- */
/* ---------------- */

// UP

void convert_si8vector_si16vector (sint8 *X, long nl, long nh, sint16  *Y);
void convert_si8vector_si32vector (sint8 *X, long nl, long nh, sint32  *Y);
void convert_si8vector_f32vector  (sint8 *X, long nl, long nh, float32 *Y);
void convert_si8vector_f64vector  (sint8 *X, long nl, long nh, float64 *Y);

void convert_ui8vector_ui16vector (uint8 *X, long nl, long nh, uint16  *Y);
void convert_ui8vector_ui32vector (uint8 *X, long nl, long nh, uint32  *Y);
void convert_ui8vector_f32vector  (uint8 *X, long nl, long nh, float32 *Y);
void convert_ui8vector_f64vector  (uint8 *X, long nl, long nh, float64 *Y);
void convert_ui8vector_rgb8vector (uint8 *X, long nl, long nh, rgb8    *Y);
void convert_ui8vector_rgbx8vector(uint8 *X, long nl, long nh, rgbx8   *Y);

void convert_si16vector_si32vector (sint16 *X, long nl, long nh, sint32  *Y);
void convert_si16vector_f32vector  (sint16 *X, long nl, long nh, float32 *Y);
void convert_si16vector_f64vector  (sint16 *X, long nl, long nh, float64 *Y);

void convert_ui16vector_ui32vector (uint16 *X, long nl, long nh, uint32  *Y);
void convert_ui16vector_f32vector  (uint16 *X, long nl, long nh, float32 *Y);
void convert_ui16vector_f64vector  (uint16 *X, long nl, long nh, float64 *Y);

void convert_si32vector_f32vector (sint32 *X, long nl, long nh, float32 *Y);
void convert_si32vector_f64vector (sint32 *X, long nl, long nh, float64 *Y);

void convert_ui32vector_f32vector (uint32 *X, long nl, long nh, float32 *Y);
void convert_ui32vector_f64vector (uint32 *X, long nl, long nh, float64 *Y);

void convert_f32vector_f64vector (float32 *X, long nl, long nh, float64 *Y);

// DOWN

void convert_si16vector_si8vector(sint16 *X, long nl, long nh, sint8 *Y);

void convert_ui16vector_ui8vector(uint16 *X, long nl, long nh, uint8 *Y);

void convert_si32vector_si8vector (sint32 *X, long nl, long nh, sint8  *Y);
void convert_si32vector_si16vector(sint32 *X, long nl, long nh, sint16 *Y);

void convert_ui32vector_ui8vector (uint32 *X, long nl, long nh, uint8  *Y);
void convert_ui32vector_ui16vector(uint32 *X, long nl, long nh, uint16 *Y);

void convert_f32vector_si8vector (float32 *X, long nl, long nh, sint8  *Y);
void convert_f32vector_ui8vector (float32 *X, long nl, long nh, uint8  *Y);
void convert_f32vector_si16vector(float32 *X, long nl, long nh, sint16 *Y);
void convert_f32vector_ui16vector(float32 *X, long nl, long nh, uint16 *Y);
void convert_f32vector_si32vector(float32 *X, long nl, long nh, sint32 *Y);
void convert_f32vector_ui32vector(float32 *X, long nl, long nh, uint32 *Y);

void convert_f64vector_si8vector (float64 *X, long nl, long nh, sint8   *Y);
void convert_f64vector_ui8vector (float64 *X, long nl, long nh, uint8   *Y);
void convert_f64vector_si16vector(float64 *X, long nl, long nh, sint16  *Y);
void convert_f64vector_ui16vector(float64 *X, long nl, long nh, uint16  *Y);
void convert_f64vector_si32vector(float64 *X, long nl, long nh, sint32  *Y);
void convert_f64vector_ui32vector(float64 *X, long nl, long nh, uint32  *Y);
void convert_f64vector_f32vector (float64 *X, long nl, long nh, float32 *Y);

void convert_rgb8vector_ui8vector (rgb8  *X, long nl, long nh, uint8 *Y);
void convert_rgbx8vector_ui8vector(rgbx8 *X, long nl, long nh, uint8 *Y);

/*
 * ---------------
 * --- LowPart ---
 * ---------------
 */

void lowpart_ui16vector_ui8vector(uint16 *X, long nl,long nh, uint8 *Y);
void lowpart_ui32vector_ui8vector(uint32 *X, long nl,long nh, uint8 *Y);

/* --------------------- */
/* --- split & merge --- */
/* --------------------- */

void split_rgb8vector(rgb8   *X, long nl, long nh,  uint8 *R,  uint8 *G,  uint8 *B);
void split_rgb32vector(rgb32 *X, long nl, long nh, uint32 *R, uint32 *G, uint32 *B);

void merge_rgb8vector(uint8   *R, uint8  *G, uint8  *B, long nl, long nh, rgb8  *X);
void merge_rgb32vector(uint32 *R, uint32 *G, uint32 *B, long nl, long nh, rgb32 *X);

#ifdef __cplusplus
}
#endif

#endif /* __NRMEM1_H__ */
