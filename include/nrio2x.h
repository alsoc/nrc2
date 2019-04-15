/* ---------------- */
/* --- nrio2x.h --- */
/* ---------------- */

/*
* Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
* Univ Paris Sud XI, CNRS
*/

#ifndef __NRIO2X_H__
#define __NRIO2X_H__

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrio2x.h ***")
#endif

void display_matrix_endline    (byte   **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_i16matrix_endline (int16  **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui16matrix_endline(uint16 **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_i32matrix_endline (int32  **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui32matrix_endline(uint32 **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_i64matrix_endline (int64  **m, long i0, long i1, long j0, long j1, char *format, char *name);
void display_imatrix_endline   (int    **m, long i0, long i1, long j0, long j1, char *format, char *name);

/* ------------------------------- */
/* --- display_matrix_endline0 --- */
/* ------------------------------- */
    
void display_bmatrix_endline0   (byte   **m, long i0, long i1, char *format, char *name);
void display_i16matrix_endline0 (int16  **m, long i0, long i1, char *format, char *name);
void display_ui16matrix_endline0(uint16 **m, long i0, long i1, char *format, char *name);
void display_i32matrix_endline0 (int32  **m, long i0, long i1, char *format, char *name);
void display_ui32matrix_endline0(uint32 **m, long i0, long i1, char *format, char *name);
void display_i64matrix_endline0 (int64  **m, long i0, long i1, char *format, char *name);
void display_imatrix_endline0   (int    **m, long i0, long i1, char *format, char *name);

/* ------------------------------- */
/* --- display_matrix_endline1 --- */
/* ------------------------------- */

void display_bmatrix_endline1   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i16matrix_endline1 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui16matrix_endline1(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i32matrix_endline1 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui32matrix_endline1(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i64matrix_endline1 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_imatrix_endline1   (int    **m,long i0, long i1, long j0, long j1, char *format, char *name);

/* -------------------------------------- */
/* --- display_matrix_number_endline0 --- */
/* -------------------------------------- */

void display_bmatrix_number_endline0   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i16matrix_number_endline0 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui16matrix_number_endline0(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i32matrix_number_endline0 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui32matrix_number_endline0(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i64matrix_number_endline0 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_imatrix_number_endline0   (int    **m,long i0, long i1, long j0, long j1, char *format, char *name);

/* -------------------------------------- */
/* --- display_matrix_number_endline1 --- */
/* -------------------------------------- */

void display_bmatrix_number_endline1   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i16matrix_number_endline1 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui16matrix_number_endline1(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i32matrix_number_endline1 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_ui32matrix_number_endline1(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_i64matrix_number_endline1 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *name);
void display_imatrix_number_endline1   (int    **m,long i0, long i1, long j0, long j1, char *format, char *name);

/* ------------------------- */
/* --- display_trimatrix --- */
/* ------------------------- */

void display_btrimatrix   (byte    **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_i16trimatrix (int16   **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_ui16trimatrix(uint16  **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_itrimatrix   (int     **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_i32trimatrix (int32   **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_f32trimatrix (float32 **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);
void display_f64trimatrix (float64 **m, long i0, long i1, long j0, long j1, long step, char *format, char *name);

/* ----------------------- */
/* --- write_trimatrix --- */
/* ----------------------- */

void write_btrimatrix   (byte    **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_i16trimatrix (int16   **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_ui16trimatrix(uint16  **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_itrimatrix   (int     **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_i32trimatrix (int32   **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_f32trimatrix (float32 **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);
void write_f64trimatrix (float64 **m,long i0,long i1,long j0, long j1, long step, char *format, char *filename);

/* ---------------------------- */
/* --- write_matrix_endline --- */
/* ---------------------------- */

void write_bmatrix_endline   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i16matrix_endline (int16  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui16matrix_endline(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i32matrix_endline (int32  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui32matrix_endline(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i64matrix_endline (int64  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_imatrix_endline   (int    **m,long i0, long i1, long j0, long j1, char *format, char *filename);

/* ------------------------------ */
/* --- write_imatrix_endline0 --- */
/* ------------------------------ */

void write_bmatrix_endline0   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i16matrix_endline0 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui16matrix_endline0(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i32matrix_endline0 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i64matrix_endline0 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui32matrix_endline0(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_imatrix_endline0   (int    **m,long i0, long i1, long j0, long j1, char *format, char *filename);

/* ------------------------------ */
/* --- write_imatrix_endline1 --- */
/* ------------------------------ */

void write_bmatrix_endline1   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i16matrix_endline1 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui16matrix_endline1(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i32matrix_endline1 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui32matrix_endline1(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i64matrix_endline1 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_imatrix_endline1   (int    **m,long i0, long i1, long j0, long j1, char *format, char *filename);

/* ------------------------------------- */
/* --- write_imatrix_number_endline0 --- */
/* ------------------------------------- */

void write_bmatrix_number_endline0   (byte   **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i16matrix_number_endline0 (int16  **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui16matrix_number_endline0(uint16 **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i32matrix_number_endline0 (int32  **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui32matrix_number_endline0(uint32 **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i64matrix_number_endline0 (int64  **m, long i0, long i1, long j0, long j1, char *format, char *filename);
void write_imatrix_number_endline0   (int    **m, long i0, long i1, long j0, long j1, char *format, char *filename);

/* ------------------------------------- */
/* --- write_imatrix_number_endline1 --- */
/* ------------------------------------- */

void write_bmatrix_number_endline1   (byte   **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i16matrix_number_endline1 (int16  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui16matrix_number_endline1(uint16 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i32matrix_number_endline1 (int32  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_ui32matrix_number_endline1(uint32 **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_i64matrix_number_endline1 (int64  **m,long i0, long i1, long j0, long j1, char *format, char *filename);
void write_imatrix_number_endline1   (int    **m,long i0, long i1, long j0, long j1, char *format, char *filename);

/* ---------------------- */
/* -- fwrite_trimatrix -- */
/* ---------------------- */

void fwrite_btrimatrix   (byte    **m,long i0,long i1,long j0, long j1, long step, char *filename);
void fwrite_i16trimatrix (int16   **m,long i0,long i1,long j0, long j1, long step, char *filename);
void fwrite_ui16trimatrix(uint16  **m,long i0,long i1,long j0, long j1, long step, char *filename);
void fwrite_i32trimatrix (int32   **m,long i0,long i1,long j0, long j1, long step, char *filename);
void fwrite_f32trimatrix (float32 **m,long i0,long i1,long j0, long j1, long step, char *filename);
void fwrite_f64trimatrix (float64 **m,long i0,long i1,long j0, long j1, long step, char *filename);

/* --------------------- */
/* -- fread_trimatrix -- */
/* --------------------- */

void fread_btrimatrix   (char *filename, byte    **m,long i0,long i1,long j0, long j1, long step);
void fread_i16trimatrix (char *filename, int16   **m,long i0,long i1,long j0, long j1, long step);
void fread_ui16trimatrix(char *filename, uint16  **m,long i0,long i1,long j0, long j1, long step);
void fread_itrimatrix   (char *filename, int     **m,long i0,long i1,long j0, long j1, long step);
void fread_i32trimatrix (char *filename, int32   **m,long i0,long i1,long j0, long j1, long step);
void fread_f32trimatrix (char *filename, float32 **m,long i0,long i1,long j0, long j1, long step);
void fread_f64trimatrix (char *filename, float64 **m,long i0,long i1,long j0, long j1, long step);

#ifdef __cplusplus
}
#endif

#endif /* __NRIO2X_H__ */
