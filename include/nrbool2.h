/* ----------------- */
/* --- nrbool2.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NR_BOOL2_H_
#define _NR_BOOL2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrbool2.h")
#endif

int cmpeq_bmatrix(byte **X, long nrl,long nrh,long ncl, long nch, byte **Y);
int cmpeq_si8matrix(sint8 **X, long nrl,long nrh,long ncl, long nch, sint8 **Y);
int cmpeq_ui8matrix(uint8 **X, long nrl,long nrh,long ncl, long nch, uint8 **Y);
int cmpeq_si16matrix(sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y);
int cmpeq_ui16matrix(uint16 **X, long nrl, long nrh, long ncl, long nch, uint16 **Y);
int cmpeq_si32matrix(sint32 **X, long nrl, long nrh, long ncl, long nch, sint32 **Y);
int cmpeq_ui32matrix(uint32 **X, long nrl, long nrh, long ncl, long nch, uint32 **Y);


/*
 * -----------
 * --- Not ---
 * -----------
 */

void not_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   **Y);
void not_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  **Y);
void not_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  **Y);
void not_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y);
void not_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y);
void not_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 **Y);
void not_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 **Y);
void not_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 **Y);
void not_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 **Y);
void not_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   **Y);
void not_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  **Y);

/*
 * ----------
 * --- Or ---
 * ----------
 */

void or_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   **Y, byte    **Z);
void or_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  **Y, sint8   **Z);
void or_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  **Y, uint8   **Z);
void or_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y, sint16  **Z);
void or_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y, uint16  **Z);
void or_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 **Y, sint32  **Z);
void or_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 **Y, uint32  **Z);
void or_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 **Y, sint64  **Z);
void or_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 **Y, uint64  **Z);
void or_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   **Y, rgb8    **Z);
void or_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  **Y, rgbx8   **Z);

void orc_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   y, byte    **Z);
void orc_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  y, sint8   **Z);
void orc_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  y, uint8   **Z);
void orc_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 y, sint16  **Z);
void orc_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 y, uint16  **Z);
void orc_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 y, sint32  **Z);
void orc_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 y, uint32  **Z);
void orc_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 y, sint64  **Z);
void orc_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 y, uint64  **Z);
void orc_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   y, rgb8    **Z);
void orc_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  y, rgbx8   **Z);

/*
 * -----------
 * --- Xor ---
 * -----------
 */

void xor_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   **Y, byte    **Z);
void xor_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  **Y, sint8   **Z);
void xor_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  **Y, uint8   **Z);
void xor_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y, sint16  **Z);
void xor_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y, uint16  **Z);
void xor_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 **Y, sint32  **Z);
void xor_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 **Y, uint32  **Z);
void xor_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 **Y, sint64  **Z);
void xor_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 **Y, uint64  **Z);
void xor_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   **Y, rgb8    **Z);
void xor_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  **Y, rgbx8   **Z);

void xorc_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   y, byte    **Z);
void xorc_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  y, sint8   **Z);
void xorc_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  y, uint8   **Z);
void xorc_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 y, sint16  **Z);
void xorc_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 y, uint16  **Z);
void xorc_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 y, sint32  **Z);
void xorc_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 y, uint32  **Z);
void xorc_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 y, sint64  **Z);
void xorc_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 y, uint64  **Z);
void xorc_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   y, rgb8    **Z);
void xorc_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  y, rgbx8   **Z);

/*
 * -----------
 * --- And ---
 * -----------
 */

void and_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   **Y, byte    **Z);
void and_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  **Y, sint8   **Z);
void and_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  **Y, uint8   **Z);
void and_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 **Y, sint16  **Z);
void and_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 **Y, uint16  **Z);
void and_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 **Y, sint32  **Z);
void and_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 **Y, uint32  **Z);
void and_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 **Y, sint64  **Z);
void and_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 **Y, uint64  **Z);
void and_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   **Y, rgb8    **Z);
void and_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  **Y, rgbx8   **Z);

void andc_bmatrix    (byte   **X, long nrl,long nrh,long ncl, long nch, byte   y, byte    **Z);
void andc_si8matrix  (sint8  **X, long nrl,long nrh,long ncl, long nch, sint8  y, sint8   **Z);
void andc_ui8matrix  (uint8  **X, long nrl,long nrh,long ncl, long nch, uint8  y, uint8   **Z);
void andc_si16matrix (sint16 **X, long nrl,long nrh,long ncl, long nch, sint16 y, sint16  **Z);
void andc_ui16matrix (uint16 **X, long nrl,long nrh,long ncl, long nch, uint16 y, uint16  **Z);
void andc_si32matrix (sint32 **X, long nrl,long nrh,long ncl, long nch, sint32 y, sint32  **Z);
void andc_ui32matrix (uint32 **X, long nrl,long nrh,long ncl, long nch, uint32 y, uint32  **Z);
void andc_si64matrix (sint64 **X, long nrl,long nrh,long ncl, long nch, sint64 y, sint64  **Z);
void andc_ui64matrix (uint64 **X, long nrl,long nrh,long ncl, long nch, uint64 y, uint64  **Z);
void andc_rgb8matrix (rgb8   **X, long nrl,long nrh,long ncl, long nch, rgb8   y, rgb8    **Z);
void andc_rgbx8matrix(rgbx8  **X, long nrl,long nrh,long ncl, long nch, rgbx8  y, rgbx8   **Z);

#ifdef __cplusplus
}
#endif

#endif // _NR_BOOL2_H_
