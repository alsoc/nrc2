/* ------------------ */
/* --- nrlinalg.c --- */
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
#include <ctype.h> /* isdigit */
#include <string.h> /* memcpy */
//#include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nrlinalg.h"


/* ---------------------------------------------------------------------------------------- */
void transpose_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
void transpose_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch, sint16 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
void transpose_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------------- */
void transpose_si32matrix(sint32 **S, long nrl,long nrh,long ncl, long nch, sint32 **D)
/* ----------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------------- */
void transpose_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D)
/* ----------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
void transpose_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch, float32 **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* -------------------------------------------------------------------------------------------- */
void transpose_dmatrix(float64 **S, long nrl,long nrh,long ncl, long nch, float64 **D)
/* -------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
void transpose_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nch; i++) {
		for(j=ncl; j<=nch; j++) {
			D[j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------- */
void transpose1_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------- */
{
	int i, j;
	byte t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
void transpose1_si16matrix(sint16 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j;
	int16 t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ------------------------------------------------------------------------------------ */
void transpose1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
	int i, j;
	uint16 t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
void transpose1_si32matrix(sint32 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j;
	int32 t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ------------------------------------------------------------------------------------ */
void transpose1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
	int i, j;
	uint32 t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ------------------------------------------------------------------------------- */
void transpose1_f32matrix(float32 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------- */
{
	int i, j;
	float t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* --------------------------------------------------------------------------------- */
void transpose1_f64matrix(float64 **S, long nrl,long nrh,long ncl, long nch)
/* --------------------------------------------------------------------------------- */
{
	int i, j;
	double t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
void transpose1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j;
	rgb8 t;
	
	for(i=nrl; i<=nch; i++) {
		for(j=i+1; j<=nch; j++) {
			t       = S[j][i];
			S[j][i] = S[i][j];
			S[i][j] = t;
		}
	}
}