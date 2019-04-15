/* ---------------- */
/* --- nrmem2.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRMEM2_H_
#define _NRMEM2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif


void split_rgb8matrix(rgb8 **X, long nrl, long nrh, long ncl, long nch, uint8 **R, uint8 **G, uint8 **B);
void merge_rgb8matrix(uint8 **R, uint8 **G, uint8 **B, long nrl, long nrh, long ncl, long nch, rgb8 **X);

/*
 * ------------------
 * --- dup_matrix ---
 * ------------------
 */

void dup_si8matrix    (sint8  **X, long nrl,long nrh,long ncl, long nch,  sint8   **Y);
void dup_ui8matrix    (uint8  **X, long nrl,long nrh,long ncl, long nch,  uint8   **Y);
void dup_si16matrix   (sint16 **X, long nrl,long nrh,long ncl, long nch,  sint16  **Y);
void dup_ui16matrix   (uint16 **X, long nrl,long nrh,long ncl, long nch,  uint16  **Y);
void dup_si32matrix   (sint32 **X, long nrl,long nrh,long ncl, long nch,  sint32  **Y);
void dup_ui32matrix   (uint32 **X, long nrl,long nrh,long ncl, long nch,  uint32  **Y);
void dup_si64matrix   (sint64 **X, long nrl,long nrh,long ncl, long nch,  sint64  **Y);
void dup_ui64matrix   (uint64 **X, long nrl,long nrh,long ncl, long nch,  uint64  **Y);

void dup_f32matrix   (float32 **X, long nrl,long nrh,long ncl, long nch,  float32 **Y);
void dup_f64matrix   (float64 **X, long nrl,long nrh,long ncl, long nch,  float64 **Y);

void dup_rgb8matrix  (rgb8    **X, long nrl,long nrh,long ncl, long nch,  rgb8    **Y);
void dup_rgbx8matrix (rgbx8   **X, long nrl,long nrh,long ncl, long nch,  rgbx8   **Y);


/*
 * --------------
 * --- resize ---
 * --------------
 */

void resize_si8matrix  (sint8   **m, long nrl, long nrh, long ncl, long nch);
void resize_ui8matrix  (uint8   **m, long nrl, long nrh, long ncl, long nch);
void resize_si16matrix (sint16  **m, long nrl, long nrh, long ncl, long nch);
void resize_ui16matrix (uint16  **m, long nrl, long nrh, long ncl, long nch);
void resize_si32matrix (sint32  **m, long nrl, long nrh, long ncl, long nch);
void resize_ui32matrix (uint32  **m, long nrl, long nrh, long ncl, long nch);

void resize_f32matrix  (float32 **m, long nrl, long nrh, long ncl, long nch);
void resize_f64matrix  (float64 **m, long nrl, long nrh, long ncl, long nch);

void resize_rgb8matrix (rgb8    **m, long nrl, long nrh, long ncl, long nch);
void resize_rgbx8matrix(rgbx8   **m, long nrl, long nrh, long ncl, long nch);


/*
 * ----------------------
 * --- convert matrix ---
 * ----------------------
 */

/* new versions UP */
void convert_si8matrix_si16matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, sint16  **Y);
void convert_si8matrix_si32matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, sint32  **Y);
void convert_si8matrix_f32matrix (sint8 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_si8matrix_f64matrix (sint8 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

void convert_ui8matrix_ui32matrix (uint8 **X, int nrl, int nrh, int ncl, int nch, uint32  **Y);
void convert_ui8matrix_ui16matrix (uint8 **X, int nrl, int nrh, int ncl, int nch, uint16  **Y);
void convert_ui8matrix_f32matrix  (uint8 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_ui8matrix_f64matrix  (uint8 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

void convert_ui8matrix_rgb8matrix (uint8 **X, int nrl, int nrh, int ncl, int nch, rgb8    **Y);
void convert_ui8matrix_rgbx8matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, rgbx8   **Y);

void convert_si16matrix_si32matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, sint32  **Y);
void convert_si16matrix_f32matrix (sint16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_si16matrix_f64matrix (sint16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

void convert_ui16matrix_ui32matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, uint32  **Y);
void convert_ui16matrix_f32matrix (uint16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_ui16matrix_f64matrix (uint16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

void convert_si32matrix_f32matrix (sint32 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_si32matrix_f64matrix (sint32 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

void convert_ui32matrix_f32matrix (uint32 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_ui32matrix_f64matrix (uint32 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);


/* new versions DOWN */
void convert_ui16matrix_ui8matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, uint8 **y);
void convert_si16matrix_si8matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, sint8 **y);
void convert_ui32matrix_ui8matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, uint8 **y);
void convert_si32matrix_si8matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, sint8 **y);
void convert_f32matrix_ui8matrix (float32 **X, int nrl, int nrh, int ncl, int nch, uint8 **y);
void convert_f32matrix_si8matrix (float32 **X, int nrl, int nrh, int ncl, int nch, sint8 **y);

void convert_ui32matrix_ui16matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, uint16 **y);
void convert_si32matrix_si16matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, sint16 **y);
void convert_f32matrix_ui16matrix (float32 **X, int nrl, int nrh, int ncl, int nch, uint16 **y);
void convert_f32matrix_si16matrix (float32 **X, int nrl, int nrh, int ncl, int nch, sint16 **y);

void convert_f32matrix_ui32matrix (float32 **X, int nrl, int nrh, int ncl, int nch, uint32 **y);
void convert_f32matrix_si32matrix (float32 **X, int nrl, int nrh, int ncl, int nch, sint32 **y);

/*
 * ----------------------
 * --- lowpart_matrix ---
 * ----------------------
 */

void lowpart_ui32matrix_ui8matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint8  **Y);
void lowpart_ui32matrix_ui16matrix(uint32 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y);

/*
 * -------------------
 * --- split-merge ---
 * -------------------
 */

void split_rgb8matrix(rgb8 **X, long nrl, long nrh, long ncl, long nch, uint8 **R, uint8 **G, uint8 **B);
void merge_rgb8matrix(uint8 **R, uint8 **G, uint8 **B, long nrl, long nrh, long ncl, long nch, rgb8 **X);

#ifdef __cplusplus
}
#endif

#else
//#pragma message(" Warning : attemp to re-include nrmem2.h")
#endif /* _NRMEM2_H_ */
