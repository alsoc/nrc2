/* ----------------- */
/* --- nrbool1.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_BOOL1_H_
#define _NR_BOOL1_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrbool1.h")
#endif

/* ========================= */
/* === Logical operation === */
/* ========================= */

/* ----------- */
/* --- Not --- */
/* ----------- */
/* Y = ! Y */
void not_bvector    (byte   *X, long ncl, long nch, byte   *Y);
void not_si8vector  (sint8  *X, long ncl, long nch, sint8  *Y);
void not_ui8vector  (uint8  *X, long ncl, long nch, uint8  *Y);
void not_si16vector (sint16 *X, long ncl, long nch, sint16 *Y);
void not_ui16vector (uint16 *X, long ncl, long nch, uint16 *Y);
void not_si32vector (sint32 *X, long ncl, long nch, sint32 *Y);
void not_ui32vector (uint32 *X, long ncl, long nch, uint32 *Y);
void not_si64vector (sint64 *X, long ncl, long nch, sint64 *Y);
void not_ui64vector (uint64 *X, long ncl, long nch, uint64 *Y);
void not_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   *Y);
void not_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  *Y);

/* ---------- */
/* --- Or --- */
/* ---------- */
/* Z = X | Y */

void or_bvector    (byte   *X, long ncl, long nch, byte   *Y, byte    *Z);
void or_si8vector  (sint8  *X, long ncl, long nch, sint8  *Y, sint8   *Z);
void or_ui8vector  (uint8  *X, long ncl, long nch, uint8  *Y, uint8   *Z);
void or_si16vector (sint16 *X, long ncl, long nch, sint16 *Y, sint16  *Z);
void or_ui16vector (uint16 *X, long ncl, long nch, uint16 *Y, uint16  *Z);
void or_si32vector (sint32 *X, long ncl, long nch, sint32 *Y, sint32  *Z);
void or_ui32vector (uint32 *X, long ncl, long nch, uint32 *Y, uint32  *Z);
void or_si64vector (sint64 *X, long ncl, long nch, sint64 *Y, sint64  *Z);
void or_ui64vector (uint64 *X, long ncl, long nch, uint64 *Y, uint64  *Z);
void or_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   *Y, rgb8    *Z);
void or_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  *Y, rgbx8   *Z);

void orc_bvector    (byte   *X, long ncl, long nch, byte   y, byte    *Z);
void orc_si8vector  (sint8  *X, long ncl, long nch, sint8  y, sint8   *Z);
void orc_ui8vector  (uint8  *X, long ncl, long nch, uint8  y, uint8   *Z);
void orc_si16vector (sint16 *X, long ncl, long nch, sint16 y, sint16  *Z);
void orc_ui16vector (uint16 *X, long ncl, long nch, uint16 y, uint16  *Z);
void orc_si32vector (sint32 *X, long ncl, long nch, sint32 y, sint32  *Z);
void orc_ui32vector (uint32 *X, long ncl, long nch, uint32 y, uint32  *Z);
void orc_si64vector (sint64 *X, long ncl, long nch, sint64 y, sint64  *Z);
void orc_ui64vector (uint64 *X, long ncl, long nch, uint64 y, uint64  *Z);
void orc_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   y, rgb8    *Z);
void orc_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  y, rgbx8   *Z);

/* ----------- */
/* --- Xor --- */
/* ----------- */
/* Z = X ^ Y */

void xor_bvector    (byte   *X, long ncl, long nch, byte   *Y, byte    *Z);
void xor_si8vector  (sint8  *X, long ncl, long nch, sint8  *Y, sint8   *Z);
void xor_ui8vector  (uint8  *X, long ncl, long nch, uint8  *Y, uint8   *Z);
void xor_si16vector (sint16 *X, long ncl, long nch, sint16 *Y, sint16  *Z);
void xor_ui16vector (uint16 *X, long ncl, long nch, uint16 *Y, uint16  *Z);
void xor_si32vector (sint32 *X, long ncl, long nch, sint32 *Y, sint32  *Z);
void xor_ui32vector (uint32 *X, long ncl, long nch, uint32 *Y, uint32  *Z);
void xor_si64vector (sint64 *X, long ncl, long nch, sint64 *Y, sint64  *Z);
void xor_ui64vector (uint64 *X, long ncl, long nch, uint64 *Y, uint64  *Z);
void xor_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   *Y, rgb8    *Z);
void xor_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  *Y, rgbx8   *Z);

