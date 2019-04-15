/* ------------------ */
/* --- nralloc1.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef __NRALLOC1_H__
#define __NRALLOC1_H__

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nralloc1.h ***")
#endif


//NR_END est maintenant defini dans nrutil.h

#define NR_END 0
#define FREE_ARG char*

//long nr_end = NR_END;

//void nrerror(char error_text[]);
//void nrerror(char *format, ...);
//void Error  (char *format, ...);
//void Warning(char *format, ...);

/*
 * --------------
 * --- vector ---
 * --------------
 */

// do: allocate a float vector with subscript range v[nl..nh]

//byte*      bvector(long nl, long nh);
sint8*   si8vector(long nl, long nh);
uint8*   ui8vector(long nl, long nh);
sint16* si16vector(long nl, long nh);
uint16* ui16vector(long nl, long nh);
sint32* si32vector(long nl, long nh);
uint32* ui32vector(long nl, long nh);
sint64* si64vector(long nl, long nh);
uint64* ui64vector(long nl, long nh);

float32* f32vector(long nl, long nh);
float64* f64vector(long nl, long nh);

rgb8*   rgb8vector(long nl, long nh);
rgbx8* rgbx8vector(long nl, long nh);
rgb32* rgb32vector(long nl, long nh);

void**     vvector(long nl, long nh);

/*
 * ---------------
 * --- vector0 ---
 * ---------------
 */

// do: allocate a vector and set it to 0

//byte*       bvector0(long nl, long nh);
sint8*    si8vector0(long nl, long nh);
uint8*    ui8vector0(long nl, long nh);
sint16*  si16vector0(long nl, long nh);
uint16*  ui16vector0(long nl, long nh);
sint32*  si32vector0(long nl, long nh);
uint32*  ui32vector0(long nl, long nh);

float32* f32vector0(long nl, long nh);
float64* f64vector0(long nl, long nh);

rgb8*   rgb8vector0(long nl, long nh);
rgbx8* rgbx8vector0(long nl, long nh);
rgb32* rgb32vector0(long nl, long nh);

void**     vvector0(long nl, long nh);
/*
 * ----------------------
 * --- realloc_vector ---
 * ----------------------
 */

// realloc a vector to [nl..nh]
void**  realloc_vvector(void   **v, long nl, long nh);

/*
 * -------------------
 * --- free_vector ---
 * -------------------
 */

//void free_bvector    (byte    *v, long nl, long nh);
void free_si8vector  (sint8   *v, long nl, long nh);
void free_ui8vector  (uint8   *v, long nl, long nh);
void free_si16vector (sint16  *v, long nl, long nh);
void free_ui16vector (uint16  *v, long nl, long nh);
void free_si32vector (sint32  *v, long nl, long nh);
void free_ui32vector (uint32  *v, long nl, long nh);
void free_si64vector (sint64  *v, long nl, long nh);
void free_ui64vector (uint64  *v, long nl, long nh);

void free_f32vector  (float32 *v, long nl, long nh);
void free_f64vector  (float64 *v, long nl, long nh);

void free_rgb8vector (rgb8    *v, long nl, long nh);
void free_rgbx8vector(rgbx8   *v, long nl, long nh);
void free_rgb32vector(rgb32   *v, long nl, long nh);

void free_vvector    (void   **v, long nl, long nh);

#ifdef __cplusplus
}
#endif

#endif /* __NRALLOC1_H__ */
