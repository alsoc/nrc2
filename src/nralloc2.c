/* ------------------ */
/* --- nralloc2.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * 
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
*/

/* 
 * this code is based on the "Numerical Recipes in C 2nd edition" nrutil.c nrutil.h files from
 * William H. Press, Saul A. Teukolsky, William T. Vetterling, Brian P. Flannery
 *
 * The original code is not-copyrighted.
 * The original routines are placed into the public domain
 * (see Appendix B: utility routines, pp 964)
 * for more information, visit http://www.nr.com
 */

/* 
* 2002/06/11 ajout des fonctions endline
*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h> // isdigit
#include <string.h> // memcpy
#include <math.h> // fabs
// #include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nralloc1.h"
#include "nralloc2.h"
//#include "nrarith.h"

/*
 * --------------
 * --- matrix ---
 * --------------
 */
/* ------------------------------------------------ */
float** matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------ */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float **m;
    
    /* allocate pointers to rows */
    m=(float **) malloc((size_t)((nrow+NR_END)*sizeof(float*)));
    if (!m) nrerror("allocation failure 1 in matrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(float)));
    if (!m[nrl]) nrerror("allocation failure 2 in matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------- */
byte** bmatrix(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    byte **m;
    
    /* allocate pointers to rows */
    m=(byte **) malloc((size_t)((nrow+NR_END)*sizeof(byte*)));
    if (!m) nrerror("allocation failure 1 in bmatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(byte *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(byte)));
    if (!m[nrl]) nrerror("allocation failure 2 in bmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}/* ---------------------------------------------------------------- */
sint8** si8matrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint8 **m;
    
    /* allocate pointers to rows */
    m=(sint8 **) malloc((size_t)((nrow+NR_END)*sizeof(sint8*)));
    if (!m) nrerror("allocation failure 1 in i8matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint8 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(sint8)));
    if (!m[nrl]) nrerror("allocation failure 2 in i8matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------- */
uint8** ui8matrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint8 **m;
    
    /* allocate pointers to rows */
    m=(uint8 **) malloc((size_t)((nrow+NR_END)*sizeof(uint8*)));
    if (!m) nrerror("allocation failure 1 in ui8matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint8 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(uint8)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui8matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
sint16** si16matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint16 **m;
    
    /* allocate pointers to rows */
    m=(sint16 **) malloc((size_t)((nrow+NR_END)*sizeof(sint16*)));
    if (!m) nrerror("allocation failure 1 in si16matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint16 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(sint16)));
    if (!m[nrl]) nrerror("allocation failure 2 in si16matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
uint16** ui16matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint16 **m;
    
    /* allocate pointers to rows */
    m=(uint16 **) malloc((size_t)((nrow+NR_END)*sizeof(uint16*)));
    if (!m) nrerror("allocation failure 1 in ui16matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint16 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(uint16)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui16matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++)
        m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
sint32** si32matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a int32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint32 **m;
    
    /* allocate pointers to rows */
    m=(sint32 **) malloc((size_t)((nrow+NR_END)*sizeof(sint32*)));
    if (!m) nrerror("allocation failure 1 in si32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint32 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(sint32)));
    if (!m[nrl]) nrerror("allocation failure 2 in si32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
uint32** ui32matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a uint32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint32 **m;
    
    /* allocate pointers to rows */
    m=(uint32 **) malloc((size_t)((nrow+NR_END)*sizeof(uint32*)));
    if (!m) nrerror("allocation failure 1 in ui32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint32 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(uint32)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++)
        m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
sint64** si64matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a int64 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint64 **m;
    
    /* allocate pointers to rows */
    m=(sint64 **) malloc((size_t)((nrow+NR_END)*sizeof(sint64*)));
    if (!m) nrerror("allocation failure 1 in si64matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint64 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(sint64)));
    if (!m[nrl]) nrerror("allocation failure 2 in si64matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
uint64** ui64matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a int64 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint64 **m;
    
    /* allocate pointers to rows */
    m=(uint64 **) malloc((size_t)((nrow+NR_END)*sizeof(uint64*)));
    if (!m) nrerror("allocation failure 1 in ui64matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint64 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(uint64)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui64matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
float32** f32matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a float matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float32 **m;
    
    /* allocate pointers to rows */
    m=(float32 **) malloc((size_t)((nrow+NR_END)*sizeof(float32*)));
    if (!m) nrerror("allocation failure 1 in f32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float32 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(float32)));
    if (!m[nrl]) nrerror("allocation failure 2 in f32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}/* ------------------------------------------------------------------- */
float64** f64matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */

/* allocate a float matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float64 **m;
    
    /* allocate pointers to rows */
    m=(float64 **) malloc((size_t)((nrow+NR_END)*sizeof(float64*)));
    if (!m) nrerror("allocation failure 1 in f64matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float64 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(float64)));
    if (!m[nrl]) nrerror("allocation failure 2 in f64matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------- */
complex32** c32matrix(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
/* allocate a complex32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    complex32 **m;
    
    /* allocate pointers to rows */
    m=(complex32 **) malloc((size_t)((nrow+NR_END)*sizeof(complex32*)));
    if (!m) nrerror("allocation failure 1 in c32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(complex32 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(complex32)));
    if (!m[nrl]) nrerror("allocation failure 2 in c32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------- */
complex64** c64matrix(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
/* allocate a complex32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    complex64 **m;
    
    /* allocate pointers to rows */
    m=(complex64 **) malloc((size_t)((nrow+NR_END)*sizeof(complex64*)));
    if (!m) nrerror("allocation failure 1 in c64matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(complex64 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(complex64)));
    if (!m[nrl]) nrerror("allocation failure 2 in c64matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------- */
rgb8** rgb8matrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgb8 **m;
    
    /* allocate pointers to rows */
    m=(rgb8**) malloc((size_t)((nrow+NR_END)*sizeof(rgb8*)));
    if (!m) nrerror("allocation failure 1 in rgb8matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgb8*) malloc((size_t)((nrow*ncol+NR_END)*sizeof(rgb8)));
    if (!m[nrl]) nrerror("allocation failure 2 in rgb8matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
rgbx8** rgbx8matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgbx8 **m;
    
    /* allocate pointers to rows */
    m=(rgbx8**) malloc((size_t)((nrow+NR_END)*sizeof(rgbx8*)));
    if (!m) nrerror("allocation failure 1 in rgbx8matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgbx8*) malloc((size_t)((nrow*ncol+NR_END)*sizeof(rgbx8)));
    if (!m[nrl]) nrerror("allocation failure 2 in rgbx8matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------- */
rgb32** rgb32matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgb32 **m;
    
    /* allocate pointers to rows */
    m=(rgb32**) malloc((size_t)((nrow+NR_END)*sizeof(rgb32*)));
    if (!m) nrerror("allocation failure 1 in rgb32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgb32*) malloc((size_t)((nrow*ncol+NR_END)*sizeof(rgb32)));
    if (!m[nrl]) nrerror("allocation failure 2 in rgb32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------- */
rgbx32** rgbx32matrix(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgbx32 **m;
    
    /* allocate pointers to rows */
    m=(rgbx32**) malloc((size_t)((nrow+NR_END)*sizeof(rgbx32*)));
    if (!m) nrerror("allocation failure 1 in rgbx32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgbx32*) malloc((size_t)((nrow*ncol+NR_END)*sizeof(rgbx32)));
    if (!m[nrl]) nrerror("allocation failure 2 in rgbx32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}

/*
 * ---------------
 * --- matrix0 ---
 * ---------------
 */

/* --------------------------------------------------------------- */
byte** bmatrix0(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------- */
/* allocate a byte matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    byte **m;
    
    /* allocate pointers to rows */
    m=(byte **) malloc((size_t)((nrow+NR_END)*sizeof(byte*)));
    if (!m) nrerror("allocation failure 1 in bmatrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(byte *) calloc((size_t)(nrow*ncol+NR_END),sizeof(byte));
    if (!m[nrl]) nrerror("allocation failure 2 in bmatrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------ */
sint8** si8matrix0(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------ */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint8 **m;
    
    /* allocate pointers to rows */
    m=(sint8 **) malloc((size_t)((nrow+NR_END)*sizeof(sint8*)));
    if (!m) nrerror("allocation failure 1 in i8matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint8 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(sint8));
    if (!m[nrl]) nrerror("allocation failure 2 in imatrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------ */
uint8** ui8matrix0(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------ */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint8 **m;
    
    /* allocate pointers to rows */
    m=(uint8 **) malloc((size_t)((nrow+NR_END)*sizeof(uint8*)));
    if (!m) nrerror("allocation failure 1 in ui8matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint8 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(uint8));
    if (!m[nrl]) nrerror("allocation failure 2 in ui8matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
sint16** si16matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint16 **m;
    
    /* allocate pointers to rows */
    m=(sint16 **) malloc((size_t)((nrow+NR_END)*sizeof(sint16*)));
    if (!m) nrerror("allocation failure 1 in si16matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint16 *) calloc(nrow*ncol, sizeof(int16));
    if (!m[nrl]) nrerror("allocation failure 2 in si16matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
uint16** ui16matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint16 **m;
    
    /* allocate pointers to rows */
    m=(uint16 **) malloc((size_t)((nrow+NR_END)*sizeof(uint16*)));
    if (!m) nrerror("allocation failure 1 in ui16matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint16 *) calloc(nrow*ncol, sizeof(uint16));
    if (!m[nrl]) nrerror("allocation failure 2 in ui16matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
sint32** si32matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a int32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint32 **m;
    
    /* allocate pointers to rows */
    m=(sint32 **) malloc((size_t)((nrow+NR_END)*sizeof(sint32*)));
    if (!m) nrerror("allocation failure 1 in si32matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint32 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(sint32));
    if (!m[nrl]) nrerror("allocation failure 2 in si32matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
uint32** ui32matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;  
    uint32 **m;
    /* allocate pointers to rows */
    m=(uint32 **) malloc((size_t)((nrow+NR_END)*sizeof(uint32*)));
    if (!m) nrerror("allocation failure 1 in ui32matrix0()");
    m += NR_END;
    m -= nrl;

    /* allocate rows and set pointers to them */
    m[nrl]=(uint32 *) calloc((size_t)(nrow*ncol+NR_END), sizeof(uint32));
    if (!m[nrl]) nrerror("allocation failure 2 in ui32matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    /* return pointer to array of pointers to rows */
    return m;    
}
/* -------------------------------------------------------------------- */
sint64** si64matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    sint64 **m;
    
    /* allocate pointers to rows */
    m=(sint64 **) malloc((size_t)((nrow+NR_END)*sizeof(sint64*)));
    if (!m) nrerror("allocation failure 1 in si64matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint64 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(sint64));
    if (!m[nrl]) nrerror("allocation failure 2 in si64matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
uint64** ui64matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    uint64 **m;
    
    /* allocate pointers to rows */
    m=(uint64 **) malloc((size_t)((nrow+NR_END)*sizeof(uint64*)));
    if (!m) nrerror("allocation failure 1 in i64matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint64 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(uint64));
    if (!m[nrl]) nrerror("allocation failure 2 in i64matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
float32** f32matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float32 **m;
    
    /* allocate pointers to rows */
    m=(float32 **) malloc((size_t)((nrow+NR_END)*sizeof(float32*)));
    if (!m) nrerror("allocation failure 1 in f32matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float32 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(float32));
    if (!m[nrl]) nrerror("allocation failure 2 in f32matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
float64** f64matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float64 **m;
    
    /* allocate pointers to rows */
    m=(float64 **) malloc((size_t)((nrow+NR_END)*sizeof(float64*)));
    if (!m) nrerror("allocation failure 1 in f64matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float64 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(float64));
    if (!m[nrl]) nrerror("allocation failure 2 in f64matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------- */
complex32** c32matrix0(long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    complex32 **m;
    
    /* allocate pointers to rows */
    m=(complex32 **) malloc((size_t)((nrow+NR_END)*sizeof(complex32*)));
    if (!m) nrerror("allocation failure 1 in c32matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(complex32 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(complex32));
    if (!m[nrl]) nrerror("allocation failure 2 in c32matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------- */
complex64** c64matrix0(long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    complex64 **m;
    
    /* allocate pointers to rows */
    m=(complex64 **) malloc((size_t)((nrow+NR_END)*sizeof(complex64*)));
    if (!m) nrerror("allocation failure 1 in c64matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(complex64 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(complex64));
    if (!m[nrl]) nrerror("allocation failure 2 in c64matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------ */
rgb8** rgb8matrix0(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------ */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgb8 **m;
    
    /* allocate pointers to rows */
    m=(rgb8**) malloc((size_t)((nrow+NR_END)*sizeof(rgb8*)));
    if (!m) nrerror("allocation failure 1 in rgb8matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgb8*) calloc((size_t)(nrow*ncol+NR_END), sizeof(rgb8));
    if (!m[nrl]) nrerror("allocation failure 2 in rgb8matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
rgbx8** rgbx8matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a sint16  matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgbx8 **m;
    
    /* allocate pointers to rows */
    m=(rgbx8**) malloc((size_t)((nrow+NR_END)*sizeof(rgbx8*)));
    if (!m) nrerror("allocation failure 1 in rgbx8matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgbx8*) calloc((size_t)(nrow*ncol+NR_END), sizeof(rgbx8));
    if (!m[nrl]) nrerror("allocation failure 2 in rgbx8matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
rgb32** rgb32matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
/* allocate a rgb32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgb32 **m;
    
    /* allocate pointers to rows */
    m=(rgb32**) malloc((size_t)((nrow+NR_END)*sizeof(rgb32*)));
    if (!m) nrerror("allocation failure 1 in rgb32matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgb32*) calloc((nrow*ncol+NR_END), sizeof(rgb32));
    if (!m[nrl]) nrerror("allocation failure 2 in rgb32matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------- */
rgbx32** rgbx32matrix0(long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------- */
/* allocate a rgb32 matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    rgbx32 **m;
    
    /* allocate pointers to rows */
    m=(rgbx32**) malloc((size_t)((nrow+NR_END)*sizeof(rgbx32*)));
    if (!m) nrerror("allocation failure 1 in rgbx32matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(rgbx32*) calloc((size_t)(nrow*ncol+NR_END), sizeof(rgbx32));
    if (!m[nrl]) nrerror("allocation failure 2 in rgbx32matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/*
 * -------------------
 * --- free_matrix ---
 * -------------------
 */ 

/* ------------------------------------------------------------- */
void free_matrix(float **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------- */
/* free a float matrix allocated by matrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* --------------------------------------------------------------------------- */
void free_bmatrix(byte **m, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------ */
void free_si8matrix(sint8 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------ */
void free_ui8matrix(uint8 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}/* -------------------------------------------------------------------------------- */
void free_si16matrix(sint16 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_ui16matrix(uint16 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_si32matrix(sint32 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_ui32matrix(uint32 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_si64matrix(sint64 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_ui64matrix(uint64 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{  
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_f32matrix(float32 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_f64matrix(float64 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_c32matrix(complex32 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_c64matrix(complex64 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------ */
void free_rgb8matrix(rgb8 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------- */
void free_rgbx8matrix(rgbx8 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------ */
void free_rgb32matrix(rgb32 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_rgbx32matrix(rgbx32 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
