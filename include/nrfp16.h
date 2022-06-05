/* ---------------- */
/* --- nrfp16.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * + 2022, MILLET Maxime, LIP6 Sorbonne University
*/

#ifndef __NRFP16_H__
#define __NRFP16_H__

#ifdef __cplusplus
extern "C" {
#endif

// Types
typedef __fp16 float16;
typedef struct { float16 x; float16 y;} complex16;
typedef struct { float16 r; float16 g; float16 b; } rgbf16;
typedef struct { float16 b; float16 g; float16 r; } bgrf16;
typedef struct { float16 r; float16 g; float16 b; float16 x; } rgbxf16;
typedef struct { float16 x; float16 b; float16 g; float16 r; } bgrxf16;

// nralloc1
float16* f16vector(long nl, long nh);
float16* f16vector0(long nl, long nh);
void free_f16vector(float16 *v, long nl, long nh);

// nralloc2
float16** f16matrix(long nrl, long nrh, long ncl, long nch);
float16** f16matrix0(long nrl, long nrh, long ncl, long nch);
void free_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch);

// nralloc3
float16*** f16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void free_f16cube(float16 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);

// nrarith0
float16 f16min (float16 x1, float16 x2);
float16 f16min2(float16 x1, float16 x2);
float16 f16min3(float16 x1, float16 x2, float16 x3);
float16 f16min4(float16 x1, float16 x2, float16 x3, float16 x4);
float16 f16min5(float16 x1, float16 x2, float16 x3, float16 x4, float16 x5);
float16 f16max (float16 x1, float16 x2);
float16 f16max2(float16 x1, float16 x2);
float16 f16max3(float16 x1, float16 x2, float16 x3);
float16 f16max4(float16 x1, float16 x2, float16 x3, float16 x4);
float16 f16max5(float16 x1, float16 x2, float16 x3, float16 x4, float16 x5);

// nrarith1
float16 min_f16vector(float16 *v, long nl, long nh);
float16 max_f16vector(float16 *v, long nl, long nh);
float16 min_f16vector_pos(float16 *v, long nl, long nh, int *pos);
float16 max_f16vector_pos(float16 *v, long nl, long nh, int *pos);

// nrarith2
float16 min_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch);
float16 max_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch);
void add_f16matrix(float16 **X, long nrl,long nrh, long ncl, long nch, float16 **Y, float16 **Z);
void addc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z);
void sub_f16matrix(float16 **X, long nrl,long nrh, long ncl, long nch, float16 **Y, float16 **Z);
void subc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z);
void mulc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z);

// nrio1
void display_f16vector(float16 *v,long nl,long nh, char *format, char *name);
void display_f16vector_number(float16 *v,long nl,long nh, char *format, char *name);
void display_f16vector_T(float16 *v,int i0, int i1, char *format, char *name);
void display_f16vector_number_T(float16 *v,int i0, int i1, char *format, char *name);
void write_f16vector(float16 *v,long nl,long nh, char *format, char *filename);
void write_f16vector_number(float16 *v,long nl,long nh, char *format, char *filename);
void write_f16vector_T_number(float16 *v,long nl,long nh, char *format, char *filename);
void fread_f16vector(char *filename, float16 *v,long nl,long nh);
void fwrite_f16vector(float16 *v,long nl,long nh,char *filename);

// nrio1x
void display_f16vector_circular(float16 *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_f16vector_circular_number(float16 *v,long nl,long nh, long c0, long c1, char *format, char *name);

// nrio2
void display_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name);
void display_f16matrix_T(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name);
void display_f16matrix_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name);
void write_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename);
void write_f16matrix_T(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename);
void write_f16matrix_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename);
void write_f16matrix_T_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename);
void fwrite_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *filename);
void fread_f16matrix(char *filename, float16 **m,long nrl,long nrh,long ncl, long nch);

// nrio3
void display_f16cube(float16 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name);
void write_f16cube(float16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename);

// nrlinalg
void transpose_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch, float32 **D);
void transpose1_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch);

