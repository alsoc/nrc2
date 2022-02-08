/* ----------------- */
/* --- nrtypex.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Modif : 15/01/2001 : rgb16, rgb32 are now signed (int16, int32)
 * modif : 22/02/2001 : new types : float32 & float64
 * modif : 15/02/2004 : clean-up previous definition for mac-OSX port
 * modif:  1/06/2010 : split of def.h into nrtype.h nrdefine.h ...
 */

#ifndef _NRTYPE_X_H_
#define _NRTYPE_X_H_

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- include nrtypeX.h")
#endif

// ---------------------------------- //
// -- don not write under the line -- //
// ---------------------------------- //

#include "mypredef.h"

/* ------------- */
/* --- Point --- */
/* ------------- */
typedef struct {sint16  x; sint16  y;} si16Point;
typedef struct {uint16  x; uint16  y;} ui16Point;
typedef struct {sint32  x; sint32  y;} si32Point;
typedef struct {uint32  x; uint32  y;} ui32Point;
typedef struct {float32 x; float32 y;}  f32Point; // same as complex32

/* --------------- */
/* --- Triplet --- */
/* --------------- */
typedef struct {sint16  x; sint16  y; sint16  z;}  si16Triplet;
typedef struct {uint16  x; uint16  y; uint16  z;}  ui16Triplet;
typedef struct {sint32  x; sint32  y; sint32  z;}  si32Triplet;
typedef struct {uint32  x; uint32  y; uint32  z;}  ui32Triplet;
typedef struct {float32 x; float32 y; float32 z;}   f32Triplet; // same as complex32


#ifdef __cplusplus
}
#endif

#endif // _NR_TYPE_X_H_
