/* ---------------- */
/* --- nrmem1.c --- */
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

/*
 * -----------
 * --- dup ---
 * -----------
 */
/* ---------------------------------------------------------------- */
void dup_si8vector(sint8 *X, long nl, long nh, sint8 *Y)
/* ---------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ---------------------------------------------------------------- */
void dup_ui8vector(uint8 *X, long nl, long nh, uint8 *Y)
/* ---------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ------------------------------------------------------------------- */
void dup_si16vector(sint16 *X, long nl, long nh, sint16 *Y)
/* ------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ------------------------------------------------------------------- */
void dup_ui16vector(uint16 *X, long nl, long nh, uint16 *Y)
/* ------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* -------------------------------------------------------------------- */
void dup_si32vector(sint32 *X, long nl, long nh, sint32 *Y)
/* -------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ------------------------------------------------------------------- */
void dup_ui32vector(uint32 *X, long nl, long nh, uint32 *Y)
/* ------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* -------------------------------------------------------------------- */
void dup_si64vector(sint64 *X, long nl, long nh, sint64 *Y)
/* -------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ------------------------------------------------------------------- */
void dup_ui64vector(uint64 *X, long nl, long nh, uint64 *Y)
/* ------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* -------------------------------------------------------------------- */
void dup_f32vector(float32 *X, long nl, long nh, float32 *Y)
/* -------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* -------------------------------------------------------------------- */
void dup_f64vector(float64 *X, long nl, long nh, float64 *Y)
/* -------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* --------------------------------------------------------------- */
void dup_rgb8vector(rgb8 *X, long nl, long nh, rgb8 *Y)
/* --------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* ------------------------------------------------------------------ */
void dup_rgbx8vector(rgbx8 *X, long nl, long nh, rgbx8 *Y)
/* ------------------------------------------------------------------ */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/*
 * --------------------
 * --- split_vector ---
 * --------------------
 */
/* -------------------------------------------------------------------------------------- */
void split_rgb8vector(rgb8 *X, long nl, long nh, uint8 *R, uint8 *G, uint8 *B)
/* -------------------------------------------------------------------------------------- */
{
	long i;
	rgb8 x;
	for(i=nl; i<=nh; i++) {
		x    = X[i];
		R[i] = x.r;
		G[i] = x.g;
		B[i] = x.b;
	}
}
/* ------------------------------------------------------------------------------------------- */
void split_rgb32vector(rgb32 *X, long nl, long nh, uint32 *R, uint32 *G, uint32 *B)
/* ------------------------------------------------------------------------------------------- */
{
	long i;
	for(i=nl; i<=nh; i++) {
		R[i] = X[i].r;
		G[i] = X[i].g;
		B[i] = X[i].b;
	}
}
/* -------------------------------------------------------------------------------------- */
void merge_rgb8vector(uint8 *R, uint8 *G, uint8 *B, long nl, long nh, rgb8 *X)
/* -------------------------------------------------------------------------------------- */
{
	long i;
	for(i=nl; i<=nh; i++) {
		X[i].r = R[i];
		X[i].g = G[i];
		X[i].b = B[i];
	}
}
/* ------------------------------------------------------------------------------------------- */
void merge_rgb32vector(uint32 *R, uint32 *G, uint32 *B, long nl, long nh, rgb32 *X)
/* ------------------------------------------------------------------------------------------- */
{
	long i;
	for(i=nl; i<=nh; i++) {
		X[i].r = R[i];
		X[i].g = G[i];
		X[i].b = B[i];
	}
}

/* ---------------- */
/* -- Convertion -- */
/* ---------------- */

