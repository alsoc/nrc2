/* ----------------- */
/* --- nrmem1x.c --- */
/* ----------------- */

/*
* Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
* Univ Paris Sud XI, CNRS
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nrmem1x.h"
/* --------------------------------------- */
void roll_si16vector(sint16 *v, long nl, long nh)
/* --------------------------------------- */
/* 
* left rotate a uint16 vector with subscript range v[nl..nh]
* nl & nh can be, respectively bigger and smaller than the
* values used to allocate the vector (svector)
* no check on nl and nh is done
*/
{
	long i;
	sint16 tmp;
	
	tmp = v[nl];
	for(i=nl; i<nh; i++) {
		v[i] = v[i+1];
	}
	v[nh] = tmp;
}
/* ----------------------------------------- */
void roll_ui16vector(uint16 *v, long nl, long nh)
/* ----------------------------------------- */
/* 
* left rotate a uint16 vector with subscript range v[nl..nh]
* nl & nh can be, respectively bigger and smaller than the
* values used to allocate the vector (svector)
* no check on nl and nh is done
*/
{
	long i;
	uint16 tmp;
	
	tmp = v[nl];
	for(i=nl; i<nh; i++) {
		v[i] = v[i+1];
	}
	v[nh] = tmp;
}
/*
 * -------------------
 * --- copy_vector ---
 * -------------------
 */

/* --------------------------------------------------------------------------------------- */
void copy_bvector(uint8 *src, long nl1, long nh1, uint8 *dst, long nl2, long nh2)
/* --------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    memcpy(dst + nl2, src + nl1, len);
}
/* ----------------------------------------------------------------------------------------- */
void copy_svector(uint16 *src, long nl1, long nh1, uint16 *dst, long nl2, long nh2)
/* ----------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(uint16);
    memcpy(dst + nl2, src + nl1, len*size);
}
// ------------------------------------------------------------------------------------------------
void copy_si16vector(sint16 *src, long nl1, long nh1, int16 *dst, long nl2, long nh2)
// ------------------------------------------------------------------------------------------------
{
    long len = nh1 - nl1 + 1;
    memcpy(dst + nl2, src + nl1, 2*len);
}
// ------------------------------------------------------------------------------------------------
void copy_ui16vector(uint16 *src, long nl1, long nh1, uint16 *dst, long nl2, long nh2)
// ------------------------------------------------------------------------------------------------
{
    long len = nh1 - nl1 + 1;
    memcpy(dst + nl2, src + nl1, 2*len);
}
/* ------------------------------------------------------------------------------------- */
void copy_si32vector(sint32 *src, long nl1, long nh1, sint32 *dst, long nl2, long nh2)
/* ------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(sint32);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ---------------------------------------------------------------------------------------- */
void copy_ui32vector(uint32 *src, long nl1, long nh1, uint32 *dst, long nl2, long nh2)
/* ---------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(uint32);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ---------------------------------------------------------------------------------------- */
void copy_f32vector(float32 *src, long nl1, long nh1, float32 *dst, long nl2, long nh2)
/* ---------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(float32);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ------------------------------------------------------------------------------------------- */
void copy_f64vector(float64 *src, long nl1, long nh1, float64 *dst, long nl2, long nh2)
/* ------------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(float64);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ------------------------------------------------------------------------------------------ */
void copy_rgb8vector(rgb8 *src, long nl1, long nh1, rgb8 *dst, long nl2, long nh2)
/* ------------------------------------------------------------------------------------------ */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(rgb8);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* --------------------------------------------------------------------------------------------- */
void copy_rgbx8vector(rgbx8 *src, long nl1, long nh1, rgbx8 *dst, long nl2, long nh2)
/* --------------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(rgbx8);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ---------------------------------------------------------------------------- */
void copy1c_bvector(uint8 *src, long nc, uint8 *dst, long nl, long nh)
/* ---------------------------------------------------------------------------- */
{
    int j;
    uint8 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ----------------------------------------------------------------------------------- */
void copy1c_ui16vector(uint16 *src, long nc, uint16 *dst, long nl, long nh)
/* ----------------------------------------------------------------------------------- */
{
    int j;
    uint16 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ---------------------------------------------------------------------------------- */
void copy1c_si16vector(sint16 *src, long nc, sint16 *dst, long nl, long nh)
/* ---------------------------------------------------------------------------------- */
{
    int j;
    sint16 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* -------------------------------------------------------------------------- */
void copy1c_ui32vector(uint32 *src, long nc, uint32 *dst, long nl, long nh)
/* -------------------------------------------------------------------------- */
{
    int j;
    int c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ----------------------------------------------------------------------------- */
void copy1c_si32vector(sint32 *src, long nc, sint32 *dst, long nl, long nh)
/* ----------------------------------------------------------------------------- */
{
    int j;
    int c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ----------------------------------------------------------------------------- */
void copy1c_f32vector(float32 *src, long nc, float32 *dst, long nl, long nh)
/* ----------------------------------------------------------------------------- */
{
    int j;
    float c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* -------------------------------------------------------------------------------- */
void copy1c_f64vector(float64 *src, long nc, float64 *dst, long nl, long nh)
/* -------------------------------------------------------------------------------- */
{
    int j;
    float64 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ------------------------------------------------------------------------------- */
void copy1c_rgb8vector(rgb8 *src, long nc, rgb8 *dst, long nl, long nh)
/* ------------------------------------------------------------------------------- */
{
    int j;
    rgb8 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ---------------------------------------------------------------------------------- */
void copy1c_rgbx8vector(rgbx8 *src, long nc, rgbx8 *dst, long nl, long nh)
/* ---------------------------------------------------------------------------------- */
{
    int j;
    rgbx8 c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ----------------------------------------------------------------------------- */
void copy_bvector_mod(uint8 *src, long nl, long nh, long m, uint8 *dst)
/* ----------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len);
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1);
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2);
    }
}
/* ------------------------------------------------------------------------------- */
void copy_si16vector_mod(sint16 *src, long nl, long nh, long m, sint16 *dst)
/* ------------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(uint16));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(uint16));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(uint16));
    }
}
/* --------------------------------------------------------------------------------- */
void copy_ui16vector_mod(uint16 *src, long nl, long nh, long m, uint16 *dst)
/* --------------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(uint16));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(uint16));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(uint16));
    }
}
/* --------------------------------------------------------------------------- */
void copy_ui32vector_mod(uint32 *src, long nl, long nh, long m, uint32 *dst)
/* --------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(uint32));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(uint32));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(uint32));
    }
}
/* --------------------------------------------------------------------------- */
void copy_si32vector_mod(sint32 *src, long nl, long nh, long m, sint32 *dst)
/* --------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(sint32));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(sint32));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(sint32));
    }
}
/* ------------------------------------------------------------------------------ */
void copy_f32vector_mod(float32 *src, long nl, long nh, long m, float32 *dst)
/* ------------------------------------------------------------------------------ */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(float32));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(float32));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(float32));
    }
}
/* --------------------------------------------------------------------------------- */
void copy_f64vector_mod(float64 *src, long nl, long nh, long m, float64 *dst)
/* --------------------------------------------------------------------------------- */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(float64));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(float64));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(float64));
    }
}

