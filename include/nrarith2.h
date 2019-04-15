/* ----------------- */
/* -- nrarith2.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRARITH2_H_
#define _NRARITH2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrarith.h")
#endif

/* ------------------ */
/* --- Min_matrix --- */
/* ------------------ */

sint8   min_si8matrix  (sint8    **m, long nrl,long nrh,long ncl, long nch);
uint8   min_ui8matrix  (uint8    **m, long nrl,long nrh,long ncl, long nch);
sint16  min_si16matrix (sint16   **m, long nrl,long nrh,long ncl, long nch);
uint16  min_ui16matrix (uint16   **m, long nrl,long nrh,long ncl, long nch);
sint32  min_si32matrix (sint32   **m, long nrl,long nrh,long ncl, long nch);
uint32  min_ui32matrix (uint32   **m, long nrl,long nrh,long ncl, long nch);
sint64  min_si64matrix (sint64   **m, long nrl,long nrh,long ncl, long nch);
uint64  min_ui64matrix (uint64   **m, long nrl,long nrh,long ncl, long nch);
float32 min_f32matrix  (float32  **m, long nrl,long nrh,long ncl, long nch);
float64 min_f64matrix  (float64  **m, long nrl,long nrh,long ncl, long nch);

/* ------------------ */
/* --- Max_matrix --- */
/* ------------------ */

sint8   max_si8matrix  (sint8    **m, long nrl,long nrh,long ncl, long nch);
uint8   max_ui8matrix  (uint8    **m, long nrl,long nrh,long ncl, long nch);
sint16  max_si16matrix (sint16   **m, long nrl,long nrh,long ncl, long nch);
uint16  max_ui16matrix (uint16   **m, long nrl,long nrh,long ncl, long nch);
sint32  max_si32matrix (sint32   **m, long nrl,long nrh,long ncl, long nch);
uint32  max_ui32matrix (uint32   **m, long nrl,long nrh,long ncl, long nch);
sint64  max_si64matrix (sint64   **m, long nrl,long nrh,long ncl, long nch);
uint64  max_ui64matrix (uint64   **m, long nrl,long nrh,long ncl, long nch);
float32 max_f32matrix  (float32  **m, long nrl,long nrh,long ncl, long nch);
float64 max_f64matrix  (float64  **m, long nrl,long nrh,long ncl, long nch);

/* ------------------ */
/* --- Add Matrix --- */
/* ------------------ */

void add_si8matrix  (sint8   **X, long nrl,long nrh,long ncl, long nch, sint8   **Y, sint8   **Z);
void add_ui8matrix  (uint8   **X, long nrl,long nrh,long ncl, long nch, uint8   **Y, uint8   **Z);
void add_si16matrix (sint16  **X, long nrl,long nrh,long ncl, long nch, sint16  **Y, sint16  **Z);
void add_ui16matrix (uint16  **X, long nrl,long nrh,long ncl, long nch, uint16  **Y, uint16  **Z);
void add_si32matrix (sint32  **X, long nrl,long nrh,long ncl, long nch, sint32  **Y, sint32  **Z);
void add_ui32matrix (uint32  **X, long nrl,long nrh,long ncl, long nch, uint32  **Y, uint32  **Z);
void add_si64matrix (sint64  **X, long nrl,long nrh,long ncl, long nch, sint64  **Y, sint64  **Z);
void add_ui64matrix (uint64  **X, long nrl,long nrh,long ncl, long nch, uint64  **Y, uint64  **Z);

void add_f32matrix  (float32 **X, long nrl,long nrh,long ncl, long nch, float32 **Y, float32 **Z);
void add_f64matrix  (float64 **X, long nrl,long nrh,long ncl, long nch, float64 **Y, float64 **Z);

void add_rgb8matrix (rgb8    **X, long nrl,long nrh,long ncl, long nch, rgb8    **Y, rgb8    **Z);
void add_rgbx8matrix(rgbx8   **X, long nrl,long nrh,long ncl, long nch, rgbx8   **Y, rgbx8   **Z);

/* -------------------- */
/* --- Add constant --- */
/* -------------------- */