/* -------------------------------------------------------------------------------- */
void convert_si8vector_si16vector(sint8 *X, long nl, long nh, sint16 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_si8vector_si32vector(sint8 *X, long nl, long nh, sint32 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint32) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_si8vector_f32vector(sint8 *X, long nl, long nh, float32 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_si8vector_f64vector(sint8 *X, long nl, long nh, float64 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_ui16vector(uint8 *X, long nl, long nh, uint16 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_ui32vector(uint8 *X, long nl, long nh, uint32 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint32) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_f32vector(uint8 *X, long nl, long nh, float32 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_f64vector(uint8 *X, long nl, long nh, float64 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
/* ------------------------------------------------------------------------------ */
void convert_ui8vector_rgb8vector(uint8 *X, long nl, long nh, rgb8 *Y)
/* ------------------------------------------------------------------------------ */
{
    long i;
    for(i=nl; i<=nh; i++) {
        Y[i].r = X[i];
        Y[i].g = X[i];
        Y[i].b = X[i];
    }
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_rgbx8vector(uint8 *X, long nl, long nh, rgbx8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++) {
        Y[i].r = X[i];
        Y[i].g = X[i];
        Y[i].b = X[i];
        Y[i].x = 255;
    }
}
/* ---------------------------------------------------------------------------------- */
void convert_si16vector_si32vector(sint16 *X, long nl, long nh, sint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si16vector_f32vector(sint16 *X, long nl, long nh, float32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si16vector_f64vector(sint16 *X, long nl, long nh, float64 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}

/* ---------------------------------------------------------------------------------- */
void convert_ui16vector_ui32vector(uint16 *X, long nl, long nh, uint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_ui16vector_f32vector(uint16 *X, long nl, long nh, float32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_ui16vector_f64vector(uint16 *X, long nl, long nh, float64 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si32vector_f32vector(sint32 *X, long nl, long nh, float32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si32vector_f64vector(sint32 *X, long nl, long nh, float64 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
/* ----------------------------------------------------------------------------------- */
void convert_ui32vector_f32vector(uint32 *X, long nl, long nh, float32 *Y)
/* ----------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ----------------------------------------------------------------------------------- */
void convert_ui32vector_f64vector(uint32 *X, long nl, long nh, float64 *Y)
/* ----------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
// === Down === //
/* ------------------------------------------------------------------------------- */
void convert_si16vector_si8vector(sint16 *X, long nl, long nh, sint8 *Y)
/* ------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint8) X[i];
}
/* ------------------------------------------------------------------------------- */
void convert_ui16vector_ui8vector(uint16 *X, long nl, long nh, uint8 *Y)
/* ------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint8) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_si32vector_si8vector(sint32 *X, long nl, long nh, sint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint8) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si32vector_si16vector(sint32 *X, long nl, long nh, sint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui32vector_ui8vector(uint32 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint8) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_ui32vector_ui16vector(uint32 *X, long nl, long nh, uint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f32vector_si8vector(float32 *X, long nl, long nh, sint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint8) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f32vector_ui8vector(float32 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint8) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f32vector_si16vector(float32 *X, long nl, long nh, sint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f32vector_ui16vector(float32 *X, long nl, long nh, uint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f32vector_si32vector(float32 *X, long nl, long nh, sint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f32vector_ui32vector(float32 *X, long nl, long nh, uint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint32) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f64vector_si8vector(float64 *X, long nl, long nh, sint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint8) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f64vector_ui8vector(float64 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint8) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_si16vector(float64 *X, long nl, long nh, sint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_ui16vector(float64 *X, long nl, long nh, uint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_si32vector(float64 *X, long nl, long nh, sint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_ui32vector(float64 *X, long nl, long nh, uint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_f32vector(float64 *X, long nl, long nh, float32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ------------------------------------------------------------------------------ */
void convert_rgb8vector_ui8vector(rgb8 *X, long nl, long nh, uint8 *Y)
/* ------------------------------------------------------------------------------ */
{
    long i;
    for(i=nl; i<=nh; i++) {
        Y[i] = (X[i].r + X[i].g + X[i].b) / 3;
    }
}
/* -------------------------------------------------------------------------------- */
void convert_rgbx8vector_ui8vector(rgbx8 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++) {
        Y[i] = (X[i].r + X[i].g + X[i].b) / 3;
    }
}
/*
 * ---------------
 * --- LowPart ---
 * ---------------
 */
/* ------------------------------------------------------------------------------- */
void lowpart_ui16vector_ui8vector(uint16 *X, long nl,long nh, uint8 *Y)
/* ------------------------------------------------------------------------------- */
{
	int i;
	for(i=nl; i<=nh; i++) {
		Y[i] = X[i] & 0xff;
	}
}
/* ------------------------------------------------------------------------------- */
void lowpart_ui32vector_ui8vector(uint32 *X, long nl,long nh, uint8 *Y)
/* ------------------------------------------------------------------------------- */
{
	int i;
	for(i=nl; i<=nh; i++) {
		Y[i] = X[i] & 0xff;
	}
}


