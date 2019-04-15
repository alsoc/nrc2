/* ---------------- */
/* --- nrset3.h --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_SET3_H_
#define _NR_SET3_H_

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrset3.h ***")
#endif

// -----------------
// --- zero_cube ---
// -----------------

void zero_si8cube  (sint8   ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_ui8cube  (uint8   ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_si16cube (sint16  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_ui16cube (uint16  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_si32cube (sint32  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_ui32cube (uint32  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_si64cube (sint64  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_ui64cube (uint64  ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_f32cube  (float32 ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_f64cube  (float64 ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_rgb8cube (rgb8    ***c, int k0, int k1, int i0, int i1, int j0, int j1);
void zero_rgbx8cube(rgbx8   ***c, int k0, int k1, int i0, int i1, int j0, int j1);

// ----------------------
// --- set_cube_param ---
// ----------------------

void set_si8cube_param  (sint8   ***c, int k0, int k1, int i0, int i1, int j0, int j1, sint8   x, sint8   xstep, sint8   ystep, sint8   zstep);
void set_ui8cube_param  (uint8   ***c, int k0, int k1, int i0, int i1, int j0, int j1, uint8   x, uint8   xstep, uint8   ystep, uint8   zstep);
void set_si16cube_param (sint16  ***c, int k0, int k1, int i0, int i1, int j0, int j1, sint16  x, sint16  xstep, sint16  ystep, sint16  zstep);
void set_ui16cube_param (uint16  ***c, int k0, int k1, int i0, int i1, int j0, int j1, uint16  x, uint16  xstep, uint16  ystep, uint16  zstep);
void set_si32cube_param (sint32  ***c, int k0, int k1, int i0, int i1, int j0, int j1, sint32  x, sint32  xstep, sint32  ystep, sint32  zstep);
void set_ui32cube_param (uint32  ***c, int k0, int k1, int i0, int i1, int j0, int j1, uint32  x, uint32  xstep, uint32  ystep, uint32  zstep);
void set_si64cube_param (sint64  ***c, int k0, int k1, int i0, int i1, int j0, int j1, sint64  x, sint64  xstep, sint64  ystep, sint64  zstep);
void set_ui64cube_param (uint64  ***c, int k0, int k1, int i0, int i1, int j0, int j1, uint64  x, uint64  xstep, uint64  ystep, uint64  zstep);
void set_f32cube_param  (float32 ***c, int k0, int k1, int i0, int i1, int j0, int j1, float32 x, float32 xstep, float32 ystep, float32 zstep);
void set_f64cube_param  (float64 ***c, int k0, int k1, int i0, int i1, int j0, int j1, float64 x, float64 xstep, float64 ystep, float64 zstep);
void set_rgb8cube_param (rgb8    ***c, int k0, int k1, int i0, int i1, int j0, int j1, rgb8    x, rgb8    xstep, rgb8    ystep, rgb8    zstep);
void set_rgbx8cube_param(rgbx8   ***c, int k0, int k1, int i0, int i1, int j0, int j1, rgbx8   x, rgbx8   xstep, rgbx8   ystep, rgbx8   zstep);

#ifdef __cplusplus
}
#endif

#endif // _NR_SET3_H_
