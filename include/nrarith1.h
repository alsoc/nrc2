/* ------------------ */
/* --- nrarith1.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRARITH1_H_
#define _NRARITH1_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrarith1.h")
#endif

/* ======================================================================== */
/* === Beta reduction ===================================================== */
/* ======================================================================== */

int32 sum_bvector (byte  *v, long nl, long nh);
int32 sum_si16vector (sint16  *v, long nl, long nh);
int32 sum_si32vector (sint32   *v, long nl, long nh);
float sum_f32vector  (float32 *v, long nl, long nh);

// ==================
// === min_vector ===
// ==================

sint8   min_si8vector  (sint8   *v, long nl, long nh);
uint8   min_ui8vector  (uint8   *v, long nl, long nh);
sint16  min_si16vector (sint16  *v, long nl, long nh);
uint16  min_ui16vector (uint16  *v, long nl, long nh);
sint32  min_si32vector (sint32  *v, long nl, long nh);
uint32  min_ui32vector (uint32  *v, long nl, long nh);
float32 min_f32vector  (float32 *v, long nl, long nh);
float64 min_f64vector  (float64 *v, long nl, long nh);

// ==================
// === max_vector ===
// ==================

sint8  max_si8vector  (sint8   *v, long nl, long nh);
uint8  max_ui8vector  (uint8   *v, long nl, long nh);
sint16 max_si16vector (sint16  *v, long nl, long nh);
uint16 max_ui16vector (uint16  *v, long nl, long nh);
sint32 max_si32vector (sint32  *v, long nl, long nh);
uint32 max_ui32vector (uint32  *v, long nl, long nh);

float32 max_f32vector (float32 *v, long nl, long nh);
float64 max_f64vector (float64 *v, long nl, long nh);

// ======================
// === min_vector_pos ===
// ======================

sint8  min_si8vector_pos  (sint8  *v, long nl, long nh, int *pos);
uint8  min_ui8vector_pos  (uint8  *v, long nl, long nh, int *pos);
sint16 min_si16vector_pos (sint16 *v, long nl, long nh, int *pos);
uint16 min_ui16vector_pos (uint16 *v, long nl, long nh, int *pos);
sint32 min_si32vector_pos (sint32 *v, long nl, long nh, int *pos);
uint32 min_ui32vector_pos (uint32 *v, long nl, long nh, int *pos);

float32 min_f32vector_pos (float32 *v, long nl, long nh, int *pos);
float64 min_f64vector_pos (float64 *v, long nl, long nh, int *pos);

// ======================
// === max_vector_pos ===
// ======================

sint8  min_si8vector_pos  (sint8  *v, long nl, long nh, int *pos);
uint8  min_ui8vector_pos  (uint8  *v, long nl, long nh, int *pos);
sint16 min_si16vector_pos (sint16 *v, long nl, long nh, int *pos);
uint16 min_ui16vector_pos (uint16 *v, long nl, long nh, int *pos);
sint32 min_si32vector_pos (sint32 *v, long nl, long nh, int *pos);
uint32 min_ui32vector_pos (uint32 *v, long nl, long nh, int *pos);

float32 min_f32vector_pos (float32 *v, long nl, long nh, int *pos);
float64 min_f64vector_pos (float64 *v, long nl, long nh, int *pos);

// =============
// === other ===
// =============

void beta_sum_rgb32vector    (rgb32 *S,long nl,long nh, rgb32 *D);
void beta_average_rgb32vector(rgb32 *S,long nl,long nh, rgb32 *D);

void add_i32vector(int32 *S1, long nl,long nh, int32 *S2, int32 *D);
void sub_i32vector(int32 *S1, long nl,long nh, int32 *S2, int32 *D);

void cumulleft_i32vector  (int32 *S, long nl, long nh, int32 *D);
void cumulleft_rgb32vector(rgb32 *S, long nl, long nh, rgb32 *D);

void cumulright_i32vector  (int32 *S, long nl, long nh, int32 *D);
void cumulright_rgb32vector(rgb32 *S, long nl, long nh, rgb32 *D);

void mulc_i32vector     (int32 *S, long nl, long nh, int32 c, int32 *D);
void mulc_rgb32vector   (rgb32 *S, long nl, long nh, int32 c, rgb32 *D);
void divc_i32vector     (int32 *S, long nl, long nh, int32 c, int32 *D);
void divc_rgb32vector   (rgb32 *S, long nl, long nh, int32 c, rgb32 *D);

void mulfrac_i32vector  (int32 *S, long nl, long nh, int32 a, int32 b, int32 *D);
void mulfrac_rgb32vector(rgb32 *S, long nl, long nh, int32 a, int32 b, rgb32 *D);

#ifdef __cplusplus
}
#endif

#endif /* _NRARITH1_H_ */
