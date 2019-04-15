/* ------------------- */
/* --- nralloc2X.c --- */
/* ------------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * 
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
#include "nralloc2x.h"
//#include "nrarith.h"

/* ----------------------------------------------------------------------- */
si16Point** si16Pmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    si16Point **m;
    
    /* allocate pointers to rows */
    m=(si16Point **) malloc((size_t)((nrow+NR_END)*sizeof(si16Point*)));
    if (!m) nrerror("allocation failure 1 in si16Pmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(si16Point *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(si16Point)));
    if (!m[nrl]) nrerror("allocation failure 2 in si16Pmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
ui16Point** ui16Pmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    ui16Point **m;
    
    /* allocate pointers to rows */
    m=(ui16Point **) malloc((size_t)((nrow+NR_END)*sizeof(ui16Point*)));
    if (!m) nrerror("allocation failure 1 in ui16Pmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(ui16Point *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(ui16Point)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui16Pmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
si32Point** si32Pmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    si32Point **m;
    
    /* allocate pointers to rows */
    m=(si32Point **) malloc((size_t)((nrow+NR_END)*sizeof(si32Point*)));
    if (!m) nrerror("allocation failure 1 in si32Pmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(si32Point *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(si32Point)));
    if (!m[nrl]) nrerror("allocation failure 2 in si32Pmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
ui32Point** ui32Pmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    ui32Point **m;
    
    /* allocate pointers to rows */
    m=(ui32Point **) malloc((size_t)((nrow+NR_END)*sizeof(ui32Point*)));
    if (!m) nrerror("allocation failure 1 in ui32Pmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(ui32Point *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(ui32Point)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui32Pmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------- */
f32Point** f32Pmatrix(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    f32Point **m;
    
    /* allocate pointers to rows */
    m=(f32Point **) malloc((size_t)((nrow+NR_END)*sizeof(f32Point*)));
    if (!m) nrerror("allocation failure 1 in f32Pmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(f32Point *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(f32Point)));
    if (!m[nrl]) nrerror("allocation failure 2 in f32Pmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ------------------------------------------------------------------------- */
si16Triplet** si16Tmatrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    si16Triplet **m;
    
    /* allocate pointers to rows */
    m=(si16Triplet **) malloc((size_t)((nrow+NR_END)*sizeof(si16Triplet*)));
    if (!m) nrerror("allocation failure 1 in si16Tmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(si16Triplet *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(si16Triplet)));
    if (!m[nrl]) nrerror("allocation failure 2 in si16Tmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
ui16Triplet** ui16Tmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    ui16Triplet **m;
    
    /* allocate pointers to rows */
    m=(ui16Triplet **) malloc((size_t)((nrow+NR_END)*sizeof(ui16Triplet*)));
    if (!m) nrerror("allocation failure 1 in ui16Tmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(ui16Triplet *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(ui16Triplet)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui16Tmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
si32Triplet** si32Tmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    si32Triplet **m;
    
    /* allocate pointers to rows */
    m=(si32Triplet**) malloc((size_t)((nrow+NR_END)*sizeof(si32Triplet*)));
    if (!m) nrerror("allocation failure 1 in si32Tmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(si32Triplet*) malloc((size_t)((nrow*ncol+NR_END)*sizeof(si32Triplet)));
    if (!m[nrl]) nrerror("allocation failure 2 in si32Tmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ----------------------------------------------------------------------- */
ui32Triplet** ui32Tmatrix(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    ui32Triplet **m;
    
    /* allocate pointers to rows */
    m=(ui32Triplet **) malloc((size_t)((nrow+NR_END)*sizeof(ui32Triplet*)));
    if (!m) nrerror("allocation failure 1 in ui32Tmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(ui32Triplet *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(ui32Triplet)));
    if (!m[nrl]) nrerror("allocation failure 2 in ui32Tmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------- */
f32Triplet** f32Tmatrix(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    f32Triplet **m;
    
    /* allocate pointers to rows */
    m=(f32Triplet **) malloc((size_t)((nrow+NR_END)*sizeof(f32Triplet*)));
    if (!m) nrerror("allocation failure 1 in f32Tmatrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(f32Triplet *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(f32Triplet)));
    if (!m[nrl]) nrerror("allocation failure 2 in f32Tmatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* ---------------------------------------------------------------------------------- */
void free_si16Pmatrix(si16Point **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
/* free an si16Point matrix allocated by si16Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_ui16Pmatrix(ui16Point **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
/* free an ui16Point matrix allocated by ui16Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------ */
void free_si32Pmatrix(si32Point **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------ */
void free_ui32Pmatrix(ui32Point **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_f32Pmatrix(f32Point **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
/* free an f32Point matrix allocated by f32Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------------- */
void free_si16Tmatrix(si16Triplet **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
/* free an si16Point matrix allocated by si16Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ---------------------------------------------------------------------------------- */
void free_ui16Tmatrix(ui16Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
/* free an ui16Point matrix allocated by ui16Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------ */
void free_si32Tmatrix(si32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* -------------------------------------------------------------------------------------- */
void free_ui32Tmatrix(ui32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------ */
void free_f32Tmatrix(f32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
/* free an f32Point matrix allocated by f32Pmatrix() */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}

/* ----------------- */
/* --- trimatrix --- */
/* ----------------- */
/* ---------------------------------------------------------------------------- */
byte** btrimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* ---------------------------------------------------------------------------- */
/* allocate an byte triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    byte **m;
    
    /* allocate pointers to rows */
    m=(byte **) malloc((size_t)((nrow+NR_END)*sizeof(byte*)));
    if (!m) nrerror("allocation failure 1 in btrimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(byte *) malloc((size_t)((n+NR_END)*sizeof(byte)));
    if (!m[nrl]) nrerror("allocation failure 2 in btrimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------------------- */
sint16** si16trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* --------------------------------------------------------------------------------- */
/* allocate an i16 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    sint16 **m;
    
    /* allocate pointers to rows */
    m=(sint16 **) malloc((size_t)((nrow+NR_END)*sizeof(sint16*)));
    if (!m) nrerror("allocation failure 1 in i16trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(int16*) malloc((size_t)((n+NR_END)*sizeof(int16)));
    if (!m[nrl]) nrerror("allocation failure 2 in i16trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------------------- */
uint16** ui16trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* --------------------------------------------------------------------------------- */
/* allocate an i16 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    uint16 **m;
    
    /* allocate pointers to rows */
    m=(uint16 **) malloc((size_t)((nrow+NR_END)*sizeof(uint16*)));
    if (!m) nrerror("allocation failure 1 in ui16trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint16*) malloc((size_t)((n+NR_END)*sizeof(uint16)));
    if (!m[nrl]) nrerror("allocation failure 2 in i16trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------------------- */
sint32** si32trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* --------------------------------------------------------------------------------- */
/* allocate an i32 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    sint32 **m;
    
    /* allocate pointers to rows */
    m=(sint32 **) malloc((size_t)((nrow+NR_END)*sizeof(sint32*)));
    if (!m) nrerror("allocation failure 1 in si32trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(sint32*) malloc((size_t)((n+NR_END)*sizeof(sint32)));
    if (!m[nrl]) nrerror("allocation failure 2 in si32trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------------------- */
uint32** i32trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* -------------------------------------------------------------------------------- */
/* allocate an i32 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    uint32 **m;
    
    /* allocate pointers to rows */
    m=(uint32 **) malloc((size_t)((nrow+NR_END)*sizeof(uint32*)));
    if (!m) nrerror("allocation failure 1 in ui32trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(uint32*) malloc((size_t)((n+NR_END)*sizeof(uint32)));
    if (!m[nrl]) nrerror("allocation failure 2 in i32trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------------------- */
float32** f32trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* --------------------------------------------------------------------------------- */
/* allocate an f32 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    float32 **m;
    
    /* allocate pointers to rows */
    m=(float32 **) malloc((size_t)((nrow+NR_END)*sizeof(float32*)));
    if (!m) nrerror("allocation failure 1 in f32trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float32*) malloc((size_t)((n+NR_END)*sizeof(float32)));
    if (!m[nrl]) nrerror("allocation failure 2 in f32trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* --------------------------------------------------------------------------------- */
float64** f64trimatrix(long nrl, long nrh, long ncl, long nch, long step)
/* --------------------------------------------------------------------------------- */
/* allocate an f64 triangle-matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1, n = nrow * ncol + (nrow * (nrow-1) * step) / 2;
    // Attention, factorisation of n IS NOT PERMITTED : (nrow-1)step/2 is not even!!!
    float64 **m;
    
    /* allocate pointers to rows */
    m=(float64 **) malloc((size_t)((nrow+NR_END)*sizeof(float64*)));
    if (!m) nrerror("allocation failure 1 in f64trimatrix()");
    m += NR_END;
    m -= nrl;
    
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float64*) malloc((size_t)((n+NR_END)*sizeof(float64)));
    if (!m[nrl]) nrerror("allocation failure 2 in f64trimatrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) { m[i]=m[i-1]+ncol; ncol += step; }
    
    /* return pointer to array of pointers to rows */
    return m;
}
