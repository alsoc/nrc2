/* ----------------- */
/* --- nrwrap1.c --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
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

#include "nrwrap1.h"

/* --------------- */
/* --- Mapping --- */
/* --------------- */

/* -------------------------------------------- */
sint8* si8vector_map(int nl, int nh)
/* -------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* -------------------------------------------- */
uint8* ui8vector_map(int nl, int nh)
/* -------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
sint16* si16vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
uint16* ui16vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
sint32* si32vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
uint32* ui32vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
float32* f32vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
float64* f64vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* -------------------------------------------- */
rgb8* rgb8vector_map(int nl, int nh)
/* -------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ---------------------------------------------- */
rgbx8* rgbx8vector_map(int nl, int nh)
/* ---------------------------------------------- */
{
    // nothing to do: no alloc required...
    return NULL;
}
/* ------------------ */
/* --- Mapping 1D --- */
/* ------------------ */
/* ----------------------------------------------------------------------------------------- */
sint8* si8vector_map_1D_pitch(sint8 *v, int nl, int nh, void *data_1D, int pitch)
/* ----------------------------------------------------------------------------------------- */
{
    v = (sint8*) data_1D;
    v -= nl;
    return v;
}
/* ----------------------------------------------------------------------------------------- */
uint8* ui8vector_map_1D_pitch(uint8 *v, int nl, int nh, void *data_1D, int pitch)
/* ----------------------------------------------------------------------------------------- */
{
    v = (uint8*) data_1D;
    v -= nl;
    return v;
}
/* -------------------------------------------------------------------------------------------- */
uint16* ui16vector_map_1D_pitch(uint16 *v, int nl, int nh, void *data_1D, int pitch)
/* -------------------------------------------------------------------------------------------- */
{
    v = (uint16*) data_1D;
    v -= nl;
    return v;
}
/* -------------------------------------------------------------------------------------------- */
sint16* si16vector_map_1D_pitch(sint16 *v, int nl, int nh, void *data_1D, int pitch)
/* -------------------------------------------------------------------------------------------- */
{
    v = (sint16*) data_1D;
    v -= nl;
    return v;
}
/* -------------------------------------------------------------------------------------------- */
uint32* ui32vector_map_1D_pitch(uint32 *v, int nl, int nh, void *data_1D, int pitch)
/* -------------------------------------------------------------------------------------------- */
{
    v = (uint32*) data_1D;
    v -= nl;
    return v;
}
/* -------------------------------------------------------------------------------------------- */
sint32* si32vector_map_1D_pitch(sint32 *v, int nl, int nh, void *data_1D, int pitch)
/* -------------------------------------------------------------------------------------------- */
{
    v = (sint32*) data_1D;
    v -= nl;
    return v;
}
/* --------------------------------------------------------------------------------------------- */
float32* f32vector_map_1D_pitch(float32 *v, int nl, int nh, void *data_1D, int pitch)
/* --------------------------------------------------------------------------------------------- */
{
    v = (float32*) data_1D;
    v -= nl;
    return v;
}
/* --------------------------------------------------------------------------------------------- */
float64* f64vector_map_1D_pitch(float64 *v, int nl, int nh, void *data_1D, int pitch)
/* --------------------------------------------------------------------------------------------- */
{
    v = (float64*) data_1D;
    v -= nl;
    return v;
}
/* ---------------------------------------------------------------------------------------- */
rgb8* rgb8vector_map_1D_pitch(rgb8 *v, int nl, int nh, void *data_1D, int pitch)
/* ---------------------------------------------------------------------------------------- */
{
    v = (rgb8*) data_1D;
    v -= nl;
    return v;
}
/* ------------------------------------------------------------------------------------------- */
rgbx8* rgbx8vector_map_1D_pitch(rgbx8 *v, int nl, int nh, void *data_1D, int pitch)
/* ------------------------------------------------------------------------------------------- */
{
    v = (rgbx8*) data_1D;
    v -= nl;
    return v;
}

