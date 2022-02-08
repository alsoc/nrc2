/* ----------------- */
/* --- nrsort1.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRSORT1_H_
#define _NRSORT1_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrsort1.h")
#endif

void extractnz_boundaries_ui8vector (uint8   *v, long nl, long nh, long *nlnz, long *nhnz);
void extractnz_boundaries_si16vector(sint16  *v, long nl, long nh, long *nlnz, long *nhnz);
void extractnz_boundaries_ui16vector(uint16  *v, long nl, long nh, long *nlnz, long *nhnz);
void extractnz_boundaries_si32vector(sint32  *v, long nl, long nh, long *nlnz, long *nhnz);
void extractnz_boundaries_ui32vector(uint32  *v, long nl, long nh, long *nlnz, long *nhnz);
void extractnz_boundaries_f32vector (float32 *v, long nl, long nh, long *nlnz, long *nhnz, float32 epsillon);
void extractnz_boundaries_f64vector (float64 *v, long nl, long nh, long *nlnz, long *nhnz, float64 epsillon);
    
void sort_index_dvector_selection     (double *key, long nl, long nh, int *index);

void sort_index_ivector_selection_min (int    *key, long nl, long nh, int *index);
void sort_index_ivector_selection_max (int    *key, long nl, long nh, int *index);
void sort_index_ivector_selection_kmin(int    *key, long nl, long nh, int *index, int k);
void sort_index_ivector_selection_kmax(int    *key, long nl, long nh, int *index, int k);

void sort_index_vector_selection_min (float    *key, long nl, long nh, int *index);
void sort_index_vector_selection_max (float    *key, long nl, long nh, int *index);
void sort_index_vector_selection_kmin(float    *key, long nl, long nh, int *index, int k);
void sort_index_vector_selection_kmax(float    *key, long nl, long nh, int *index, int k);

/*
 * ATTENTION le tableau index DOIT etre initialise (et alloue)
 */

void sort_bvector_selection_min(byte *v, long nl, long nh);

/* ======================================================================== */
/* == Select = order/rank filter = median ================================= */
/* ======================================================================== */

byte select_bvector   (byte *v, long nl, long nh, long k);
rgb8 select_rgb8vector(rgb8 *v, long nl, long nh, long k);

#ifdef __cplusplus
}
#endif

#endif /* _NRSORT1_H_ */