// nrmem1
void dup_f16vector(float16 *X, long nl, long nh, float16 *Y);
void convert_si8vector_f16vector(sint8 *X, long nl, long nh, float16 *Y);
void convert_ui8vector_f16vector(uint8 *X, long nl, long nh, float16 *Y);
void convert_si16vector_f16vector(sint16 *X, long nl, long nh, float16 *Y);
void convert_ui16vector_f16vector(uint16 *X, long nl, long nh, float16 *Y);
void convert_si32vector_f16vector(sint32 *X, long nl, long nh, float16 *Y);
void convert_ui32vector_f16vector(uint32 *X, long nl, long nh, float16 *Y);
void convert_f32vector_f16vector(float32 *X, long nl, long nh, float16 *Y);
void convert_f64vector_f16vector(float64 *X, long nl, long nh, float16 *Y);
void convert_f16vector_si8vector(float16 *X, long nl, long nh, sint8 *Y);
void convert_f16vector_ui8vector(float16 *X, long nl, long nh, uint8 *Y);
void convert_f16vector_si16vector(float16 *X, long nl, long nh, sint16 *Y);
void convert_f16vector_ui16vector(float16 *X, long nl, long nh, uint16 *Y);
void convert_f16vector_si32vector(float16 *X, long nl, long nh, sint32 *Y);
void convert_f16vector_ui32vector(float16 *X, long nl, long nh, uint32 *Y);
void convert_f16vector_f32vector(float16 *X, long nl, long nh, float32 *Y);
void convert_f16vector_f64vector(float16 *X, long nl, long nh, float64 *Y);

// nrmem1x
void copy_f16vector(float16 *src, long nl1, long nh1, float16 *dst, long nl2, long nh2);
void copy1c_f16vector(float16 *src, long nc, float16 *dst, long nl, long nh);
void copy_f16vector_mod(float16 *src, long nl, long nh, long m, float16 *dst);

// nrmem2
void dup_f16matrix(float16 **X, long nrl,long nrh,long ncl, long nch, float16 **Y);
void resize_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch);
void convert_si8matrix_f16matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_ui8matrix_f16matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_si16matrix_f16matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_ui16matrix_f16matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_si32matrix_f16matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_ui32matrix_f16matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_f32matrix_f16matrix(float32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_f64matrix_f16matrix(float64 **X, int nrl, int nrh, int ncl, int nch, float16 **Y);
void convert_f16matrix_si8matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y);
void convert_f16matrix_ui8matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y);
void convert_f16matrix_si16matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y);
void convert_f16matrix_ui16matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y);
void convert_f16matrix_si32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y);
void convert_f16matrix_ui32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y);
void convert_f16matrix_f32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y);
void convert_f16matrix_f64matrix(float16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y);

// nrmrm2x
void copy1r_f16matrix(float16 **X, long nr, float16 **Y, long nrl, long nrh, long ncl, long nch);

// nrset1
void zero_f16vector(float16 *v, long nl, long nh);
void set_f16vector(float16 *v, long nl, long nh, float16 x);
void set_f16vector_param(float16 *v, long nl, long nh, float16 x, float16 xstep);
void set_f16vector_j(float16 *v, long nl, long nh);

// nrset2
void zero_f16matrix(float16 **m, int i0, int i1, int j0, int j1);
void set_f16matrix(float16 **m, int i0, int i1,int j0, int j1, float16 x);
void set_f16matrix_param(float16 **m, int i0, int i1, int j0, int j1, float16 x, float16 xstep, float16 ystep);
void set_f16matrix_i(float16 **m, int i0, int i1, int j0, int j1);
void set_f16matrix_j(float16 **m, int i0, int i1, int j0, int j1);

// nrset3
void zero_f16cube(float16 ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void set_f16cube_param(float16 ***c, int k0, int k1, int i0, int i1, int j0, int j1, float16 x, float16 xstep, float16 ystep, float16 zstep);

// nrsort1
void extractnz_boundaries_f16vector(float16 *v, long nl, long nh, long *nlnz, long *nhnz, float16 epsillon);

// nrsort2
void extractnz_boundaries_f16matrix(float16 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz, float16 epsillon);

// Maxime
void convert_f16vector_ui8vector_sat(float16 *X, long nl, long nh, uint8 *Y);
void convert_f16matrix_ui8matrix_sat(float16 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y);

#ifdef __cplusplus
}
#endif

#endif // __NRFP16_H__
