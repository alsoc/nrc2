/* --------------- */
/* --- nrio1.h --- */
/* --------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_IO1_H_
#define _NR_IO1_H_

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrio1.h ***")
#endif

/*
 * ----------------------
 * --- display_vector ---
 * ----------------------
 */

void display_bvector    (byte    *v, long nl,long nh, const char *format, const char *name);
void display_si8vector  (sint8   *v, long nl,long nh, const char *format, const char *name);
void display_ui8vector  (uint8   *v, long nl,long nh, const char *format, const char *name);
void display_si16vector (sint16  *v, long nl,long nh, const char *format, const char *name);
void display_ui16vector (uint16  *v, long nl,long nh, const char *format, const char *name);
void display_si32vector (sint32  *v, long nl,long nh, const char *format, const char *name);
void display_ui32vector (uint32  *v, long nl,long nh, const char *format, const char *name);
void display_si64vector (sint64  *v, long nl,long nh, const char *format, const char *name);
void display_ui64vector (uint64  *v, long nl,long nh, const char *format, const char *name);

void display_f32vector  (float32 *v, long nl,long nh, const char *format, const char *name);
void display_f64vector  (float64 *v, long nl,long nh, const char *format, const char *name);

void display_rgb8vector (rgb8    *v, long nl,long nh, const char *format, const char *name);
void display_rgbx8vector(rgbx8   *v, long nl,long nh, const char *format, const char *name);

/*
 * -----------------------------
 * --- display_vector_number ---
 * -----------------------------
 */

void display_bvector_number    (byte    *v, long nl,long nh, const char *format, const char *name);
void display_si8vector_number  (sint8   *v, long nl,long nh, const char *format, const char *name);
void display_ui8vector_number  (uint8   *v, long nl,long nh, const char *format, const char *name);
void display_si16vector_number (sint16  *v, long nl,long nh, const char *format, const char *name);
void display_ui16vector_number (uint16  *v, long nl,long nh, const char *format, const char *name);
void display_si32vector_number (sint32  *v, long nl,long nh, const char *format, const char *name);
void display_ui32vector_number (uint32  *v, long nl,long nh, const char *format, const char *name);
void display_si64vector_number (sint64  *v, long nl,long nh, const char *format, const char *name);
void display_ui64vector_number (uint64  *v, long nl,long nh, const char *format, const char *name);

void display_f32vector_number  (float32 *v, long nl,long nh, const char *format, const char *name);
void display_f64vector_number  (float64 *v, long nl,long nh, const char *format, const char *name);

void display_rgb8vector_number (rgb8    *v, long nl,long nh, const char *format, const char *name);
void display_rgbx8vector_number(rgbx8   *v, long nl,long nh, const char *format, const char *name);

/*
 * ------------------------
 * --- display_vector_T ---
 * ------------------------
 */

void display_si8vector_T  (sint8   *v,int i0, int i1, const char *format, const char *name);
void display_ui8vector_T  (uint8   *v,int i0, int i1, const char *format, const char *name);
void display_si16vector_T (sint16  *v,int i0, int i1, const char *format, const char *name);
void display_ui16vector_T (uint16  *v,int i0, int i1, const char *format, const char *name);
void display_si32vector_T (sint32  *v,int i0, int i1, const char *format, const char *name);
void display_ui32vector_T (uint32  *v,int i0, int i1, const char *format, const char *name);
void display_si64vector_T (sint64  *v,int i0, int i1, const char *format, const char *name);
void display_ui64vector_T (uint64  *v,int i0, int i1, const char *format, const char *name);

void display_f32vector_T  (float32 *v,int i0, int i1, const char *format, const char *name);
void display_f64vector_T  (float64 *v,int i0, int i1, const char *format, const char *name);

void display_rgb8vector_T (rgb8    *v, int i0, int i1, const char *format, const char *name);
void display_rgbx8vector_T(rgbx8   *v, int i0, int i1, const char *format, const char *name);

/*
 * -------------------------------
 * --- display_vector_number_T ---
 * -------------------------------
 */

