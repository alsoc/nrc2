/* ----------------- */
/* --- nrmem2x.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
* 
*/

#ifndef _NRMEM2X_H_
#define _NRMEM2X_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

/* ------------------------------------------ */
/* --- ATTENTION ---------------------------- */
/* ------------------------------------------ */
/* l'utilisation des fonctions endline        */
/* necessite l'allocation d'une ligne de plus */
/* (a cause du m[i+1]                         */
/* ------------------------------------------ */

void reset_endline_bmatrix   (byte   **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_i16matrix (int16  **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_ui16matrix(uint16 **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_imatrix   (int    **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_i32matrix (int32  **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_ui32matrix(uint32 **m, long nrl, long nrh, long ncl, long nch);
void reset_endline_i64matrix (int64  **m, long nrl, long nrh, long ncl, long nch);

void endline_bmatrix   (byte   **m, long i, long l);
void endline_i16matrix (int16  **m, long i, long l);
void endline_ui16matrix(uint16 **m, long i, long l);
void endline_imatrix   (int    **m, long i, long l);
void endline_i32matrix (int32  **m, long i, long l);
void endline_ui32matrix(uint32 **m, long i, long l);
void endline_i64matrix (int64  **m, long i, long l);

void endline0_bmatrix   (byte   **m, long i, long l, long ncl);
void endline0_i16matrix (int16  **m, long i, long l, long ncl);
void endline0_ui16matrix(uint16 **m, long i, long l, long ncl);
void endline0_imatrix   (int    **m, long i, long l, long ncl);
void endline0_i32matrix (int32  **m, long i, long l, long ncl);
void endline0_ui32matrix(uint32 **m, long i, long l, long ncl);
void endline0_i64matrix (int64  **m, long i, long l, long ncl);

void endline1_bmatrix   (byte   **m, long i, long l, long ncl);
void endline1_i16matrix (int16  **m, long i, long l, long ncl);
void endline1_ui16matrix(uint16 **m, long i, long l, long ncl);
void endline1_imatrix   (int    **m, long i, long l, long ncl);
void endline1_i32matrix (int32  **m, long i, long l, long ncl);
void endline1_ui32matrix(uint32 **m, long i, long l, long ncl);
void endline1_i64matrix (int64  **m, long i, long l, long ncl);

void resize_si16Pmatrix(si16Point **m, long nrl, long nrh, long ncl, long nch);
void resize_ui16Pmatrix(ui16Point **m, long nrl, long nrh, long ncl, long nch);
void resize_si32Pmatrix(si32Point **m, long nrl, long nrh, long ncl, long nch);
void resize_ui32Pmatrix(ui32Point **m, long nrl, long nrh, long ncl, long nch);
void resize_f32Pmatrix(f32Point   **m, long nrl, long nrh, long ncl, long nch);

// Triplet Matrix
void resize_si16Tmatrix(si16Triplet **m, long nrl, long nrh, long ncl, long nch);
void resize_ui16Tmatrix(ui16Triplet **m, long nrl, long nrh, long ncl, long nch);
void resize_si32Tmatrix(si32Triplet **m, long nrl, long nrh, long ncl, long nch);
void resize_ui32Tmatrix(ui32Triplet **m, long nrl, long nrh, long ncl, long nch);
void resize_f32Tmatrix (f32Triplet  **m, long nrl, long nrh, long ncl, long nch);




/*
 * --------------
 * matrix_reverse
 * --------------
 */

//void bmatrix_reverse (byte   **m, long nrl, long nrh, long ncl, long nch);
//void si16matrix_reverse (sint16   **m, long nrl, long nrh, long ncl, long nch);
//void usmatrix_reverse(uint16 **m, long nrl, long nrh, long ncl, long nch);

/* copie */
void copyc_bmatrix(byte **src,long nrl,long nrh,long ncl, long nch, byte **cond, byte c, byte **dst);

void complete_border_bmatrix (byte **m, long nrl,long nrh,long ncl, long nch, long n);
void complete_border1_bmatrix(byte **m, long nrl,long nrh,long ncl, long nch);
void complete_border2_bmatrix(byte **m, long nrl,long nrh,long ncl, long nch);

void copy1c_bmatrix    (byte    **X, long nc, byte    **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_si16matrix (sint16  **X, long nc, sint16  **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_ui16matrix (uint16  **X, long nc, uint16  **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_si32matrix (sint32  **X, long nc, sint32  **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_ui32matrix (uint32  **X, long nc, uint32  **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_f32matrix  (float32 **X, long nc, float32 **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_f64matrix  (float64 **X, long nc, float64 **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_rgb8matrix (rgb8    **X, long nc, rgb8    **Y, long nrl, long nrh, long ncl, long nch);
void copy1c_rgbx8matrix(rgbx8   **X, long nc, rgbx8   **Y, long nrl, long nrh, long ncl, long nch);

void copyc_bmatrix(byte  **src,long nrl,long nrh,long ncl, long nch, byte **cond, byte c, byte **dst);

/*
 * copie dans src->dst si la condition est remplie
 * dst(i,j) = src(i,j) si cond(i,j) == c
 */
/*
void copy1r_bmatrix    (byte   **X, long nr, byte   **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_smatrix    (sint16   **X, long nr, sint16   **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_usmatrix   (uint16 **X, long nr, uint16 **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_imatrix    (int    **X, long nr, int    **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_uimatrix   (uint   **X, long nr, uint   **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_matrix     (float  **X, long nr, float  **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_dmatrix    (double **X, long nr, double **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_rgb8matrix (rgb8   **X, long nr, rgb8   **Y, long nrl, long nrh, long ncl, long nch);
void copy1r_rgbx8matrix(rgbx8  **X, long nr, rgbx8  **Y, long nrl, long nrh, long ncl, long nch);

void copy_bmatrix    (byte   **m1, long nrl1,long nrh1,long ncl1, long nch1, byte   **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_smatrix    (sint16   **m1, long nrl1,long nrh1,long ncl1, long nch1, sint16   **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_usmatrix   (uint16 **m1, long nrl1,long nrh1,long ncl1, long nch1, uint16 **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_imatrix    (int    **m1, long nrl1,long nrh1,long ncl1, long nch1, int    **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_uimatrix   (uint   **m1, long nrl1,long nrh1,long ncl1, long nch1, uint   **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_matrix     (float  **m1, long nrl1,long nrh1,long ncl1, long nch1, float  **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_dmatrix    (double **m1, long nrl1,long nrh1,long ncl1, long nch1, double **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_rgb8matrix (rgb8   **m1, long nrl1,long nrh1,long ncl1, long nch1, rgb8   **m2, long nrl2, long nrh2, long ncl2, long nch2);
void copy_rgbx8matrix(rgbx8  **m1, long nrl1,long nrh1,long ncl1, long nch1, rgbx8  **m2, long nrl2, long nrh2, long ncl2, long nch2);

void copy_sub_bmatrix(byte **src, long nrl,long nrh,long ncl, long nch, byte **dst);

void extract_bmatrix (byte   **src, long nrl,long nrh,long ncl, long nch, byte   **dst);
void extract_smatrix (sint16   **src, long nrl,long nrh,long ncl, long nch, sint16   **dst);
void extract_usmatrix(uint16 **src, long nrl,long nrh,long ncl, long nch, uint16 **dst);
void extract_imatrix (int    **src, long nrl,long nrh,long ncl, long nch, int    **dst);
void extract_uimatrix(uint   **src, long nrl,long nrh,long ncl, long nch, uint   **dst);
void extract_matrix  (float  **src, long nrl,long nrh,long ncl, long nch, float  **dst);
void extract_dmatrix (double **src, long nrl,long nrh,long ncl, long nch, double **dst);
*/
void copy_center_bmatrix(byte **src, long nrl0,long nrh0,long ncl0, long nch0, byte **dst, long nrl1,long nrh1,long ncl1, long nch1);

void copy_sub_imatrix(int  **src, long nrl,long nrh,long ncl, long nch, int **dst);

void copy_sub_imatrix_index(int **src, long nrl,long nrh, long ncl, long nch, int **dst,int *index);

/* --------------------- */
/* --- De-Interleave --- */
/* --------------------- */

void desinterlace_bmatrix   (byte **S, long nrl, long nrh, long ncl, long nch, byte **D0, byte **D1);
void desinterlace_rgb8matrix(rgb8 **S, long nrl, long nrh, long ncl, long nch, rgb8 **D0, rgb8 **D1);

void interlace_bmatrix   (byte **S0, long nrl, long nrh, long ncl, long nch, byte **S1, byte **D);
void interlace_rgb8matrix(rgb8 **S0, long nrl, long nrh, long ncl, long nch, rgb8 **S1, rgb8 **D);


#ifdef __cplusplus
}
#endif

#else
//#pragma message(" Warning : attemp to re-include nrmem2x.h")
#endif /* _NRMEM2X_H_ */
