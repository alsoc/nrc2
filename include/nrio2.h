/* --------------- */
/* --- nrio2.h --- */
/* --------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_IO2_H_
#define _NR_IO2_H_

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrio2.h ***")
#endif


/*
 * ----------------------
 * --- display_matrix ---
 * ----------------------
 */

void display_si8matrix  (sint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui8matrix  (uint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si16matrix (sint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui16matrix (uint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si32matrix (sint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui32matrix (uint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si64matrix (sint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui64matrix (uint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_f32matrix  (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_f64matrix  (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_rgb8matrix (rgb8    **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_rgbx8matrix(rgbx8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

/*
 * ------------------------
 * --- display_matrix_T ---
 * ------------------------
 */

void display_si8matrix_T (sint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui8matrix_T (uint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si16matrix_T(sint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui16matrix_T(uint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si32matrix_T(sint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui32matrix_T(uint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si64matrix_T(sint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui64matrix_T(uint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_f32matrix_T (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_f64matrix_T (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_rgb8matrix_T (rgb8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_rgbx8matrix_T(rgbx8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

/*
 * -----------------------------
 * --- display_matrix_number ---
 * -----------------------------
 */

void display_si8matrix_number (sint8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui8matrix_number (uint8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si16matrix_number(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui16matrix_number(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_i32matrix_number (sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui32matrix_number(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_si64matrix_number(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui64matrix_number(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_f32matrix_number (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_f64matrix_number (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

void display_rgb8matrix_number (rgb8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_rgbx8matrix_number(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

/*
 * --------------------
 * --- write_matrix ---
 * --------------------
 */

void write_si8matrix  (sint8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui8matrix  (uint8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si16matrix (sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui16matrix (uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si32matrix (sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui32matrix (uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si64matrix (sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui64matrix (uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_f32matrix (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_f64matrix (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_rgb8matrix (rgb8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_rgbx8matrix(rgbx8  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

/*
 * ----------------------
 * --- write_matrix_T ---
 * ----------------------
 */

void write_si8matrix_T  (sint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui8matrix_T  (uint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si16matrix_T (sint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui16matrix_T (uint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si32matrix_T (sint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui32matrix_T (uint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si64matrix_T (sint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui64matrix_T (uint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_f32matrix_T  (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_f64matrix_T  (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_rgb8matrix_T (rgb8    **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_rgbx8matrix_T(rgbx8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

/*
 * ---------------------------
 * --- write_matrix_number ---
 * ---------------------------
 */

void write_si8matrix_number  (sint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui8matrix_number  (uint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si16matrix_number (sint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui16matrix_number (uint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si32matrix_number (sint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui32matrix_number (uint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si64matrix_number (sint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui64matrix_number (uint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_f32matrix_number  (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_f64matrix_number  (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_rgb8matrix_number (rgb8    **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_rgbx8matrix_number(rgbx8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

/*
 * -----------------------------
 * --- write_matrix_T_number ---
 * -----------------------------
 */

void write_si8matrix_T_number  (sint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui8matrix_T_number  (uint8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si16matrix_T_number (sint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui16matrix_T_number (uint16  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si32matrix_T_number (sint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui32matrix_T_number (uint32  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_si64matrix_T_number (sint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_ui64matrix_T_number (uint64  **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_f32matrix_T_number  (float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_f64matrix_T_number  (float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

void write_rgb8matrix_T_number (rgb8    **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);
void write_rgbx8matrix_T_number(rgbx8   **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename);

/*
 * ---------------------
 * --- fwrite_matrix ---
 * ---------------------
 */

void fwrite_si8matrix  (sint8  **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_ui8matrix  (uint8  **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_si16matrix (sint16 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_ui16matrix (uint16 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_si32matrix (sint32 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_ui32matrix (uint32 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_si64matrix (sint64 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_ui64matrix (uint64 **m,long nrl,long nrh,long ncl, long nch, const char *filename);

void fwrite_f32matrix (float32 **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_f64matrix (float64 **m,long nrl,long nrh,long ncl, long nch, const char *filename);

void fwrite_rgb8matrix(rgb8    **m,long nrl,long nrh,long ncl, long nch, const char *filename);
void fwrite_rgbx8matrix(rgbx8  **m,long nrl,long nrh,long ncl, long nch, const char *filename);

/*
 * --------------------
 * --- fread_matrix ---
 * --------------------
 */

void fread_si8matrix  (const char *filename, sint8    **m,long nrl,long nrh,long ncl, long nch);
void fread_ui8matrix  (const char *filename, uint8    **m,long nrl,long nrh,long ncl, long nch);
void fread_si16matrix (const char *filename, sint16   **m,long nrl,long nrh,long ncl, long nch);
void fread_ui16matrix (const char *filename, uint16   **m,long nrl,long nrh,long ncl, long nch);
void fread_si32matrix (const char *filename, sint32   **m,long nrl,long nrh,long ncl, long nch);
void fread_ui32matrix (const char *filename, uint32   **m,long nrl,long nrh,long ncl, long nch);
void fread_si64matrix (const char *filename, sint64   **m,long nrl,long nrh,long ncl, long nch);
void fread_ui64matrix (const char *filename, uint64   **m,long nrl,long nrh,long ncl, long nch);
void fread_f32matrix  (const char *filename, float32  **m,long nrl,long nrh,long ncl, long nch);
void fread_f64matrix  (const char *filename, float64  **m,long nrl,long nrh,long ncl, long nch);

void fread_rgb8matrix (const char *filename, rgb8     **m,long nrl,long nrh,long ncl, long nch);
void fread_rgbx8matrix(const char *filename, rgbx8    **m,long nrl,long nrh,long ncl, long nch);

/*
 * -------------------------------
 * --- display_matrix_positive ---
 * -------------------------------
 */

void display_si8matrix_positive (sint8 * *m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_ui8matrix_positive (uint8 * *m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_si16matrix_positive(sint16 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_ui16matrix_positive(uint16 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_si32matrix_positive(sint32 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_ui32matrix_positive(uint32 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_si64matrix_positive(sint64 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);
void display_ui64matrix_positive(uint64 **m, int i0, int i1, int j0, int j1, int iformat, const char *name);

// -------------------------------
// --- write_matrix_positive ---
// -------------------------------

void write_ui8matrix_positive (uint8  **m,int i0, int i1, int j0, int j1, int iformat, const char *filename);
void write_ui16matrix_positive(uint16 **m,int i0, int i1, int j0, int j1, int iformat, const char *filename);
void write_ui32matrix_positive(uint32 **m,int i0, int i1, int j0, int j1, int iformat, const char *filename);

/* ------------------------ */
/* -- PGM IO for bmatrix -- */
/* ------------------------ */

uint8** LoadPGM_ui8matrix (const char *filename, int *nrl, int *nrh, int *ncl, int *nch);
void    LoadPGM_ui8matrix2(const char *filename, int *nrl, int *nrh, int *ncl, int *nch, uint8 **m);
void   MLoadPGM_ui8matrix (const char *filename, int nrl, int nrh, int ncl, int nch, uint8 **m);

#if defined(NRC_USE_PNG) && defined(NRC_USE_ZLIB)
uint8** LoadPNG_ui8matrix(const char *filename, int *nrl, int *nrh, int *ncl, int *nch);
#endif // NRC_USE_PNG && NRC_USE_ZLIB

void SavePGM_ui8matrix(uint8 **m, int nrl, int nrh, int ncl, int nch, const char *filename);

#if defined(NRC_USE_PNG) && defined(NRC_USE_ZLIB)
int SavePNG_ui8matrix(uint8 **m, int nrl, int nrh, int ncl, int nch, const char* filename);
#endif // NRC_USE_PNG && NRC_USE_ZLIB

rgb8** LoadPPM_rgb8matrix (const char *filename, int *nrl, int *nrh, int *ncl, int *nch);
void   LoadPPM_rgb8matrix2(const char *filename, int *nrl, int *nrh, int *ncl, int *nch, rgb8 **m);

void SavePPM_rgb8matrix(rgb8 **m, int nrl, int nrh, int ncl, int nch, const char *filename);

#ifdef __cplusplus
}
#endif

#endif // _NR_IO2_H_

