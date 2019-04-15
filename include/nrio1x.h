/* ---------------- */
/* --- nrio1x.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

#ifndef _NR_IO1X_H_
#define _NR_IO1X_H_

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
void display_bvector_circular    (byte     *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_si16vector_circular (sint16   *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_ui16vector_circular (uint16   *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_f32vector_circular     (float32  *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_f64vector_circular    (float64  *v,long nl,long nh, long c0, long c1, char *format, char *name);

void display_bvector_circular_number   (byte    *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_si16vector_circular_number(sint16  *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_ui16vector_circular_number(uint16  *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_f32vector_circular_number (float32 *v,long nl,long nh, long c0, long c1, char *format, char *name);
void display_f64vector_circular_number (float64 *v,long nl,long nh, long c0, long c1, char *format, char *name);

void display_bvector_cycle   (byte   *v,long nl,long nh, char *format, char *name);
void display_si16vector_cycle(sint16 *v,long nl,long nh, char *format, char *name);
void display_ui16vector_cycle(uint16 *v,long nl,long nh, char *format, char *name);

void write_bvector_circular(byte *v,long nl,long nh, long c0, long c1, char *format, char *filename);

/* ------------------------------- */
/* --- display_vector_endline1 --- */
/* ------------------------------- */
    
void display_bvector_endline1   (byte   *v, long j0, long j1, char *format, char *name);
void display_i16vector_endline1 (int16  *v, long j0, long j1, char *format, char *name);
void display_ui16vector_endline1(uint16 *v, long j0, long j1, char *format, char *name);
void display_i32vector_endline1 (int32  *v, long j0, long j1, char *format, char *name);
void display_ui32vector_endline1(uint32 *v, long j0, long j1, char *format, char *name);
void display_i64vector_endline1 (int64  *v, long j0, long j1, char *format, char *name);
void display_ivector_endline1   (int    *v, long j0, long j1, char *format, char *name);

    
#ifdef __cplusplus
}
#endif

#endif // _NR_IO1X_H_