void xorc_bvector    (byte   *X, long ncl, long nch, byte   y, byte    *Z);
void xorc_si8vector  (sint8  *X, long ncl, long nch, sint8  y, sint8   *Z);
void xorc_ui8vector  (uint8  *X, long ncl, long nch, uint8  y, uint8   *Z);
void xorc_si16vector (sint16 *X, long ncl, long nch, sint16 y, sint16  *Z);
void xorc_ui16vector (uint16 *X, long ncl, long nch, uint16 y, uint16  *Z);
void xorc_si32vector (sint32 *X, long ncl, long nch, sint32 y, sint32  *Z);
void xorc_ui32vector (uint32 *X, long ncl, long nch, uint32 y, uint32  *Z);
void xorc_si64vector (sint64 *X, long ncl, long nch, sint64 y, sint64  *Z);
void xorc_ui64vector (uint64 *X, long ncl, long nch, uint64 y, uint64  *Z);
void xorc_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   y, rgb8    *Z);
void xorc_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  y, rgbx8   *Z);

/* ----------- */
/* --- And --- */
/* ----------- */
/* Z = X & Y */

void and_bvector    (byte   *X, long ncl, long nch, byte   *Y, byte    *Z);
void and_si8vector  (sint8  *X, long ncl, long nch, sint8  *Y, sint8   *Z);
void and_ui8vector  (uint8  *X, long ncl, long nch, uint8  *Y, uint8   *Z);
void and_si16vector (sint16 *X, long ncl, long nch, sint16 *Y, sint16  *Z);
void and_ui16vector (uint16 *X, long ncl, long nch, uint16 *Y, uint16  *Z);
void and_si32vector (sint32 *X, long ncl, long nch, sint32 *Y, sint32  *Z);
void and_ui32vector (uint32 *X, long ncl, long nch, uint32 *Y, uint32  *Z);
void and_si64vector (sint64 *X, long ncl, long nch, sint64 *Y, sint64  *Z);
void and_ui64vector (uint64 *X, long ncl, long nch, uint64 *Y, uint64  *Z);
void and_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   *Y, rgb8    *Z);
void and_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  *Y, rgbx8   *Z);

void andc_bvector    (byte   *X, long ncl, long nch, byte   y, byte    *Z);
void andc_si8vector  (sint8  *X, long ncl, long nch, sint8  y, sint8   *Z);
void andc_ui8vector  (uint8  *X, long ncl, long nch, uint8  y, uint8   *Z);
void andc_si16vector (sint16 *X, long ncl, long nch, sint16 y, sint16  *Z);
void andc_ui16vector (uint16 *X, long ncl, long nch, uint16 y, uint16  *Z);
void andc_si32vector (sint32 *X, long ncl, long nch, sint32 y, sint32  *Z);
void andc_ui32vector (uint32 *X, long ncl, long nch, uint32 y, uint32  *Z);
void andc_si64vector (sint64 *X, long ncl, long nch, sint64 y, sint64  *Z);
void andc_ui64vector (uint64 *X, long ncl, long nch, uint64 y, uint64  *Z);
void andc_rgb8vector (rgb8   *X, long ncl, long nch, rgb8   y, rgb8    *Z);
void andc_rgbx8vector(rgbx8  *X, long ncl, long nch, rgbx8  y, rgbx8   *Z);


#ifdef __cplusplus
}
#endif

#endif // _NR_BOOL1_H_
