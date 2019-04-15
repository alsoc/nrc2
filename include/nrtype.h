/* ---------------- */
/* --- nrtype.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Modif : 15/01/2001 : rgb16, rgb32 are now signed (int16, int32)
 * modif : 22/02/2001 : new types : float32 & float64
 * modif : 15/02/2004 : clean-up previous definition for mac-OSX port
 * modif:  1/06/2010 : split of def.h into nrtype.h nrdefine.h ...
 */

#ifndef _NRTYPE_H_
#define _NRTYPE_H_

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#define VERBOSE_PRAGMA

#ifdef VERBOSE_PRAGMA
//#pragma message ("- include nrtype.h")
#endif

// ---------------------------------- //
// -- don not write under the line -- //
// ---------------------------------- //

#include "mypredef.h"
    
typedef unsigned char BOOLEAN;
typedef unsigned char boolean;
typedef          int  BOOL;
#ifdef VERBOSE_PRAGMA
//#pragma message("boolean")
#endif

#ifndef TRUE
#define TRUE 1
#else
#pragma message("  ATTENTION : TRUE  already defined")
#endif

#ifndef FALSE
#define FALSE 0
#else
#pragma message("  ATTENTION : FALSE  already defined")
#endif

/* ------------------------------- */
/* --- 8, 16, 32, 64 bit types --- */
/* ------------------------------- */
// old types to be removed
//typedef sint16  usint16 ;
//typedef int uint;

// half-typed types

typedef char  byte;
//typedef char  usint16 ;
//typedef char  uint;

typedef char  int8;
typedef short int16;
typedef int   int32;
typedef long long  int64;
    
#ifdef LIBCOMP
#if defined(myCompiler_ICC) || defined (myCompiler_MSC)
typedef __int64  int64;
#else
//typedef long long  int64;
#endif
#endif

// full-typed types
typedef   signed char sint8;
typedef unsigned char uint8;

typedef   signed short  sint16;
typedef unsigned short  uint16;

typedef   signed int sint32;
typedef unsigned int uint32;

#if defined(myCompiler_ICC) || defined (myCompiler_MSC)
typedef          __int64  int64;
typedef   signed __int64 sint64;
typedef unsigned __int64 uint64;
#else
typedef   signed long long sint64;
typedef unsigned long long uint64;
#endif

typedef float   float32;
typedef double  float64;

/* -------------------- */
/* --- complex type --- */
/* -------------------- */
typedef struct { float32 x; float32 y;} complex32;
typedef struct { float64 x; float64 y;} complex64;

/* --------------------- */
/* --- RGB, BGR type --- */
/* --------------------- */

typedef struct { uint8   r; uint8   g; uint8   b; } rgb8;
typedef struct { sint16  r; sint16  g; sint16  b; } rgb16;
typedef struct { sint32  r; sint32  g; sint32  b; } rgb32;
typedef struct { float32 r; float32 g; float32 b; } rgbf32;

typedef struct { uint8   b; uint8   g; uint8   r; } bgr8;
typedef struct { sint16  b; sint16  g; sint16  r; } bgr16;
typedef struct { sint32  b; sint32  g; sint32  r; } bgr32;
typedef struct { float32 b; float32 g; float32 r; } bgrf32;

typedef struct { uint8   r; uint8   g; uint8   b; uint8   x; } rgbx8;
typedef struct { int16   r; int16   g; int16   b; int16   x; } rgbx16;
typedef struct { int32   r; int32   g; int32   b; int32   x; } rgbx32;
typedef struct { float32 r; float32 g; float32 b; float32 x; } rgbxf32;

typedef struct { uint8   x; uint8   b; uint8   g; uint8   r; } bgrx8;
typedef struct { int16   x; int16   b; int16   g; int16   r; } bgrx16;
typedef struct { int32   x; int32   b; int32   g; int32   r; } bgrx32;
typedef struct { float32 x; float32 b; float32 g; float32 r; } bgrxf32;

/* ---------------- */
/* --- bitfield --- */
/* ---------------- */
typedef struct {
    unsigned int b0  : 1;
    unsigned int b1  : 1;
    unsigned int b2  : 1;
    unsigned int b3  : 1;
    unsigned int b4  : 1;
    unsigned int b5  : 1;
    unsigned int b6  : 1;
    unsigned int b7  : 1;
    unsigned int b8  : 1;
    unsigned int b9  : 1;
    unsigned int b10 : 1;
    unsigned int b11 : 1;
    unsigned int b12 : 1;
    unsigned int b13 : 1;
    unsigned int b14 : 1;
    unsigned int b15 : 1;
    unsigned int b16 : 1;
    unsigned int b17 : 1;
    unsigned int b18 : 1;
    unsigned int b19 : 1;
    unsigned int b20 : 1;
    unsigned int b21 : 1;
    unsigned int b22 : 1;
    unsigned int b23 : 1;
    unsigned int b24 : 1;
    unsigned int b25 : 1;
    unsigned int b26 : 1;
    unsigned int b27 : 1;
    unsigned int b28 : 1;
    unsigned int b29 : 1;
    unsigned int b30 : 1;
    unsigned int b31 : 1;
} bitfield32;

typedef struct {
    unsigned int b0  : 1;
    unsigned int b1  : 1;
    unsigned int b2  : 1;
    unsigned int b3  : 1;
    unsigned int b4  : 1;
    unsigned int b5  : 1;
    unsigned int b6  : 1;
    unsigned int b7  : 1;
    unsigned int b8  : 1;
    unsigned int b9  : 1;
    unsigned int b10 : 1;
    unsigned int b11 : 1;
    unsigned int b12 : 1;
    unsigned int b13 : 1;
    unsigned int b14 : 1;
    unsigned int b15 : 1;
} bitfield16;

typedef struct {
    unsigned int b0  : 1;
    unsigned int b1  : 1;
    unsigned int b2  : 1;
    unsigned int b3  : 1;
    unsigned int b4  : 1;
    unsigned int b5  : 1;
    unsigned int b6  : 1;
    unsigned int b7  : 1;
} bitfield8;

#ifdef __cplusplus
}
#endif

#endif // _NR_TYPE_H_
