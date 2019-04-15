/* ---------------- */
/* --- nrmem2.c --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
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

#include "nrmem1.h"
#include "nrmem2.h"

/*
 * ------------------
 * --- dub_matrix ---
 * ------------------
 */
/* -------------------------------------------------------------------------------------- */
void dup_si8matrix(sint8 **X, long nrl,long nrh,long ncl, long nch, sint8 **Y)
/* -------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* -------------------------------------------------------------------------------------- */
void dup_ui8matrix(uint8 **X, long nrl,long nrh,long ncl, long nch, uint8 **Y)
/* -------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_si16matrix(sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_ui16matrix(uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_si32matrix(sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_ui32matrix(uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_si64matrix(sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_si64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ----------------------------------------------------------------------------------------- */
void dup_ui64matrix(uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 **Y)
/* ----------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_ui64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------ */
void dup_f32matrix(float32 **X, long nrl,long nrh,long ncl, long nch, float32 **Y)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------ */
void dup_f64matrix(float64 **X, long nrl,long nrh,long ncl, long nch, float64 **Y)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------- */
void dup_rgb8matrix(rgb8 **X, long nrl,long nrh,long ncl, long nch, rgb8 **Y)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_rgb8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------- */
void dup_rgbx8matrix(rgbx8 **X, long nrl,long nrh,long ncl, long nch, rgbx8 **Y)
/* ---------------------------------------------------------------------------------------- */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_rgbx8vector(X[i], ncl, nch, Y[i]);
    }
}
/*
 * --------------
 * --- resize ---
 * --------------
 */
/* -------------------------------------------------------------------------------- */
void resize_si8matrix(sint8 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------- */
void resize_ui8matrix(uint8 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_si16matrix(sint16 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_ui16matrix(uint16 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_si32matrix(sint32 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_ui32matrix(uint32 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_f32matrix(float32 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_f64matrix(float64 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------- */
void resize_rgb8matrix(rgb8 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------- */
void resize_rgbx8matrix(rgbx8 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------- */
/* -- Convertion -- */
/* ---------------- */
/* ---------------------------------------------------------------------------------------------------- */
void convert_si8matrix_si16matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si8vector_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_si8matrix_si32matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si8vector_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_si8matrix_f32matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si8vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_si8matrix_f64matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si8vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_ui16matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_ui32matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_f32matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_f64matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* -------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_rgb8matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, rgb8 **Y)
/* -------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_rgb8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_rgbx8matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, rgbx8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_rgbx8vector(X[i], ncl, nch, Y[i]);
    }
}

/* ------------------------------------------------------------------------------------------------------ */
void convert_si16matrix_si32matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si16vector_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si16matrix_f32matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si16vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si16matrix_f64matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si16vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui16matrix_ui32matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui16vector_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui16matrix_f32matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui16vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui16matrix_f64matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui16vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si32matrix_f32matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si32vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si32matrix_f64matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si32vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui32matrix_f32matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui32vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui32matrix_f64matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui32vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}
/*
 * -------------------------
 * --- convert downgrade ---
 * -------------------------
 */
/* --------------------------------------------------------------------------------------------------- */
void convert_si16matrix_si8matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y)
/* --------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si16vector_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* --------------------------------------------------------------------------------------------------- */
void convert_ui16matrix_ui8matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* --------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui16vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_si32matrix_si8matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si32vector_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* --------------------------------------------------------------------------------------------------- */
void convert_si32matrix_si16matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y)
/* --------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si32vector_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui32matrix_ui8matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui32vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* --------------------------------------------------------------------------------------------------- */
void convert_ui32matrix_ui16matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y)
/* --------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui32vector_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f32matrix_si8matrix(float32 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f32matrix_ui8matrix(float32 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f32matrix_si16matrix(float32 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f32matrix_ui16matrix(float32 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f32matrix_si32matrix(float32 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f32matrix_ui32matrix(float32 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f64matrix_si8matrix(float64 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f64matrix_ui8matrix(float64 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_si16matrix(float64 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_ui16matrix(float64 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_si32matrix(float64 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_ui32matrix(float64 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_f32matrix(float64 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_rgb8matrix_ui8matrix(rgb8 **X, long nrl, long nrh, long ncl, long nch, uint8 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_rgb8vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/*
 * ----------------------
 * --- lowpart_matrix ---
 * ----------------------
 */
/* ------------------------------------------------------------------------------------------------------ */
void lowpart_ui16matrix_ui8matrix(uint16 **X, long nrl,long nrh,long ncl, long nch, uint8 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
	long i;
	
	for(i=nrl; i<=nrh; i++) {
		lowpart_ui16vector_ui8vector(X[i], ncl,nch, Y[i]);
	}
}
/* ---------------------------------------------------------------------------------------- */
void lowpart_ui32matrix_ui8matrix(uint32 **X, long nrl,long nrh,long ncl, long nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------- */
{
	long i;
	for(i=nrl; i<=nrh; i++) {
		lowpart_ui32vector_ui8vector(X[i], ncl,nch, Y[i]);
	}
}
/*
 * -------------------
 * --- split-merge ---
 * -------------------
 */
/* ---------------------------------------------------------------------------------------------------------------- */
void split_rgb8matrix(rgb8 **X, long nrl, long nrh, long ncl, long nch, uint8 **R, uint8 **G, uint8 **B)
/* ---------------------------------------------------------------------------------------------------------------- */
{
	long i, j;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
            split_rgb8vector(X[i], ncl, nch, R[i], G[i], B[i]);
		}
	}
}
/* ---------------------------------------------------------------------------------------------------------------- */
void merge_rgb8matrix(uint8 **R, uint8 **G, uint8 **B, long nrl, long nrh, long ncl, long nch, rgb8 **X)
/* ---------------------------------------------------------------------------------------------------------------- */
{
	long i, j;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
            merge_rgb8vector(R[i], G[i], B[i], ncl, nch, X[i]);
		}
	}
}
