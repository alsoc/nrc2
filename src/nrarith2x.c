/* ------------------ */
/* --- nrarith2.c --- */
/* ------------------ */

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

/* ------------------------------------------------------------------------------------- */
void addcnz_bmatrix(byte **src,long nrl,long nrh,long ncl, long nch, byte  cte, byte **dst)
/* ------------------------------------------------------------------------------------- */
{
	long i,j;
	byte *Xi, *Yi;
	
	for(i=nrl; i<=nrh; i++) {
		Xi = src[i];
		Yi = dst[i];
		for(j=ncl; j<=nch; j++) {
			if(Xi[j])
				Yi[j] = Xi[j] + cte;
			else
				Yi[j] = Xi[j];
		}
	}
}
/* ----------------------------------------------------------------------------------- */
void addandc_bmatrix(byte **src,long nrl,long nrh,long ncl, long nch, byte  cte, byte **dst)
/* ----------------------------------------------------------------------------------- */
{
	long i,j;
	byte *Xi, *Yi;
	
	for(i=nrl; i<=nrh; i++) {
		Xi = src[i];
		Yi = dst[i];
		for(j=ncl; j<=nch; j++) {
			if(Xi[j])
				Yi[j] = Xi[j] + cte;
			else
				Yi[j] = Xi[i];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
void addandc_si16matrix(sint16 **src,long nrl,long nrh,long ncl, long nch, short cte, sint16 **dst)
/* ---------------------------------------------------------------------------------------- */
{
	long i,j;
	sint16 *Xi, *Yi;
	
	for(i=nrl; i<=nrh; i++) {
		Xi = src[i];
		Yi = dst[i];
		for(j=ncl; j<=nch; j++) {
			if(Xi[j]) Yi[j] = Xi[j] + cte;
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
void addandc_ui16matrix(uint16 **src,long nrl,long nrh,long ncl, long nch, short cte, uint16 **dst)
/* ------------------------------------------------------------------------------------------ */
{
	long i,j;
	uint16 *Xi, *Yi;
	
	for(i=nrl; i<=nrh; i++) {
		Xi = src[i];
		Yi = dst[i];
		for(j=ncl; j<=nch; j++) {
			if(Xi[j]) Yi[j] = Xi[j] + cte;
		}
	}
}
/* ----------------------------------------------------------- */
int count_bmatrix(byte **m, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------- */
{
	long i, j;
	int s = 0;
	byte *Xi;
	
	for(i=nrl; i<=nrh; i++) {
		Xi = m[i];
		for(j=ncl; j<=nch; j++) {
			s += Xi[j];
		}
    }
    return s;
}
