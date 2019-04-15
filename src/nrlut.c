/* --------------- */
/* --- nrlut.c --- */
/* --------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
 */

/* 
* 2002/06/11 ajout des fonctions endline
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

#include "nrlut.h"

/* ----------------------------------------------------------------------- */
void init_blut(byte *v, int nl, int nh, int n0, int n1, byte k)
/* ----------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<nh; i++)  v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<nh;  i++) v[i] = k;
	}
}
/* ------------------------------------------------------------------------ */
void init_ui8lut(uint8 *v, int nl, int nh, int n0, int n1, uint8 k)
/* ------------------------------------------------------------------------ */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<nh; i++)  v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<nh;  i++) v[i] = k;
	}
}
/* --------------------------------------------------------------------------- */
void init_ui16lut(uint16 *v, int nl, int nh, int n0, int n1, uint16 k)
/* --------------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<=nh; i++) v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<=nh; i++) v[i] = k;
	}
}
/* --------------------------------------------------------------------------- */
void init_si16lut(sint16 *v, int nl, int nh, int n0, int n1, sint16 k)
/* --------------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<=nh; i++) v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<=nh; i++) v[i] = k;
	}
}
/* --------------------------------------------------------------------------- */
void init_ui32lut(uint32 *v, int nl, int nh, int n0, int n1, uint32 k)
/* --------------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<=nh; i++) v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<=nh; i++) v[i] = k;
	}
}
/* --------------------------------------------------------------------------- */
void init_i32lut(sint32 *v, int nl, int nh, int n0, int n1, sint32 k)
/* --------------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) v[i] = 0;
		for(i=n0;   i<=n1; i++) v[i] = k;
		for(i=n1+1; i<=nh; i++) v[i] = 0;
	} else {
		for(i=nl;   i< n1; i++) v[i] = k;
		for(i=n1;   i<=n0; i++) v[i] = 0;
		for(i=n1+1; i<=nh; i++) v[i] = k;
	}
}
/* -------------------------------------------------------------------------- */
void init_rgb8lut(rgb8 *v, int nl, int nh, int n0, int n1, rgb8 k)
/* -------------------------------------------------------------------------- */
{
	int i;
	
	if(nl<=nh) {
		// normal case 
		for(i=nl;   i< n0; i++) { v[i].r = 0;   v[i].g = 0;   v[i].b = 0;}
		for(i=n0;   i<=n1; i++) { v[i].r = k.r; v[i].g = k.g; v[i].b = k.b;}
		for(i=n1+1; i<=nh; i++)  { v[i].r = 0;   v[i].g = 0;  v[i].b = 0;}
	} else {
		for(i=nl;   i< n1; i++) { v[i].r = k.r; v[i].g = k.g; v[i].b = k.b;}
		for(i=n1;   i<=n0; i++) { v[i].r = 0;   v[i].g = 0;   v[i].b = 0;}
		for(i=n1+1; i<=nh; i++) { v[i].r = k.r; v[i].g = k.g; v[i].b = k.b;}
	}
}
/* ------------------------------------------------------------------------------------------- */
void lut_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte *L, byte **D)
/* ------------------------------------------------------------------------------------------- */
{
    int i, j;

    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------- */
void lut_ui8matrix(uint8 **S, long nrl,long nrh,long ncl, long nch, uint8 *L, uint8 **D)
/* -------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------- */
void lut_si8matrix(sint8 **S, long nrl,long nrh,long ncl, long nch, sint8 *L, sint8 **D)
/* -------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------------- */
void lut_ui16matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, uint16 *L, uint16 **D)
/* -------------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------------- */
void lut_si16matrix(sint16 **S, long nrl, long nrh, long ncl, long nch, sint16 *L, sint16 **D)
/* -------------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------------- */
void lut_ui32matrix(uint32 **S, long nrl, long nrh, long ncl, long nch, uint32 *L, uint32 **D)
/* -------------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* -------------------------------------------------------------------------------------------------- */
void lut_si32matrix(sint32 **S, long nrl, long nrh, long ncl, long nch, sint32 *L, sint32 **D)
/* -------------------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            D[i][j] = L[(int)S[i][j]];
        }
    }
}
/* ------------------------------------------------------------------------------------------------ */
void lut_rgb8matrix(rgb8 **S, long nrl, long nrh, long ncl, long nch, rgb8 *L, rgb8 **D)
/* ------------------------------------------------------------------------------------------------ */
{
	int i, j;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j].r = L[S[i][j].r].r;
			D[i][j].g = L[S[i][j].g].g;
			D[i][j].b = L[S[i][j].b].b;
		}
	}
}
/* --------------------------------------------------------------------------------------------------------- */
void lut_ui16matrix_ui8matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, uint8 *L, uint8 **D)
/* --------------------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = L[(int)S[i][j]];
		}
	}
}
/* --------------------------------------------------------------------------------------------------------- */
void lut_ui32matrix_ui16matrix(uint32 **S, long nrl, long nrh, long ncl, long nch, uint16 *L, uint16 **D)
/* --------------------------------------------------------------------------------------------------------- */
{
	int i, j;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = L[(int)S[i][j]];
		}
	}
}
/* ---------------------------------------------------------------------------- */
void histogram_bmatrix(byte **S, long nrl, long nrh, long ncl, long nch, int32 *H)
/* ---------------------------------------------------------------------------- */
{
	int i, j;
	byte *Si;
	
	for(i=nrl; i<=nrh; i++) {
		Si = S[i];
		for(j=ncl; j<=nch; j++) {
			H[Si[j]]++;
		}
	}
}
/* --------------------------------------------------------------------------------- */
void histogram_ui16matrix(uint16 **S, long nrl, long nrh, long ncl, long nch, int32 *H)
/* --------------------------------------------------------------------------------- */
{
	int i, j;
	uint16 *Si;
	
	for(i=nrl; i<=nrh; i++) {
		Si = S[i];
		for(j=ncl; j<=nch; j++) {
			H[Si[j]]++;
		}
	}
}
/* ------------------------------------------------------------------------------- */
void histogram_rgb8matrix(rgb8 **S, long nrl, long nrh, long ncl, long nch, rgb32 *H)
/* ------------------------------------------------------------------------------- */
{
	int i, j;
	rgb8 *Si;
	int r, b, g;
	
	//FUNCTION_NAME("Histogram_rgbmatrix");
	
	for(i=nrl; i<=nrh; i++) {
		Si = S[i];
		//PROGRESS_INFO(function_name, i, nrl, nrh);
		for(j=ncl; j<=nch; j++) {
			
			//H[Si[j].r].r++;
			//H[Si[j].g].g++;
			//H[Si[j].b].b++;
			
			r = S[i][j].r;
			g = S[i][j].g;
			b = S[i][j].b;
			
			H[r].r++;
			H[g].g++;
			H[b].b++;
		}
	}
	
	//END;
	return;
}
