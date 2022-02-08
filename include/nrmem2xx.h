
/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRMEM2XX_H_
#define _NRMEM2XX_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

/* ----------------------- */
/* -- Rotation and Flip -- */
/* ----------------------- */
// no check performed on size, S and D must be different
void lrotate_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch, byte   **D);
void lrotate_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch, short  **D);
void lrotate_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D);
void lrotate_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch, sint16 **D);
void lrotate_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D);
void lrotate_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch, int    **D);
void lrotate_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch, uint   **D);
void lrotate_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch, int32  **D);
void lrotate_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D);
void lrotate_matrix    (float  **S, long nrl,long nrh,long ncl, long nch, float  **D);
void lrotate_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch, double **D);
void lrotate_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch, rgb8   **D);

void rrotate_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch, byte   **D);
void rrotate_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch, short  **D);
void rrotate_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D);
void rrotate_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch, sint16 **D);
void rrotate_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D);
void rrotate_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch, int    **D);
void rrotate_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch, uint   **D);
void rrotate_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch, int32  **D);
void rrotate_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D);
void rrotate_matrix    (float  **S, long nrl,long nrh,long ncl, long nch, float  **D);
void rrotate_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch, double **D);
void rrotate_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch, rgb8   **D);

void lrotate1_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_matrix    (float  **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch);
void lrotate1_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch);

void rrotate1_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_matrix    (float  **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch);
void rrotate1_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch);

void hflip_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch, byte   **D);
void hflip_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch, short  **D);
void hflip_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D);
void hflip_i16matrix (int16  **S, long nrl,long nrh,long ncl, long nch, int16  **D);
void hflip_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D);
void hflip_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch, int    **D);
void hflip_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch, uint   **D);
void hflip_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch, int32  **D);
void hflip_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D);
void hflip_matrix    (float  **S, long nrl,long nrh,long ncl, long nch, float  **D);
void hflip_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch, double **D);
void hflip_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch, rgb8   **D);

void vflip_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch, byte   **D);
void vflip_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch, short  **D);
void vflip_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D);
void vflip_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch, int16  **D);
void vflip_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D);
void vflip_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch, int    **D);
void vflip_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch, uint   **D);
void vflip_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch, int32  **D);
void vflip_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D);
void vflip_matrix    (float  **S, long nrl,long nrh,long ncl, long nch, float  **D);
void vflip_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch, double **D);
void vflip_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch, rgb8   **D);

void hflip1_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch);
void hflip1_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch);
void hflip1_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch);
void hflip1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch);
void hflip1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch);
void hflip1_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch);
void hflip1_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch);
void hflip1_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch);
void hflip1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch);
void hflip1_matrix    (float  **S, long nrl,long nrh,long ncl, long nch);
void hflip1_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch);
void hflip1_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch);

void vflip1_bmatrix   (byte   **S, long nrl,long nrh,long ncl, long nch);
void vflip1_smatrix   (short  **S, long nrl,long nrh,long ncl, long nch);
void vflip1_usmatrix  (ushort **S, long nrl,long nrh,long ncl, long nch);
void vflip1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch);
void vflip1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch);
void vflip1_imatrix   (int    **S, long nrl,long nrh,long ncl, long nch);
void vflip1_uimatrix  (uint   **S, long nrl,long nrh,long ncl, long nch);
void vflip1_i32matrix (int32  **S, long nrl,long nrh,long ncl, long nch);
void vflip1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch);
void vflip1_matrix    (float  **S, long nrl,long nrh,long ncl, long nch);
void vflip1_dmatrix   (double **S, long nrl,long nrh,long ncl, long nch);
void vflip1_rgb8matrix(rgb8   **S, long nrl,long nrh,long ncl, long nch);

#ifdef __cplusplus
}
#endif

#else
//#pragma message(" Warning : attemp to re-include nrmem2x.h")
#endif /* _NRMEM2XX_H_ */
