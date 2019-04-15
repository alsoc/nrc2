/* ----------------- */
/* --- nrsort2.c --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
 */


#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h> // isdigit
#include <string.h> // memcpy
#include <math.h> // fabs
// #include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nrset1.h"
#include "nrset2.h"

#include "nrsort1.h"
#include "nrsort2.h"

/* ------------------------------------------------------------------------------------------------------ */
void extractnz_boundaries_ui8matrix(uint8 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz)
/* ------------------------------------------------------------------------------------------------------ */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_ui8vector(m[nrl], ncl, nch, &left, &right); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_ui8vector(m[i], ncl, nch, &a, &b);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* ------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_si16matrix(sint16 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz)
/* ------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_si16vector(m[nrl], ncl, nch, &left, &right); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_si16vector(m[i], ncl, nch, &a, &b);
        if(a < left)
            left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right)
            right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* --------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_ui16matrix(uint16 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz)
/* --------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_ui16vector(m[nrl], ncl, nch, &left, &right); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_ui16vector(m[i], ncl, nch, &a, &b);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* ------------------------------------------------------------------------------------------------------ */
void extractnz_boundaries_si32matrix (sint32 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz)
/* ------------------------------------------------------------------------------------------------------ */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_si32vector(m[nrl], ncl, nch, &left, &right); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_si32vector(m[i], ncl, nch, &a, &b);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* ------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_ui32matrix(uint32 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz)
/* ------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_ui32vector(m[nrl], ncl, nch, &left, &right); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_ui32vector(m[i], ncl, nch, &a, &b);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* ----------------------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f32matrix(float32 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz, float32 epsillon)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_f32vector(m[nrl], ncl, nch, &left, &right, epsillon); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_f32vector(m[i], ncl, nch, &a, &b, epsillon);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* ------------------------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f64matrix(float64 **m, long nrl,long nrh,long ncl, long nch, long *nclnz, long *nchnz, float64 epsillon)
/* ------------------------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_f64vector(m[nrl], ncl, nch, &left, &right, epsillon); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_f64vector(m[i], ncl, nch, &a, &b, epsillon);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}
/* --------------------------------------------------------------- */
void sort_si32matrix_selection2(sint32 **m, long nl, long nh)
/* --------------------------------------------------------------- */
/*
* sort an matrix of int with the selection algorithm
* the key is supposed to be in row 1
* the flag associated, in row 0
*/
{
	int i, j;
	sint32 x, min, pos, tmp;
	
	//display_imatrix(m, 0, 1, nl, nh, "%10d", "Before");
	
	for(i=nl; i<nh; i++) {
		min = m[1][i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = m[1][j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		m[1][pos] = m[1][i];
		m[1][i]   = min;
		
		tmp       = m[0][i];
		m[0][i]   = m[0][pos];
		m[0][pos] = tmp;
	}
	//display_imatrix(m, 0, 1, nl, nh, "%10d", "After");
}
/* ---------------------------------------------------------------------------------- */
void sort_si32matrix_leftpart_selection2(sint32 **m, long nl, long nh, long len)
/* ---------------------------------------------------------------------------------- */
/*
* sort an matrix of int with the selection algorithm
* the key is supposed to be in row 1
* the flag associated, in row 0
* the sort is performed only on the len first items
* for selecting the len first smallest values (for Tracking algo)
*/
{
	int i, j;
	sint32 x, min, pos, tmp;
	long ih = nl + len - 1;
	int *X, *F;
	
	//display_imatrix(m, 0, 1, nl, nh, "%10d", "Before");
	
	F = m[0];
	X = m[1];
	
	
	for(i=nl; i<=ih; i++) {
		min = X[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = X[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		X[pos] = X[i];
		X[i]   = min;
		
		tmp    = F[i];
		F[i]   = F[pos];
		F[pos] = tmp;
	}
}
/* ---------------------------------------------------------------- */
void sort_f64matrix_selection(float64 *m, long nl, long nh)
/* ---------------------------------------------------------------- */
{
	int i, j, pos;
	float64 x, min;
	
	for(i=nl; i<nh; i++) {
		min = m[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = m[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		m[pos] = m[i];
		m[i]   = min;
	}
}
/* ----------------------------------------------------------------------------------------------- */
void sort_si32matrix_selection(sint32 **m, long nrl, long nrh, long ncl, long nch, long nrow)
/* ----------------------------------------------------------------------------------------------- */
/*
* sort an matrix of int with the selection algorithm
* the key is supposed to be in row nrow
*/
{
	int i, j, k;
	sint32 x, min, pos, tmp;
	
	//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
	for(i=ncl; i<nch; i++) {
		min = m[nrow][i];
		pos = i;
		for(j=i+1; j<=nch; j++) {
			x = m[nrow][j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		
		// big swap
		for(k=nrl; k<=nrh; k++) {
			tmp = m[k][i];
			m[k][i] = m[k][pos];
			m[k][pos] = tmp;
		} // k
		//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
		
	} // i
}    
/* -------------------------------------------------------------------------------------------------- */
void sortv_si32matrix_selection_min(sint32 **m, long nrl, long nrh, long ncl, long nch, long nc)
/* -------------------------------------------------------------------------------------------------- */
{
/*
* sort an matrix of int, with the selection algorithm.
* the key is in column nc
* the sort is performed, by doing a purmutation on the lines,
* instead of copying the lines.
	*/
	int i, j;
	
	sint32 x, min, pos;
	sint32 *ptr;
	
	//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
	for(i=nrl; i<nrh; i++) {
		min = m[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = m[j][nc];
			if(x < min) {
				min = x;
				pos = j;
			}
		} // j
		
		/* permutation des pointeurs de ligne de la matrice */
		ptr    = m[i];
		m[i]   = m[pos];
		m[pos] = ptr;
		
	} // i
}
/* ---------------------------------------------------------------------------------------------------------- */
void sortv_si32matrix_selection_kmin(sint32 **m, long nrl, long nrh, long ncl, long nch, long nc, int k)
/* ---------------------------------------------------------------------------------------------------------- */
{
/*
* sort an matrix of int, with the selection algorithm.
* the key is in column nc
* the sort is performed, by doing a purmutation on the lines,
* instead of copying the lines.
	*/
	int i, j;
	int il = nrl;
	int ih = nrl + k;
	
	sint32 x, min, pos;
	sint32 *ptr;
	
	//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
	for(i=il; i<ih; i++) {
		min = m[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = m[j][nc];
			if(x < min) {
				min = x;
				pos = j;
			}
		} // j
		
		/* permutation des pointeurs de ligne de la matrice */
		ptr    = m[i];
		m[i]   = m[pos];
		m[pos] = ptr;
		
	} // i
}
/* -------------------------------------------------------------------------------------------------- */
void sortv_si32matrix_selection_max(sint32 **m, long nrl, long nrh, long ncl, long nch, long nc)
/* -------------------------------------------------------------------------------------------------- */
{
/*
* sort an matrix of int, with the selection algorithm.
* from max to min
* the key is in column nc
* the sort is performed, by doing a purmutation on the lines,
* instead of copying the lines.
	*/
	int i, j;
	
	sint32 x, max, pos;
	sint32 *ptr;
	
	//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
	for(i=nrl; i<nrh; i++) {
		max = m[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = m[j][nc];
			if(x > max) {
				max = x;
				pos = j;
			}
		} // j
		
		/* permutation des pointeurs de ligne de la matrice */
		ptr    = m[i];
		m[i]   = m[pos];
		m[pos] = ptr;
		
	} // i
}
/* ---------------------------------------------------------------------------------------------------------- */
void sortv_si32matrix_selection_kmax(sint32 **m, long nrl, long nrh, long ncl, long nch, long nc, sint32 k)
/* ---------------------------------------------------------------------------------------------------------- */
{
/*
* sort an matrix of int, with the selection algorithm.
* from max to min
* the key is in column nc
* the sort is performed, by doing a purmutation on the lines,
* instead of copying the lines.
	*/
	int i, j;
	//int il = nrl;
	//int ik = nrl + k;
	
	sint32 x, max, pos;
	sint32 *ptr;
	
	//display_imatrix(m, nrl, nrh, ncl, nch, "%10d", NULL);
	for(i=nrl; i<nrh; i++) {
		max = m[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = m[j][nc];
			if(x > max) {
				max = x;
				pos = j;
			}
		} // j
		
		/* permutation des pointeurs de ligne de la matrice */
		ptr    = m[i];
		m[i]   = m[pos];
		m[pos] = ptr;
		
	} // i
}

/* ------------------------------------------------------------------------------------------------------------------- */
void sort_index_si32matrix_selection_kmin(sint32 **key, long nrl,long nrh,long ncl, long nch, sint32 **index, int k)
/* ------------------------------------------------------------------------------------------------------------------- */
{
	int i;
	
	set_si32matrix_j(index, nrl,nrh, ncl,nch);
	
	for(i=nrl; i<=nrh; i++) {
		//printf("-------------------- %d --------------------\n", i);
		//display_ivector(key[i],   ncl, nch, "%4d", "key0");
		//display_ivector(index[i], ncl, nch, "%4d", "index0");
		
		sort_index_ivector_selection_kmin(key[i], ncl, nch, index[i], k);
		
		//display_ivector(key[i],   ncl, nch, "%4d", "key1");
		//display_ivector(index[i], ncl, nch, "%4d", "index1");
		
	}
}
/* ------------------------------------------------------------------------------------------------------------------- */
void sort_index_si32matrix_selection_kmax(sint32 **key, long nrl,long nrh,long ncl, long nch, sint32 **index, int k)
/* ------------------------------------------------------------------------------------------------------------------- */
{
	int i;
	
	set_si32matrix_j(index, nrl,nrh, ncl,nch);
	
	for(i=nrl; i<=nrh; i++) {
		//printf("-------------------- %d --------------------\n", i);
		//display_ivector(key[i],   ncl, nch, "%4d", "key0\n");
		//display_ivector(index[i], ncl, nch, "%4d", "index0\n");
		
		sort_index_ivector_selection_kmax(key[i], ncl, nch, index[i], k);
		
		//display_ivector(key[i],   ncl, nch, "%4d", "key1\n");
		//display_ivector(index[i], ncl, nch, "%4d", "index1\n");
	}
}
/* ------------------------------------------------------------------------------------------------------------------- */
void sortv_index_imatrix_selection_max(int **key, long nrl,long nrh,long ncl, long nch, int *index, int nc)
/* ------------------------------------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp, il, ih;
	int x, max;
	int *ptr;
	
	il = nrl;
	ih = nrh;
	
	for(i=il; i<=ih; i++) {
		index[i] = i;
	}/**/
	
	for(i=il; i<ih; i++) {
		max = key[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = key[j][nc];
			if(x > max) {
				max = x;
				pos = j;
			}
		}
		//printf("Max = %d, swap (%d, %d)\n", max, i, pos);
		/* permutation des pointeurs de ligne de la matrice */
		ptr      = key[i];
		key[i]   = key[pos];
		key[pos] = ptr;
		
		/* permutation des indices de l'index */
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ------------------------------------------------------------------------------------------------------------------- */
void sortv_index_imatrix_selection_min(int **key, long nrl,long nrh,long ncl, long nch, int *index, int nc)
/* ------------------------------------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp, il, ih;
	int x, min;
	int *ptr;
	
	il = nrl;
	ih = nrh;
	
	for(i=il; i<=ih; i++) {
		index[i] = i;
	}/**/
	
	for(i=il; i<ih; i++) {
		min = key[i][nc];
		pos = i;
		for(j=i+1; j<=nrh; j++) {
			x = key[j][nc];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		//printf("Max = %d, swap (%d, %d)\n", max, i, pos);
		/* permutation des pointeurs de ligne de la matrice */
		ptr      = key[i];
		key[i]   = key[pos];
		key[pos] = ptr;
		
		/* permutation des indices de l'index */
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