void display_si8vector_number_T (sint8   *v,int i0, int i1, const char *format, const char *name);
void display_ui8vector_number_T (uint8   *v,int i0, int i1, const char *format, const char *name);
void display_si16vector_number_T(sint16  *v,int i0, int i1, const char *format, const char *name);
void display_ui16vector_number_T(uint16  *v,int i0, int i1, const char *format, const char *name);
void display_si32vector_number_T(sint32  *v,int i0, int i1, const char *format, const char *name);
void display_ui32vector_number_T(uint32  *v,int i0, int i1, const char *format, const char *name);
void display_si64vector_number_T(sint64  *v,int i0, int i1, const char *format, const char *name);
void display_ui64vector_number_T(uint64  *v,int i0, int i1, const char *format, const char *name);

void display_f32vector_number_T (float32 *v,int i0, int i1, const char *format, const char *name);
void display_f64vector_number_T (float64 *v,int i0, int i1, const char *format, const char *name);

void display_rgb8vector_number_T (rgb8  *v,int i0, int i1, const char *format, const char *name);
void display_rgbx8vector_number_T(rgbx8 *v,int i0, int i1, const char *format, const char *name);

/*
 * -------------------------------
 * --- display_vector_positive ---
 * -------------------------------
 */
    
void display_ui8vector_positive (uint8  *v, int j0, int j1, int iformat, const char *name);
void display_ui16vector_positive(uint16 *v, int j0, int j1, int iformat, const char *name);
void display_ui32vector_positive(uint32 *v, int j0, int j1, int iformat, const char *name);
    
/*
 * --------------------
 * --- write_vector ---
 * --------------------
 */

void write_si8vector  (sint8   *v,long nl,long nh, const char *format, const char *filename);
void write_ui8vector  (uint8   *v,long nl,long nh, const char *format, const char *filename);
void write_si16vector (sint16  *v,long nl,long nh, const char *format, const char *filename);
void write_ui16vector (uint16  *v,long nl,long nh, const char *format, const char *filename);
void write_si32vector (sint32  *v,long nl,long nh, const char *format, const char *filename);
void write_ui32vector (uint32  *v,long nl,long nh, const char *format, const char *filename);
void write_si64vector (sint64  *v,long nl,long nh, const char *format, const char *filename);
void write_ui64vector (uint64  *v,long nl,long nh, const char *format, const char *filename);

void write_f32vector  (float32 *v,long nl,long nh, const char *format, const char *filename);
void write_f64vector  (float64 *v,long nl,long nh, const char *format, const char *filename);

void write_rgb8vector (rgb8    *v,long nl,long nh, const char *format, const char *filename);
void write_rgbx8vector(rgbx8   *v,long nl,long nh, const char *format, const char *filename);

/*
 * ----------------------
 * --- write_vector_T ---
 * ----------------------
 */

void write_si8vector_T  (sint8   *v,long nl,long nh, const char *format, const char *filename);
void write_ui8vector_T  (uint8   *v,long nl,long nh, const char *format, const char *filename);
void write_si16vector_T (sint16  *v,long nl,long nh, const char *format, const char *filename);
void write_ui16vector_T (uint16  *v,long nl,long nh, const char *format, const char *filename);
void write_si32vector_T (sint32  *v,long nl,long nh, const char *format, const char *filename);
void write_ui32vector_T (uint32  *v,long nl,long nh, const char *format, const char *filename);
void write_si64vector_T (sint64  *v,long nl,long nh, const char *format, const char *filename);
void write_ui64vector_T (uint64  *v,long nl,long nh, const char *format, const char *filename);

void write_f32vector_T  (float32 *v,long nl,long nh, const char *format, const char *filename);
void write_f64vector_T  (float64 *v,long nl,long nh, const char *format, const char *filename);

void write_rgb8vector_T (rgb8    *v,long nl,long nh, const char *format, const char *filename);
void write_rgbx8vector_T(rgbx8   *v,long nl,long nh, const char *format, const char *filename);

/*
 * ---------------------------
 * --- write_vector_number ---
 * ---------------------------
 */

void write_si8vector_number  (sint8   *v,long nl,long nh, const char *format, const char *filename);
void write_ui8vector_number  (uint8   *v,long nl,long nh, const char *format, const char *filename);
void write_si16vector_number (sint16  *v,long nl,long nh, const char *format, const char *filename);
void write_ui16vector_number (uint16  *v,long nl,long nh, const char *format, const char *filename);
void write_si32vector_number (sint32  *v,long nl,long nh, const char *format, const char *filename);
void write_ui32vector_number (uint32  *v,long nl,long nh, const char *format, const char *filename);
void write_si64vector_number (sint64  *v,long nl,long nh, const char *format, const char *filename);
void write_ui64vector_number (uint64  *v,long nl,long nh, const char *format, const char *filename);