void addc_si8matrix  (sint8   **X, long nrl,long nrh,long ncl, long nch, sint8   y, sint8   **Z);
void addc_ui8matrix  (uint8   **X, long nrl,long nrh,long ncl, long nch, uint8   y, uint8   **Z);
void addc_si16matrix (sint16  **X, long nrl,long nrh,long ncl, long nch, sint16  y, sint16  **Z);
void addc_ui16matrix (uint16  **X, long nrl,long nrh,long ncl, long nch, uint16  y, uint16  **Z);
void addc_si32matrix (sint32  **X, long nrl,long nrh,long ncl, long nch, sint32  y, sint32  **Z);
void addc_ui32matrix (uint32  **X, long nrl,long nrh,long ncl, long nch, uint32  y, uint32  **Z);
void addc_si64matrix (sint64  **X, long nrl,long nrh,long ncl, long nch, sint64  y, sint64  **Z);
void addc_ui64matrix (uint64  **X, long nrl,long nrh,long ncl, long nch, uint64  y, uint64  **Z);

void addc_f32matrix  (float32 **X, long nrl,long nrh,long ncl, long nch, float32 y, float32 **Z);
void addc_f64matrix  (float64 **X, long nrl,long nrh,long ncl, long nch, float64 y, float64 **Z);

void addc_rgb8matrix (rgb8    **X, long nrl,long nrh,long ncl, long nch, rgb8    y, rgb8    **Z);
void addc_rgbx8matrix(rgbx8   **X, long nrl,long nrh,long ncl, long nch, rgbx8   y, rgbx8   **Z);

/* ----------- */
/* --- Sub --- */
/* ----------- */

void sub_si8matrix  (sint8   **X, long nrl,long nrh,long ncl, long nch, sint8   **Y, sint8   **Z);
void sub_ui8matrix  (uint8   **X, long nrl,long nrh,long ncl, long nch, uint8   **Y, uint8   **Z);
void sub_si16matrix (sint16  **X, long nrl,long nrh,long ncl, long nch, sint16  **Y, sint16  **Z);
void sub_ui16matrix (uint16  **X, long nrl,long nrh,long ncl, long nch, uint16  **Y, uint16  **Z);
void sub_si32matrix (sint32  **X, long nrl,long nrh,long ncl, long nch, sint32  **Y, sint32  **Z);
void sub_ui32matrix (uint32  **X, long nrl,long nrh,long ncl, long nch, uint32  **Y, uint32  **Z);
void sub_si64matrix (sint64  **X, long nrl,long nrh,long ncl, long nch, sint64  **Y, sint64  **Z);
void sub_ui64matrix (uint64  **X, long nrl,long nrh,long ncl, long nch, uint64  **Y, uint64  **Z);

void sub_f32matrix  (float32 **X, long nrl,long nrh,long ncl, long nch, float32 **Y, float32 **Z);
void sub_f64matrix  (float64 **X, long nrl,long nrh,long ncl, long nch, float64 **Y, float64 **Z);

void sub_rgb8matrix (rgb8    **X, long nrl,long nrh,long ncl, long nch, rgb8    **Y, rgb8    **Z);
void sub_rgbx8matrix(rgbx8   **X, long nrl,long nrh,long ncl, long nch, rgbx8   **Y, rgbx8   **Z);

/* --------------------- */
/* --- Sub constante --- */
/* --------------------- */

void subc_si8matrix  (sint8   **X, long nrl,long nrh,long ncl, long nch, sint8   y, sint8   **Z);
void subc_ui8matrix  (uint8   **X, long nrl,long nrh,long ncl, long nch, uint8   y, uint8   **Z);
void subc_si16matrix (sint16  **X, long nrl,long nrh,long ncl, long nch, sint16  y, sint16  **Z);
void subc_ui16matrix (uint16  **X, long nrl,long nrh,long ncl, long nch, uint16  y, uint16  **Z);
void subc_si32matrix (sint32  **X, long nrl,long nrh,long ncl, long nch, sint32  y, sint32  **Z);
void subc_ui32matrix (uint32  **X, long nrl,long nrh,long ncl, long nch, uint32  y, uint32  **Z);
void subc_si64matrix (sint64  **X, long nrl,long nrh,long ncl, long nch, sint64  y, sint64  **Z);
void subc_ui64matrix (uint64  **X, long nrl,long nrh,long ncl, long nch, uint64  y, uint64  **Z);

void subc_f32matrix  (float32 **X, long nrl,long nrh,long ncl, long nch, float32 y, float32 **Z);
void subc_f64matrix  (float64 **X, long nrl,long nrh,long ncl, long nch, float64 y, float64 **Z);

void subc_rgb8matrix (rgb8    **X, long nrl,long nrh,long ncl, long nch, rgb8    y, rgb8    **Z);
void subc_rgbx8matrix(rgbx8   **X, long nrl,long nrh,long ncl, long nch, rgbx8   y, rgbx8   **Z);

