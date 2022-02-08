/* ----------------- */
/* --- nrwrap1.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
* 
*/


#ifndef _NR_WRAP1_H_
#define _NR_WRAP1_H_

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrwrap1.h ***")
#endif

// ------------------------------- //
// --- vector_map (allocation) --- //
// ------------------------------- //

// map allocation = nothing to do in 1D

sint8*    si8vector_map(int nl, int nh);
uint8*    ui8vector_map(int nl, int nh);
sint16*  si16vector_map(int nl, int nh);
uint16*  ui16vector_map(int nl, int nh);
sint32*  si32vector_map(int nl, int nh);
uint32*  ui32vector_map(int nl, int nh);

float32*  f32vector_map(int nl, int nh);
float64*  f64vector_map(int nl, int nh);

rgb8*    rgb8vector_map(int nl, int nh);
rgbx8*  rgbx8vector_map(int nl, int nh);

// ------------------ //
// --- Mapping 1D --- //
// ------------------ //

sint8*   si8vector_map_1D_pitch(sint8   *v, int nl, int nh, void *data_1D, int pitch);
uint8*   ui8vector_map_1D_pitch(uint8   *v, int nl, int nh, void *data_1D, int pitch);
sint16* si16vector_map_1D_pitch(sint16  *v, int nl, int nh, void *data_1D, int pitch);
uint16* ui16vector_map_1D_pitch(uint16  *v, int nl, int nh, void *data_1D, int pitch);
sint32* si32vector_map_1D_pitch(sint32  *v, int nl, int nh, void *data_1D, int pitch);
uint32* ui32vector_map_1D_pitch(uint32  *v, int nl, int nh, void *data_1D, int pitch);

float32* f32vector_map_1D_pitch(float32 *v, int nl, int nh, void *data_1D, int pitch);
float64* f64vector_map_1D_pitch(float64 *v, int nl, int nh, void *data_1D, int pitch);

rgb8*   rgb8vector_map_1D_pitch(rgb8    *v, int nl, int nh, void *data_1D, int pitch);
rgbx8* rgbx8vector_map_1D_pitch(rgbx8   *v, int nl, int nh, void *data_1D, int pitch);

#ifdef __cplusplus
}
#endif

#endif // _NR_WRAP1_H_