void write_f32vector_number  (float32 *v,long nl,long nh, const char *format, const char *filename);
void write_f64vector_number  (float64 *v,long nl,long nh, const char *format, const char *filename);

void write_rgb8vector_number (rgb8    *v,long nl,long nh, const char *format, const char *filename);
void write_rgbx8vector_number(rgbx8   *v,long nl,long nh, const char *format, const char *filename);

/*
 * -----------------------------
 * --- write_vector_T_number ---
 * -----------------------------
 */

void write_si8vector_T_number  (sint8   *v,long nl,long nh, const char *format, const char *filename);
void write_ui8vector_T_number  (uint8   *v,long nl,long nh, const char *format, const char *filename);
void write_si16vector_T_number (sint16  *v,long nl,long nh, const char *format, const char *filename);
void write_ui16vector_T_number (uint16  *v,long nl,long nh, const char *format, const char *filename);
void write_si32vector_T_number (sint32  *v,long nl,long nh, const char *format, const char *filename);
void write_ui32vector_T_number (uint32  *v,long nl,long nh, const char *format, const char *filename);
void write_si64vector_T_number (sint64  *v,long nl,long nh, const char *format, const char *filename);
void write_ui64vector_T_number (uint64  *v,long nl,long nh, const char *format, const char *filename);

void write_f32vector_T_number  (float32 *v,long nl,long nh, const char *format, const char *filename);
void write_f64vector_T_number  (float64 *v,long nl,long nh, const char *format, const char *filename);

void write_rgb8vector_T_number (rgb8    *v,long nl,long nh, const char *format, const char *filename);
void write_rgbx8vector_T_number(rgbx8   *v,long nl,long nh, const char *format, const char *filename);

/*
 * --------------------
 * --- fread_vector ---
 * --------------------
 */
void fread_si8vector  (const char *filename, sint8   *v,long nl,long nh);
void fread_ui8vector  (const char *filename, uint8   *v,long nl,long nh);
void fread_si16vector (const char *filename, sint16  *v,long nl,long nh);
void fread_ui16vector (const char *filename, uint16  *v,long nl,long nh);
void fread_si32vector (const char *filename, sint32  *v,long nl,long nh);
void fread_ui32vector (const char *filename, uint32  *v,long nl,long nh);
void fread_si64vector (const char *filename, sint64  *v,long nl,long nh);
void fread_ui64vector (const char *filename, uint64  *v,long nl,long nh);

void fread_f32vector  (const char *filename, float32 *v,long nl,long nh);
void fread_f64vector  (const char *filename, float64 *v,long nl,long nh);

void fread_rgb8vector (const char *filename, rgb8    *v,long nl,long nh);
void fread_rgbx8vector(const char *filename, rgbx8   *v,long nl,long nh);

/*
 * ---------------------
 * --- fwrite_vector ---
 * ---------------------
 */
void fwrite_si8vector  (sint8   *v,long nl,long nh,const char *filename);
void fwrite_ui8vector  (uint8   *v,long nl,long nh,const char *filename);
void fwrite_si16vector (sint16  *v,long nl,long nh,const char *filename);
void fwrite_ui16vector (uint16  *v,long nl,long nh,const char *filename);
void fwrite_si32vector (sint32  *v,long nl,long nh,const char *filename);
void fwrite_ui32vector (uint32  *v,long nl,long nh,const char *filename);
void fwrite_si64vector (sint64  *v,long nl,long nh,const char *filename);
void fwrite_ui64vector (uint64  *v,long nl,long nh,const char *filename);

void fwrite_f32vector  (float32 *v,long nl,long nh,const char *filename);
void fwrite_f64vector  (float64 *v,long nl,long nh,const char *filename);

void fwrite_rgb8vector (rgb8    *v,long nl,long nh,const char *filename);
void fwrite_rgbx8vector(rgbx8   *v,long nl,long nh,const char *filename);

#ifdef __cplusplus
}
#endif

#endif // _NR_IO1_H_
