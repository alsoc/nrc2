/* ------------------- */
/* --- nrarith2x.h --- */
/* ------------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRARITH2X_H_
#define _NRARITH2X_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
#pragma message("- include nrarith2x.h")
#endif


    // Add conditionnel
void addc_bmatrix (byte   **src,long nrl,long nrh,long ncl, long nch, byte  cte, byte   **dst);
void addc_smatrix (sint16  **src,long nrl,long nrh,long ncl, long nch, short cte, sint16  **dst);
void addc_usmatrix(uint16 **src,long nrl,long nrh,long ncl, long nch, short cte, uint16 **dst);

void addandc_bmatrix    (byte   **src,long nrl,long nrh,long ncl, long nch, byte  cte, byte   **dst);
void addandc_si16matrix (sint16 **src,long nrl,long nrh,long ncl, long nch, short cte, sint16  **dst);
void addandc_ui16matrix (uint16 **src,long nrl,long nrh,long ncl, long nch, short cte, uint16 **dst);

void addcnz_bmatrix(byte  **src,long nrl,long nrh,long ncl, long nch, byte  cte, byte  **dst);

int) count_bmatrix(byte **m, long nrl,long nrh,long ncl, long nch);
/*
 * renvoie la somme des points de la matrice
 */

#ifdef __cplusplus
}
#endif

#endif /* _NRUTIL_H_ */
