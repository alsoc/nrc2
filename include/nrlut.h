/* ------------- */
/* --- nrlut --- */
/* ------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
* Univ Paris Sud XI, CNRS
*/

#ifndef _NRLUT_H_
#define _NRLUT_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
#pragma message("- include nrlut.h")
#endif


void init_blut   (byte   *v, int nl, int nh, int n0, int n1, byte   k);
void init_i8lut  (int8   *v, int nl, int nh, int n0, int n1, int8   k);
void init_i16lut (int16  *v, int nl, int nh, int n0, int n1, int16  k);
void init_i32lut (int32  *v, int nl, int nh, int n0, int n1, int32  k);
void init_ui16lut(uint16 *v, int nl, int nh, int n0, int n1, uint16 k);
void init_rgb8lut(rgb8   *v, int nl, int nh, int n0, int n1, rgb8   k);

void lut_bmatrix   (byte    **S, long nrl, long nrh, long ncl, long nch, byte    *L, byte    **D);
void lut_ui8matrix (uint8   **S, long nrl, long nrh, long ncl, long nch, uint8   *L, uint8   **D);
void lut_si8matrix (sint8   **S, long nrl, long nrh, long ncl, long nch, sint8   *L, sint8   **D);
void lut_ui16matrix(uint16  **S, long nrl, long nrh, long ncl, long nch, uint16  *L, uint16  **D);
void lut_si16matrix(sint16  **S, long nrl, long nrh, long ncl, long nch, sint16  *L, sint16  **D);
void lut_ui32matrix(uint32  **S, long nrl, long nrh, long ncl, long nch, uint32  *L, uint32  **D);
void lut_si32matrix(sint32  **S, long nrl, long nrh, long ncl, long nch, sint32  *L, sint32  **D);
void lut_ui16matrix(uint16  **S, long nrl, long nrh, long ncl, long nch, uint16  *L, uint16  **D);
void lut_rgb8matrix(rgb8    **S, long nrl, long nrh, long ncl, long nch, rgb8    *L, rgb8    **D);

void lut_si16matrix_si8matrix(sint16 **S, long nrl, long nrh, long ncl, long nch, sint8 *L, sint8 **D);
void lut_ui16matrix_ui8matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, uint8 *L, uint8 **D);
void lut_si32matrix_si16matrix(sint32 **S, long nrl, long nrh, long ncl, long nch, sint16 *L, sint16 **D);
void lut_ui32matrix_ui16matrix(uint32 **S, long nrl, long nrh, long ncl, long nch, uint16 *L, uint16 **D);
    
void histogram_bmatrix   (byte   **S, long nrl, long nrh, long ncl, long nch, int32 *H);
void histogram_ui16matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, int32 *H);
void histogram_rgb8matrix(rgb8   **S, long nrl, long nrh, long ncl, long nch, rgb32 *H);

void histogram_bmatrix   (byte   **S, long nrl, long nrh, long ncl, long nch, int32 *H);
void histogram_ui16matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, int32 *H);
void histogram_rgb8matrix(rgb8   **S, long nrl, long nrh, long ncl, long nch, rgb32 *H);

#ifdef __cplusplus
}
#endif

#endif /* _NRLUT_H_ */