/* --------------------- */
/* --- Sub constante --- */
/* --------------------- */

// Z = X * y
void mulc_si8matrix  (sint8   **X, long nrl,long nrh,long ncl, long nch, sint8   y, sint8   **Z);
void mulc_ui8matrix  (uint8   **X, long nrl,long nrh,long ncl, long nch, uint8   y, uint8   **Z);
void mulc_si16matrix (sint16  **X, long nrl,long nrh,long ncl, long nch, sint16  y, sint16  **Z);
void mulc_ui16matrix (uint16  **X, long nrl,long nrh,long ncl, long nch, uint16  y, uint16  **Z);
void mulc_si32matrix (sint32  **X, long nrl,long nrh,long ncl, long nch, sint32  y, sint32  **Z);
void mulc_ui32matrix (uint32  **X, long nrl,long nrh,long ncl, long nch, uint32  y, uint32  **Z);
void mulc_si64matrix (sint64  **X, long nrl,long nrh,long ncl, long nch, sint64  y, sint64  **Z);
void mulc_ui64matrix (uint64  **X, long nrl,long nrh,long ncl, long nch, uint64  y, uint64  **Z);

void mulc_f32matrix  (float32 **X, long nrl,long nrh,long ncl, long nch, float32 y, float32 **Z);
void mulc_f64matrix  (float64 **X, long nrl,long nrh,long ncl, long nch, float64 y, float64 **Z);

void mulc_rgb8matrix (rgb8    **X, long nrl,long nrh,long ncl, long nch, rgb8    y, rgb8    **Z);
void mulc_rgbx8matrix(rgbx8   **X, long nrl,long nrh,long ncl, long nch, rgbx8   y, rgbx8   **Z);

/* --------------- */
/* --- MulFrac --- */
/* --------------- */
// m2 = (a*m1)/b
void mulfrac_bmatrix    (byte   **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  b, byte    **m2);
void mulfrac_si16matrix (sint16 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  b, sint16  **m2);
void mulfrac_ui16matrix (uint16 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  b, uint16  **m2);
void mulfrac_si32matrix (sint32 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  b, sint32  **m2);
void mulfrac_ui32matrix (uint32 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  b, uint32  **m2);
void mulfrac_rgb8matrix (rgb8   **m1, long nrl,long nrh,long ncl, long nch, rgb32  a, rgb32  b, rgb8    **m2);
void mulfrac_rgbx8matrix(rgbx8  **m1, long nrl,long nrh,long ncl, long nch, rgbx32 a, rgbx32 b, rgbx8   **m2);

void mulfrack_rgb8matrix (rgb8   **m1, long nrl,long nrh,long ncl, long nch, int32 a, int32 b, rgb8    **m2);
void mulfrack_rgbx8matrix(rgbx8  **m1, long nrl,long nrh,long ncl, long nch, int32 a, int32 b, rgbx8   **m2);

/* ---------------- */
/* --- MulShift --- */
/* ---------------- */
// m3 = (a*m1)>>s
void mulshift_bmatrix    (byte   **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  s, byte    **m2);
void mulshift_i16matrix  (int16  **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  s, int16   **m2);
void mulshift_ui16matrix (uint16 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  s, uint16  **m2);
void mulshift_i32matrix  (int32  **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  s, int32   **m2);
void mulshift_ui32matrix (uint32 **m1, long nrl,long nrh,long ncl, long nch, int32  a, int32  s, uint32  **m2);
void mulshift_rgb8matrix (rgb8   **m1, long nrl,long nrh,long ncl, long nch, rgb32  a, rgb32  s, rgb8    **m2);
void mulshift_rgbx8matrix(rgbx8  **m1, long nrl,long nrh,long ncl, long nch, rgbx32 a, rgbx32 s, rgbx8   **m2);

void mulshiftk_rgb8matrix (rgb8   **m1, long nrl,long nrh,long ncl, long nch, int32 a, int32 s, rgb8    **m2);
void mulshiftk_rgbx8matrix(rgbx8  **m1, long nrl,long nrh,long ncl, long nch, int32 a, int32 s, rgbx8   **m2);

void quadratic_error_si16matrix(sint16 **m1,long nrl,long nrh,long ncl, long nch, sint16 **m2, sint16 **m3);


#ifdef __cplusplus
}
#endif

#endif /* _NRARITH2_H_ */
