/* ------------------- */
/* --- nralloc2x.h --- */
/* ------------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
* 
*/

/* 
 * 2002/06/11 ajout des fonctions endline
 */

#ifndef __NRALLOC2X_H__
#define __NRALLOC2X_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nralloc2x.h ***")
#endif

#include "nrtype.h"
#include "nrtypex.h"

/* ---------------------------------- */
/* --- composite user type matrix --- */
/* ---------------------------------- */

si16Point**   si16Pmatrix(long nrl, long nrh, long ncl, long nch);
ui16Point**   ui16Pmatrix(long nrl, long nrh, long ncl, long nch);
si32Point**   si32Pmatrix(long nrl, long nrh, long ncl, long nch);
ui32Point**   ui32Pmatrix(long nrl, long nrh, long ncl, long nch);
f32Point**     f32Pmatrix(long nrl, long nrh, long ncl, long nch);

si16Triplet** si16Tmatrix(long nrl, long nrh, long ncl, long nch);
ui16Triplet** ui16Tmatrix(long nrl, long nrh, long ncl, long nch);
si32Triplet** si32Tmatrix(long nrl, long nrh, long ncl, long nch);
ui32Triplet** ui32Tmatrix(long nrl, long nrh, long ncl, long nch);
f32Triplet**   f32Tmatrix(long nrl, long nrh, long ncl, long nch);

void free_si16Pmatrix(si16Point **m, long nrl, long nrh, long ncl, long nch);
void free_ui16Pmatrix(ui16Point **m, long nrl, long nrh, long ncl, long nch);
void free_si32Pmatrix(si32Point **m, long nrl, long nrh, long ncl, long nch);
void free_ui32Pmatrix(ui32Point **m, long nrl, long nrh, long ncl, long nch);
void free_f32Pmatrix(f32Point   **m, long nrl, long nrh, long ncl, long nch);

void free_si16Tmatrix(si16Triplet **m, long nrl, long nrh, long ncl, long nch);
void free_ui16Tmatrix(ui16Triplet **m, long nrl, long nrh, long ncl, long nch);
void free_si32Tmatrix(si32Triplet **m, long nrl, long nrh, long ncl, long nch);
void free_ui32Tmatrix(ui32Triplet **m, long nrl, long nrh, long ncl, long nch);
void free_f32Tmatrix ( f32Triplet **m, long nrl, long nrh, long ncl, long nch);

/* ----------------- */
/* --- trimatrix --- */
/* ----------------- */

byte**      btrimatrix(long nrl, long nrh, long ncl, long nch, long step);
sint16** si16trimatrix(long nrl, long nrh, long ncl, long nch, long step);
uint16** ui16trimatrix(long nrl, long nrh, long ncl, long nch, long step);
sint32** si32trimatrix(long nrl, long nrh, long ncl, long nch, long step);
uint32** ui32trimatrix(long nrl, long nrh, long ncl, long nch, long step);
float32** f32trimatrix(long nrl, long nrh, long ncl, long nch, long step);
float64** f64trimatrix(long nrl, long nrh, long ncl, long nch, long step);

#ifdef __cplusplus
}
#endif

#endif /* __NRALLOC2X_H__ */
