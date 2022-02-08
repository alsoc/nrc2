/* ---------------- */
/* --- nrset2.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_SET2_H_
#define _NR_SET2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrset2.h")
#endif

void zero_si8matrix  (sint8    **m, int i0,int i1,int j0,int j1);
void zero_ui8matrix  (uint8    **m, int i0,int i1,int j0,int j1);
void zero_si16matrix (sint16   **m, int i0,int i1,int j0,int j1);
void zero_ui16matrix (uint16   **m, int i0,int i1,int j0,int j1);
void zero_si32matrix (sint32   **m, int i0,int i1,int j0,int j1);
void zero_ui32matrix (uint32   **m, int i0,int i1,int j0,int j1);
void zero_si64matrix (sint64   **m, int i0,int i1,int j0,int j1);
void zero_ui64matrix (uint64   **m, int i0,int i1,int j0,int j1);

void zero_f32matrix  (float32  **m, int i0,int i1,int j0,int j1);
void zero_f64matrix  (float64  **m, int i0,int i1,int j0,int j1);

void zero_rgb8matrix (rgb8     **m, int i0,int i1,int j0,int j1);
void zero_rgbx8matrix(rgbx8    **m, int i0,int i1,int j0,int j1);

/* ------------------ */
/* --- set_matrix --- */
/* ------------------ */

void set_si8matrix  (sint8   **m,int i0,int i1,int j0, int j1, sint8   x);
void set_ui8matrix  (uint8   **m,int i0,int i1,int j0, int j1, uint8   x);
void set_si16matrix (sint16  **m,int i0,int i1,int j0, int j1, sint16  x);
void set_ui16matrix (uint16  **m,int i0,int i1,int j0, int j1, uint16  x);
void set_si32matrix (sint32  **m,int i0,int i1,int j0, int j1, sint32  x);
void set_ui32matrix (uint32  **m,int i0,int i1,int j0, int j1, uint32  x);
void set_si64matrix (sint64  **m,int i0,int i1,int j0, int j1, sint64  x);
void set_ui64matrix (uint64  **m,int i0,int i1,int j0, int j1, uint64  x);

void set_f32matrix  (float32 **m,int i0,int i1,int j0, int j1, float32 x);
void set_f64matrix  (float64 **m,int i0,int i1,int j0, int j1, float64 x);

void set_rgb8matrix (rgb8    **m,int i0,int i1,int j0, int j1, rgb8    x);
void set_rgbx8matrix(rgbx8   **m,int i0,int i1,int j0, int j1, rgbx8   x);

/*
 * ------------------------
 * --- set_matrix_param ---
 * ------------------------
 */

void set_si8matrix_param  (sint8   **m, int i0, int i1, int j0, int j1, sint8   x, sint8   xstep, sint8   ystep);
void set_ui8matrix_param  (uint8   **m, int i0, int i1, int j0, int j1, uint8   x, uint8   xstep, uint8   ystep);
void set_si16matrix_param (sint16  **m, int i0, int i1, int j0, int j1, sint16  x, sint16  xstep, sint16  ystep);
void set_ui16matrix_param (uint16  **m, int i0, int i1, int j0, int j1, uint16  x, uint16  xstep, uint16  ystep);
void set_si32matrix_param (sint32  **m, int i0, int i1, int j0, int j1, sint32  x, sint32  xstep, sint32  ystep);
void set_ui32matrix_param (uint32  **m, int i0, int i1, int j0, int j1, uint32  x, uint32  xstep, uint32  ystep);
void set_si64matrix_param (sint64  **m, int i0, int i1, int j0, int j1, sint64  x, sint64  xstep, sint64  ystep);
void set_ui64matrix_param (uint64  **m, int i0, int i1, int j0, int j1, uint64  x, uint64  xstep, uint64  ystep);

void set_f32matrix_param  (float32 **m, int i0, int i1, int j0, int j1, float32 x, float32 xstep, float32 ystep);
void set_f64matrix_param  (float64 **m, int i0, int i1, int j0, int j1, float64 x, float64 xstep, float64 ystep);

void set_rgb8matrix_param (rgb8    **m, int i0, int i1, int j0, int j1, rgb8    x, rgb8    xstep, rgb8    ystep);
void set_rgbx8matrix_param(rgbx8   **m, int i0, int i1, int j0, int j1, rgbx8   x, rgbx8   xstep, rgbx8   ystep);

/*
 * --------------------
 * --- set_matrix_i ---
 * --------------------
 */

/*
 *  [i0 .. i0]   [1 1 1]   
 * m[...    ...] = [2 2 2]
 *  [i1 .. i1]   [3 3 3]   
 */

void set_si8matrix_i  (sint8   **m, int i0, int i1, int j0, int j1);
void set_ui8matrix_i  (uint8   **m, int i0, int i1, int j0, int j1);
void set_si16matrix_i (sint16  **m, int i0, int i1, int j0, int j1);
void set_ui16matrix_i (uint16  **m, int i0, int i1, int j0, int j1);
void set_si32matrix_i (sint32  **m, int i0, int i1, int j0, int j1);
void set_ui32matrix_i (uint32  **m, int i0, int i1, int j0, int j1);
void set_si64matrix_i (sint64  **m, int i0, int i1, int j0, int j1);
void set_ui64matrix_i (uint64  **m, int i0, int i1, int j0, int j1);

void set_f32matrix_i  (float32 **m, int i0, int i1, int j0, int j1);
void set_f64matrix_i  (float64 **m, int i0, int i1, int j0, int j1);

void set_rgb8matrix_i (rgb8    **m, int i0, int i1, int j0, int j1);
void set_rgbx8matrix_i(rgbx8   **m, int i0, int i1, int j0, int j1);

/*
 * --------------------
 * --- set_matrix_j ---
 * --------------------
 */

 /*
 *  [j0 .. j1]   [1 2 3]   
 * m[... .. ...] = [1 2 3]
 *  [j0 .. j1]   [1 2 3]   
 */

void set_si8matrix_j  (sint8   **m, int i0, int i1, int j0, int j1);
void set_ui8matrix_j  (uint8   **m, int i0, int i1, int j0, int j1);
void set_si16matrix_j (sint16  **m, int i0, int i1, int j0, int j1);
void set_ui16matrix_j (uint16  **m, int i0, int i1, int j0, int j1);
void set_si32matrix_j (sint32  **m, int i0, int i1, int j0, int j1);
void set_ui32matrix_j (uint32  **m, int i0, int i1, int j0, int j1);
void set_si64matrix_j (sint64  **m, int i0, int i1, int j0, int j1);
void set_ui64matrix_  (uint64  **m, int i0, int i1, int j0, int j1);

void set_f32matrix_j  (float32 **m, int i0, int i1, int j0, int j1);
void set_f64matrix_j  (float64 **m, int i0, int i1, int j0, int j1);

void set_rgb8matrix_j (rgb8    **m, int i0, int i1, int j0, int j1);
void set_rgbx8matrix_j(rgbx8   **m, int i0, int i1, int j0, int j1);

/*
 * Initialisation des bords
 */


void set_ui8matrix_border1(uint8 **m,int i0,int i1,int j0, int j1,        uint8 x);
void set_ui8matrix_border (uint8 **m,int i0,int i1,int j0, int j1, int n, uint8 x);

#ifdef __cplusplus
}
#endif

#endif // _NR_SET2_H_
