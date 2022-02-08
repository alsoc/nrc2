/* ------------------ */
/* --- nralloc2.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
* 
*/

/* 
 * 2002/06/11 ajout des fonctions endline
 */

#ifndef __NRALLOC2_H__
#define __NRALLOC2_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nralloc2.h ***")
#endif

/*
 * --------------
 * --- matrix ---
 * --------------
 */

sint8**     si8matrix(long nrl, long nrh, long ncl, long nch);
uint8**     ui8matrix(long nrl, long nrh, long ncl, long nch);
sint16**   si16matrix(long nrl, long nrh, long ncl, long nch);
uint16**   ui16matrix(long nrl, long nrh, long ncl, long nch);
sint32**   si32matrix(long nrl, long nrh, long ncl, long nch);
uint32**   ui32matrix(long nrl, long nrh, long ncl, long nch);
sint64**   si64matrix(long nrl, long nrh, long ncl, long nch);
uint64**   ui64matrix(long nrl, long nrh, long ncl, long nch);

float32**   f32matrix(long nrl, long nrh, long ncl, long nch);
float64**   f64matrix(long nrl, long nrh, long ncl, long nch);

complex32** c32matrix(long nrl, long nrh, long ncl, long nch);
complex64** c64matrix(long nrl, long nrh, long ncl, long nch);

rgb8**     rgb8matrix(long nrl, long nrh, long ncl, long nch);
rgbx8**   rgbx8matrix(long nrl, long nrh, long ncl, long nch);
//rgb32**)   rgb32matrix(long nrl, long nrh, long ncl, long nch);
//rgbx32**) rgbx32matrix(long nrl, long nrh, long ncl, long nch);

/*
 * ---------------
 * --- matrix0 ---
 * ---------------
 */

sint8**     si8matrix0(long nrl, long nrh, long ncl, long nch);
uint8**     ui8matrix0(long nrl, long nrh, long ncl, long nch);
sint16**   si16matrix0(long nrl, long nrh, long ncl, long nch);
uint16**   ui16matrix0(long nrl, long nrh, long ncl, long nch);
sint32**    i32matrix0(long nrl, long nrh, long ncl, long nch);
uint32**   ui32matrix0(long nrl, long nrh, long ncl, long nch);
sint64**   si64matrix0(long nrl, long nrh, long ncl, long nch);
uint64**   ui64matrix0(long nrl, long nrh, long ncl, long nch);
rgb8**     rgb8matrix0(long nrl, long nrh, long ncl, long nch);
rgbx8**   rgbx8matrix0(long nrl, long nrh, long ncl, long nch);
rgb32**   rgb32matrix0(long nrl, long nrh, long ncl, long nch);
rgbx32** rgbx32matrix0(long nrl, long nrh, long ncl, long nch);

float32**   f32matrix0(long nrl, long nrh, long ncl, long nch);
float64**   f64matrix0(long nrl, long nrh, long ncl, long nch);

/*
 * -------------------
 * --- free_matrix ---
 * -------------------
 */ 

void free_si8matrix  (sint8  **m, long nrl, long nrh, long ncl, long nch);
void free_ui8matrix  (uint8  **m, long nrl, long nrh, long ncl, long nch);
void free_si16matrix (sint16 **m, long nrl, long nrh, long ncl, long nch);
void free_ui16matrix (uint16 **m, long nrl, long nrh, long ncl, long nch);
void free_si32matrix (sint32 **m, long nrl, long nrh, long ncl, long nch);
void free_ui32matrix (uint32 **m, long nrl, long nrh, long ncl, long nch);
void free_si64matrix (sint64 **m, long nrl, long nrh, long ncl, long nch);
void free_ui64matrix (uint64 **m, long nrl, long nrh, long ncl, long nch);

void free_f32matrix (float32   **m, long nrl, long nrh, long ncl, long nch);
void free_f64matrix (float64   **m, long nrl, long nrh, long ncl, long nch);
void free_c32matrix (complex32 **m, long nrl, long nrh, long ncl, long nch);
void free_c64matrix (complex64 **m, long nrl, long nrh, long ncl, long nch);

void free_rgb8matrix  (rgb8   **m, long nrl, long nrh, long ncl, long nch);
void free_rgbx8matrix (rgbx8  **m, long nrl, long nrh, long ncl, long nch);
void free_rgb32matrix (rgb32  **m, long nrl, long nrh, long ncl, long nch);
void free_rgbx32matrix(rgbx32 **m, long nrl, long nrh, long ncl, long nch);

#ifdef __cplusplus
}
#endif

#endif /* __NRALLOC2_H__ */
