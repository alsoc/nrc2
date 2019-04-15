/* ----------------- */
/* --- nrwrap2.c --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
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
#include "nrwrap2.h"

/* --------------------------------------------------------------------- */
sint8** si8matrix_map(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    sint8 **m;
    
    // allocate pointers to rows
    m=(sint8 **) malloc((size_t)(nrow*sizeof(sint8*)));
    if (!m) nrerror("allocation failure 1 in si8matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* --------------------------------------------------------------------- */
uint8** ui8matrix_map(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    uint8 **m;
    
    // allocate pointers to rows
    m=(uint8 **) malloc((size_t)(nrow*sizeof(uint8*)));
    if (!m) nrerror("allocation failure 1 in ui8matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
sint16** si16matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    sint16 **m;
    
    // allocate pointers to rows
    m=(sint16 **) malloc((size_t)(nrow*sizeof(sint16*)));
    if (!m) nrerror("allocation failure 1 in si16matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
uint16** ui16matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    uint16 **m;
    
    // allocate pointers to rows
    m=(uint16 **) malloc((size_t)(nrow*sizeof(uint16*)));
    if (!m) nrerror("allocation failure 1 in ui16matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
sint32** si32matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    sint32 **m;
    
    // allocate pointers to rows
    m=(sint32 **) malloc((size_t)(nrow*sizeof(sint32*)));
    if (!m) nrerror("allocation failure 1 in si32matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
uint32** ui32matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    uint32 **m;
    
    // allocate pointers to rows
    m=(uint32 **) malloc((size_t)(nrow*sizeof(uint32*)));
    if (!m) nrerror("allocation failure 1 in ui32matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
sint64** si64matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    sint64 **m;
    
    // allocate pointers to rows
    m=(sint64 **) malloc((size_t)(nrow*sizeof(sint64*)));
    if (!m) nrerror("allocation failure 1 in si32matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
uint64** ui64matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    uint64 **m;
    
    // allocate pointers to rows
    m=(uint64 **) malloc((size_t)(nrow*sizeof(uint64*)));
    if (!m) nrerror("allocation failure 1 in ui32matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
float32** f32matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    float32 **m;
    
    // allocate pointers to rows
    m=(float32 **) malloc((size_t)(nrow*sizeof(float32*)));
    if (!m) nrerror("allocation failure 1 in f32matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
float64** matrix_f64map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    float64 **m;
    
    // allocate pointers to rows
    m=(float64 **) malloc((size_t)(nrow*sizeof(float64*)));
    if (!m) nrerror("allocation failure 1 in matrix_f64map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* --------------------------------------------------------------------- */
rgb8** rgb8matrix_map(long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    rgb8 **m;
    
    // allocate pointers to rows
    m=(rgb8**) malloc((size_t)(nrow*sizeof(rgb8*)));
    if (!m) nrerror("allocation failure 1 in rgb8matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------- */
rgbx8** rgbx8matrix_map(long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------- */
{
    long nrow=nrh-nrl+1;
    rgbx8 **m;
    
    // allocate pointers to rows
    m=(rgbx8**) malloc((size_t)(nrow*sizeof(rgbx8*)));
    if (!m) nrerror("allocation failure 1 in rgbx8matrix_map()");
    m -= nrl;
    
    // return pointer to array of pointers to rows
    return m;
}
/* --------------------------------------------------------------------------------------------------------------------- */
sint8** si8matrix_map_1D_pitch(sint8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    
    // map rows and set pointers to them
    m[nrl]= (sint8*) data_1D;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i] = m[i-1] + pitch;
    
    // return pointer to array of pointers to rows
    return m;
}
/* --------------------------------------------------------------------------------------------------------------------- */
uint8** ui8matrix_map_1D_pitch(uint8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    
    // map rows and set pointers to them
    m[nrl]= (uint8*) data_1D;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i] = m[i-1] + pitch;
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
sint16** si16matrix_map_1D_pitch(sint16 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (sint16*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (sint16*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
uint16** ui16matrix_map_1D_pitch(uint16 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (uint16*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (uint16*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
sint32** si32matrix_map_1D_pitch(sint32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (sint32*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (sint32*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
uint32** ui32matrix_map_1D_pitch(uint32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (uint32*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (uint32*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
sint64** si64matrix_map_1D_pitch(sint64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (sint64*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (sint64*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
uint64** ui64matrix_map_1D_pitch(uint64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (uint64*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (uint64*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ---------------------------------------------------------------------------------------------------------------------- */
float32** f32matrix_map_1D_pitch(float32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (float32*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (float32*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ---------------------------------------------------------------------------------------------------------------------- */
float64** f64matrix_map_1D_pitch(float64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (float64*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (float64*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* -------------------------------------------------------------------------------------------------------------------- */
rgb8** rgb8matrix_map_1D_pitch(rgb8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* -------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (rgb8*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (rgb8*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ---------------------------------------------------------------------------------------------------------------------- */
rgbx8** rgbx8matrix_map_1D_pitch(rgbx8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *p; // must be 8-bit pointer
    
    // map rows and set pointers to them
    m[nrl]= (rgbx8*) data_1D;
    m[nrl] -= ncl;
    
    //for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1] + pitch;
    p = (uint8*) m[nrl];
    for(i=nrl+1;i<=nrh;i++) {
        p += pitch;
        m[i] = (rgbx8*) p;
    }
    
    // return pointer to array of pointers to rows
    return m;
}
/* ---------------------------------------------------------------------------------------------------------------------- */
sint8** si8matrix_remap_1D_pitch(sint8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return si8matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ---------------------------------------------------------------------------------------------------------------------- */
uint8** ui8matrix_remap_1D_pitch(uint8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return ui8matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ---------------------------------------------------------------------------------------------------------------------- */
sint16** si16matrix_remap_1D_pitch(sint16 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return si16matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ---------------------------------------------------------------------------------------------------------------------- */
uint16** ui16matrix_remap_1D_pitch(uint16 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return ui16matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ---------------------------------------------------------------------------------------------------------------------- */
sint32** si32matrix_remap_1D_pitch(sint32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return si32matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ---------------------------------------------------------------------------------------------------------------------- */
uint32** ui32matrix_remap_1D_pitch(uint32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return ui32matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* --------------------------------------------------------------------------------------------------------------------------- */
float32** f32matrix_remap_1D_pitch(float32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* --------------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return f32matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* --------------------------------------------------------------------------------------------------------------------------- */
float64** f64matrix_remap_1D_pitch(float64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* --------------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return f64matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* --------------------------------------------------------------------------------------------------------------------- */
rgb8** rgb8matrix_remap_1D_pitch(rgb8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return rgb8matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/* ----------------------------------------------------------------------------------------------------------------------- */
rgbx8** rgbx8matrix_remap_1D_pitch(rgbx8 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    m[nrl] += ncl;
    return rgbx8matrix_map_1D_pitch(m, nrl, nrh, ncl, nch, data_1D, pitch);   
}
/*
 * ---------------
 * free_matrix_map
 * ---------------
 */
/* ---------------------------------------------------------------------------------- */
void free_si8matrix_map(sint8 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG)(m+nrl));
}
/* ---------------------------------------------------------------------------------- */
void free_ui8matrix_map(uint8 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_si16matrix_map(sint16 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_ui16matrix_map(uint16 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_si32matrix_map(sint32 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_ui32matrix_map(uint32 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_si64matrix_map(sint64 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_ui64matrix_map(uint64 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}
/* ---------------------------------------------------------------------------------- */
void free_rgb8matrix_map(rgb8 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    free((FREE_ARG)(m+nrl));
}
/* ------------------------------------------------------------------------------------ */
void free_rgbx8matrix_map(rgbx8 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    free((FREE_ARG)(m+nrl));
}

