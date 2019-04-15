/* ------------------ */
/* --- nralloc1.c --- */
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
//#include <stdarg.h> // va_start
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
#include "nrset1.h" // set 1

//NR_END est maintenant defini dans nrutil.h

//#define NR_END 1
//#define FREE_ARG char*

long nr_end = NR_END;

// ------------------------------------------------------------------
// -- deprecated type (original NRC type, not enough typed vector) --
// ------------------------------------------------------------------

/* ---------------------------------------- */
sint8* si8vector(long nl, long nh)
/* ---------------------------------------- */
{
    sint8 *v;
    
    v=(sint8 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(sint8)));
    if (!v) nrerror("allocation failure in si8vector()");
    return v-nl+NR_END;
}
/* ---------------------------------------- */
uint8* ui8vector(long nl, long nh)
/* ---------------------------------------- */
{
    uint8 *v;
    
    v=(uint8 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(uint8)));
    if (!v) nrerror("allocation failure in ui8vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
sint16* si16vector(long nl, long nh)
/* -------------------------------------------- */
{
    sint16 *v;
    
    v=(sint16 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(sint16)));
    if (!v) nrerror("allocation failure in si16vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
uint16* ui16vector(long nl, long nh)
/* -------------------------------------------- */
{
    uint16 *v;
    
    v=(uint16 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(uint16)));
    if (!v) nrerror("allocation failure in ui16vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
sint32* si32vector(long nl, long nh)
/* -------------------------------------------- */
{
    sint32 *v;
    
    v=(sint32 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(sint32)));
    if (!v) nrerror("allocation failure in si32vector()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* -------------------------------------------- */
uint32* ui32vector(long nl, long nh)
/* -------------------------------------------- */
{
    uint32 *v;
    
    v=(uint32 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(uint32)));
    if (!v) nrerror("allocation failure in ui32vector()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* -------------------------------------------- */
sint64* si64vector(long nl, long nh)
/* -------------------------------------------- */
{
    sint64 *v;
    
    v=(sint64 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(sint64)));
    if (!v) nrerror("allocation failure in si64vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
uint64* ui64vector(long nl, long nh)
/* -------------------------------------------- */
{
    uint64 *v;
    
    v=(uint64 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(uint64)));
    if (!v) nrerror("allocation failure in ui64vector()");
    return v-nl+NR_END;
}
/* ------------------------------------------ */
float32* f32vector(long nl, long nh)
/* ------------------------------------------ */
{
    float32 *v;
    
    v=(float32 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(float32)));
    if (!v) nrerror("allocation failure in f32vector()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* ------------------------------------------ */
float64* f64vector(long nl, long nh)
/* ------------------------------------------ */
{
    float64 *v;
    
    v=(float64 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(float64)));
    if (!v) nrerror("allocation failure in f64vector()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* ------------------------------------------ */
rgb8* rgb8vector(long nl, long nh)
/* ------------------------------------------ */
{
    rgb8 *v;
    
    v=(rgb8 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(rgb8)));
    if (!v) nrerror("allocation failure in rgb8vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
rgbx8* rgbx8vector(long nl, long nh)
/* -------------------------------------------- */
{
    rgbx8 *v;
    
    v=(rgbx8 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(rgbx8)));
    if (!v) nrerror("allocation failure in rgbx8vector()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
rgb32* rgb32vector(long nl, long nh)
/* -------------------------------------------- */
{
    rgb32 *v;
    
    v=(rgb32 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(rgb32)));
    if (!v) nrerror("allocation failure in rgb32vector()");
    return v-nl+NR_END;
}

/* ---------------------------------------- */
void** vvector(long nl, long nh)
/* ---------------------------------------- */
{
    void **v;
    
    v=(void**)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(void*)));
    if (!v) nrerror("allocation failure in vvector()");
    return v-nl+NR_END;
}
/*
 * ---------------
 * --- vector0 ---
 * ---------------
 */

// do: allocate a vector and set it to 0

// ----------------------
// --- not deprecated ---
// ----------------------
/* ------------------------------------------- */
sint8* si8vector0(long nl, long nh)
/* ------------------------------------------- */
{
    sint8 *v;
    
    v=(sint8 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(sint8));
    if (!v) nrerror("allocation failure in si8vector0()");
    return v-nl+NR_END;
}
/* ------------------------------------------- */
uint8* ui8vector0(long nl, long nh)
/* ------------------------------------------- */
{
    uint8 *v;
    
    v=(uint8 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(uint8));
    if (!v) nrerror("allocation failure in ui8vector0()");
    return v-nl+NR_END;
}
/* -------------------------------------------- */
int16* si16vector0(long nl, long nh)
/* -------------------------------------------- */
{
    sint16 *v;
    
    v=(sint16 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(sint16));
    if (!v) nrerror("allocation failure in si16vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
uint16* ui16vector0(long nl, long nh)
/* --------------------------------------------- */
{
    uint16 *v;
    
    v=(uint16 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(uint16));
    if (!v) nrerror("allocation failure in ui16vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
sint32* si32vector0(long nl, long nh)
/* --------------------------------------------- */
/* allocate a sint32 vector with subscript range v[nl..nh] */
{
    sint32 *v;
    
    v=(sint32 *) calloc((size_t) (nh-nl+1+NR_END),sizeof(sint32));
    if (!v) nrerror("allocation failure in si32vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
uint32* ui32vector0(long nl, long nh)
/* --------------------------------------------- */
/* allocate a uint32 vector with subscript range v[nl..nh] */
{
    uint32 *v;
    
    v=(uint32 *) calloc((size_t) (nh-nl+1+NR_END),sizeof(uint32));
    if (!v) nrerror("allocation failure in ui32vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
float32* f32vector0(long nl, long nh)
/* --------------------------------------------- */
/* allocate a float32 vector with subscript range v[nl..nh] */
{
    float32 *v;
    
    v=(float32 *) calloc ( (size_t) (nh-nl+1+NR_END), sizeof(float32) );
    if (!v) nrerror("allocation failure in f32vector0()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* --------------------------------------------- */
float64* f64vector0(long nl, long nh)
/* --------------------------------------------- */
/* allocate a float vector with subscript range v[nl..nh] */
{
    float64 *v;
    
    v=(float64 *) calloc ( (size_t) (nh-nl+1+NR_END), sizeof(float64) );
    if (!v) nrerror("allocation failure in f64vector0()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* ------------------------------------------- */
rgb8* rgb8vector0(long nl, long nh)
/* ------------------------------------------- */
{
    rgb8 *v;
    
    v=(rgb8 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(rgb8));
    if (!v) nrerror("allocation failure in rgb8vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
rgbx8* rgbx8vector0(long nl, long nh)
/* --------------------------------------------- */
{
    rgbx8 *v;
    
    v=(rgbx8 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(rgbx8));
    if (!v) nrerror("allocation failure in rgbx8vector0()");
    return v-nl+NR_END;
}
/* --------------------------------------------- */
rgb32* rgb32vector0(long nl, long nh)
/* --------------------------------------------- */
{
    rgb32 *v;
    
    v=(rgb32 *)calloc((size_t) ((nh-nl+1+NR_END)), sizeof(rgb32));
    if (!v) nrerror("allocation failure in rgb32vector0()");
    return v-nl+NR_END;
}
/*
 * ----------------------
 * --- realloc_vector ---
 * ----------------------
*/

/* ------------------------------------------------------------ */
sint8* realloc_si8vector(sint8 *v, long nl, long nh)
/* ------------------------------------------------------------ */
{
    v += nl;
    v -= NR_END;
    v=(sint8 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(sint8)));
    if (!v) nrerror("allocation failure in realloc_si8vector()");
    
    return v-nl+NR_END;
}
/* ------------------------------------------------------------ */
uint8* realloc_ui8vector(uint8 *v, long nl, long nh)
/* ------------------------------------------------------------ */
{
    v += nl;
    v -= NR_END;
    v=(uint8 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(uint8)));
    if (!v) nrerror("allocation failure in realloc_ui8vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
sint16* realloc_si16vector(sint16 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(sint16 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(sint16)));
    if (!v) nrerror("allocation failure in realloc_si16vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
uint16* realloc_ui16vector(uint16 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(uint16 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(uint16)));
    if (!v) nrerror("allocation failure in realloc_ui16vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
sint32* realloc_si32vector(sint32 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(sint32 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(sint32)));
    if (!v) nrerror("allocation failure in realloc_si32vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
uint32* realloc_ui32vector(uint32 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(uint32 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(uint32)));
    if (!v) nrerror("allocation failure in realloc_ui32vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
sint64* realloc_si64vector(sint64 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(sint64 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(sint64)));
    if (!v) nrerror("allocation failure in realloc_si64vector()");
    
    return v-nl+NR_END;
}
/* --------------------------------------------------------------- */
uint64* realloc_ui64vector(uint64 *v, long nl, long nh)
/* --------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(uint64 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(uint64)));
    if (!v) nrerror("allocation failure in realloc_ui64vector()");
    
    return v-nl+NR_END;
}
/* ---------------------------------------------------------- */
rgb8* realloc_rgb8vector(rgb8 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(rgb8 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(rgb8)));
    if (!v) nrerror("allocation failure in realloc_rgb8vector()");
    
    return v-nl+NR_END;
}
/* -------------------------------------------------------------- */
rgbx8* realloc_rgbx8vector(rgbx8 *v, long nl, long nh)
/* -------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(rgbx8 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(rgbx8)));
    if (!v) nrerror("allocation failure in realloc_rgbx8vector()");
    
    return v-nl+NR_END;
}
/* -------------------------------------------------------------- */
rgb32* realloc_rgb32vector(rgb32 *v, long nl, long nh)
/* -------------------------------------------------------------- */
{
    v += nl;
    v -= NR_END;
    v=(rgb32 *)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(rgb32)));
    if (!v) nrerror("allocation failure in realloc_rgb32vector()");
    
    return v-nl+NR_END;
}
/* ---------------------------------------------------------- */
void** realloc_vvector(void **v, long nl, long nh)
/* ---------------------------------------------------------- */
/*
* add n item to an void* vector with subscript range
* fromv[nl..nh] to [nl..nh+n] */
{
    v += nl;
    v -= NR_END;
    v=(void**)realloc(v, (size_t) ((nh-nl+1+NR_END)*sizeof(void*)));
    if (!v) nrerror("allocation failure in realloc vvector()");
    
    return v-nl+NR_END;
}
/*
 * -------------------
 * --- free_vector ---
 * -------------------
 */

/* free a byte vector allocated with bvector() */

/* ------------------------------------------------------- */
void free_si8vector(sint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ------------------------------------------------------- */
void free_ui8vector(uint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_si16vector(sint16 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ------------------------------------------------------- */
void free_ui16vector(uint16 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_si32vector(sint32 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_ui32vector(uint32 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_si64vector(sint64 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_ui64vector(uint64 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ---------------------------------------------------- */
void free_f32vector(float32 *v, long nl, long nh)
/* ---------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ---------------------------------------------------- */
void free_f64vector(float64 *v, long nl, long nh)
/* ---------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* -------------------------------------------------------- */
void free_rgb8vector(rgb8 *v, long nl, long nh)
/* -------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* --------------------------------------------------------- */
void free_rgbx8vector(rgbx8 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ------------------------------------------------------- */
void free_rgb32vector(rgb32 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
/* ----------------------------------------------------- */
void free_vvector(void **v, long nl, long nh)
/* ----------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}
