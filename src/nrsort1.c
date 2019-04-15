/* ----------------- */
/* --- nrsort1.c --- */
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
#include "nrsort1.h"

/* ------------------------------------------------------------------------------ */
void extractnz_boundaries_ui8vector(uint8 *v, long nl, long nh, long *nlnz, long *nhnz)
/* ------------------------------------------------------------------------------ */
{
    long left = nl, right = nh;;
    
    while(!v[left ] && left  <= nh) left++;
    while(!v[right] && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* ------------------------------------------------------------------------------ */
void extractnz_boundaries_si16vector(sint16 *v, long nl, long nh, long *nlnz, long *nhnz)
/* ------------------------------------------------------------------------------ */
{
    long left = nl, right = nh;;
    
    while(!v[left ] && left  <= nh) left++;
    while(!v[right] && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* --------------------------------------------------------------------------------- */
void extractnz_boundaries_ui16vector(uint16 *v, long nl, long nh, long *nlnz, long *nhnz)
/* --------------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;
    
    while(!v[left ] && left  <= nh) left++;
    while(!v[right] && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* ----------------------------------------------------------------------------- */
void extractnz_boundaries_si32vector(sint32 *v, long nl, long nh, long *nlnz, long *nhnz)
/* ----------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;
    
    while(!v[left ] && left  <= nh) left++;
    while(!v[right] && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* ------------------------------------------------------------------------------- */
void extractnz_boundaries_ui32vector(uint32 *v, long nl, long nh, long *nlnz, long *nhnz)
/* ------------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;
    
    while(!v[left ] && left  <= nh) left++;
    while(!v[right] && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* ---------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f32vector(float32 *v, long nl, long nh, long *nlnz, long *nhnz, float32 epsillon)
/* ---------------------------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;
    
    while(fabs(v[left ])<epsillon && left  <= nh) left++;
    while(fabs(v[right])<epsillon && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}
/* ------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f64vector(float64 *v, long nl, long nh, long *nlnz, long *nhnz, float64 epsillon)
/* ------------------------------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;
    
    while(fabs(v[left ])<epsillon && left  <= nh) left++;
    while(fabs(v[right])<epsillon && right >= nl) right--;
    
    *nlnz = left; *nhnz = right;
}

/* ------------------------------------------------------------------------------------ */
void sort_index_f64vector_selection(float64 *key, long nl, long nh, int *index)
/* ------------------------------------------------------------------------------------ */
{
	int i, j, pos, tmp;
	float64 x, min;
	
	for(i=nl; i<=nh; i++) {
		index[i] = i-nl;
	}
	
	for(i=nl; i<nh; i++) {
		min = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = min;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ------------------------------------------------------------------------------------- */
void sort_index_ivector_selection_min(int *key, long nl, long nh, int *index)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp;
	int x, min;
	
	for(i=nl; i<=nh; i++) {
		//index[i] = i-nl;
		index[i] = i;/**/
	}
	
	for(i=nl; i<nh; i++) {
		min = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = min;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ------------------------------------------------------------------------------------- */
void sort_index_ivector_selection_max(int *key, long nl, long nh, int *index)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp;
	int x, max;
	
	for(i=nl; i<=nh; i++) {
		//index[i] = i-nl;
		index[i] = i;
	}
	
	for(i=nl; i<nh; i++) {
		max = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x > max) {
				max = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = max;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* -------------------------------------------------------------------------------------- */
void sort_index_vector_selection_min(float *key, long nl, long nh, int *index)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp;
	float x, min;
	
	for(i=nl; i<=nh; i++) {
		//index[i] = i-nl;
		index[i] = i;
	}
	
	for(i=nl; i<nh; i++) {
		min = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = min;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* -------------------------------------------------------------------------------------- */
void sort_index_vector_selection_max(float *key, long nl, long nh, int *index)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, pos, tmp;
	float x, max;
	
	for(i=nl; i<=nh; i++) {
		//index[i] = i-nl;
		index[i] = i;
	}
	
	for(i=nl; i<nh; i++) {
		max = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x > max) {
				max = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = max;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ---------------------------------------------------------------------------------------------- */
void sort_index_vector_selection_kmin(float *key, long nl, long nh, int *index, int k)
/* ---------------------------------------------------------------------------------------------- */
{
/*
* ATTENTION, ke tableau index DOIT etre initialise
	*/
	int i, j, pos, tmp, il, ih;
	float x, min;
	
	il = nl;
	ih = il + k;
	
	/*for(i=il; i<=ih; i++) {
    index[i] = i-il;
}*/
	
	for(i=il; i<ih; i++) {
		min = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = min;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* --------------------------------------------------------------------------------------------- */
void sort_index_ivector_selection_kmin(int *key, long nl, long nh, int *index, int k)
/* --------------------------------------------------------------------------------------------- */
{
/*
* ATTENTION, ke tableau index DOIT etre initialise
	*/
	int i, j, pos, tmp, il, ih;
	int x, min;
	
	il = nl;
	ih = il + k;
	
	/*for(i=il; i<=ih; i++) {
    index[i] = i-il;
}*/
	
	for(i=il; i<ih; i++) {
		min = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = min;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ---------------------------------------------------------------------------------------------- */
void sort_index_vector_selection_kmax(float *key, long nl, long nh, int *index, int k)
/* ---------------------------------------------------------------------------------------------- */
{
/*
* ATTENTION, ke tableau index DOIT etre initialise
	*/
	int i, j, pos, tmp, il, ih;
	float x, max;
	
	il = nl;
	ih = il + k;
	
	/*for(i=il; i<=ih; i++) {
    index[i] = i-il;
}*/
	
	for(i=il; i<ih; i++) {
		max = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x > max) {
				max = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = max;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* --------------------------------------------------------------------------------------------- */
void sort_index_ivector_selection_kmax(int *key, long nl, long nh, int *index, int k)
/* --------------------------------------------------------------------------------------------- */
{
/*
* ATTENTION, ke tableau index DOIT etre initialise
	*/
	int i, j, pos, tmp, il, ih;
	int x, max;
	
	il = nl;
	ih = il + k;
	
	/*for(i=il; i<=ih; i++) {
    index[i] = i-il;
}*/
	
	for(i=il; i<ih; i++) {
		max = key[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = key[j];
			if(x > max) {
				max = x;
				pos = j;
			}
		}
		key[pos] = key[i];
		key[i]   = max;
		
		tmp        = index[i];
		index[i]   = index[pos];
		index[pos] = tmp;
	}
}
/* ------------------------------------------------------------------ */
void sort_bvector_selection_min(byte *v, long nl, long nh)
/* ------------------------------------------------------------------ */
{
	int i, j;
	int x, min, pos;
	
	for(i=nl; i<nh; i++) {
		min = v[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = v[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		v[pos] = v[i];
		v[i]   = min;
	}
}
/* -------------------------------------------------------------- */
byte select_bvector(byte *v, long nl, long nh, long k)
/* -------------------------------------------------------------- */
{
	int i, j, il, ih;
	int x, min, pos;
	
	il = nl;
	ih = il + k;
	
	for(i=il; i<ih; i++) {
		min = v[i];
		pos = i;
		for(j=i+1; j<=nh; j++) {
			x = v[j];
			if(x < min) {
				min = x;
				pos = j;
			}
		}
		v[pos] = v[i];
		v[i]   = min;
	}
	return v[ih];
}
/* ----------------------------------------------------------------- */
rgb8 select_rgb8vector(rgb8 *v, long nl, long nh, long k)
/* ----------------------------------------------------------------- */
{
	int i, j, il, ih;
	
	int rpos, gpos, bpos;
	rgb8 xi, xj;
	byte r,g,b;
	byte rmin, gmin, bmin;
	
	il = nl;
	ih = il + k;
	
	for(i=il; i<ih; i++) {
		
		xi = v[i];
		rmin = xi.r; gmin = xi.g; bmin = xi.b;
		rpos = gpos = bpos = i;
		
		for(j=i+1; j<=nh; j++) {
			xj = v[j];
			r = xj.r; g = xj.g; b = xj.b;
			if(r < rmin) { rmin = r; rpos = j; }
			if(g < gmin) { gmin = r; gpos = j; }
			if(b < bmin) { bmin = r; bpos = j; }
		}
		v[rpos].r = v[i].r; v[i].r = rmin;
		v[rpos].g = v[i].g; v[i].g = gmin;
		v[rpos].b = v[i].b; v[i].b = bmin;
	}
	return v[ih];
}
