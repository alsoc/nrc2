/* ------------------ */
/* --- nrlinalg.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

#ifndef __NRLINALG_H__
#define __NRLINALG_H__

#ifdef __cplusplus
extern "C" {
#endif

void transpose_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte **D);
void transpose_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch, sint16 **D);
void transpose_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D);
void transpose_si32matrix(sint32 **S, long nrl,long nrh,long ncl, long nch, sint32 **D);
void transpose_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D);
void transpose_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch, float32 **D);
void transpose_dmatrix(float64 **S, long nrl,long nrh,long ncl, long nch, float64 **D);
void transpose_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D);
void transpose1_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch);
void transpose1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_si32matrix(sint32 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_f64matrix(float64 **S, long nrl,long nrh,long ncl, long nch);
void transpose1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch);

#ifdef __cplusplus
}
#endif

#endif // __NRLINALG_H__
