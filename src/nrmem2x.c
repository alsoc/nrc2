/* ----------------- */
/* --- nrmem2X.c --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * 
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

#include "nrtypex.h"

#include "nrmem1.h"
#include "nrmem2.h"
#include "nrmem2x.h"

/* ------------------------------------------ */
/* --- ATTENTION ---------------------------- */
/* ------------------------------------------ */
/* l'utilisation des fonctions endline        */
/* necessite l'allocation d'une ligne de plus */
/* (a cause du m[i+1]                         */
/* ------------------------------------------ */
/* ------------------------------------------------------------------------------------ */
void reset_endline_bmatrix(byte **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* --------------------------------------------------------------------------------------- */
void reset_endline_i16matrix(int16 **m, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* ----------------------------------------------------------------------------------------- */
void reset_endline_ui16matrix(uint16 **m, long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* ----------------------------------------------------------------------------------- */
void reset_endline_imatrix(int **m, long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* --------------------------------------------------------------------------------------- */
void reset_endline_i32matrix(int32 **m, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* ----------------------------------------------------------------------------------------- */
void reset_endline_ui32matrix(uint32 **m, long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}
/* --------------------------------------------------------------------------------------- */
void reset_endline_i64matrix(int64 **m, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    return;
}

/* ------------------------------------------------------ */
void endline_bmatrix(byte **m, long i, long l)
/* ------------------------------------------------------ */
{
    m[i+1] = m[i] + l;
}
/* --------------------------------------------------------- */
void endline_i16matrix(int16 **m, long i, long l)
/* --------------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* ----------------------------------------------------------- */
void endline_ui16matrix(uint16 **m, long i, long l)
/* ----------------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* ----------------------------------------------------- */
void endline_imatrix(int **m, long i, long l)
/* ----------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* --------------------------------------------------------- */
void endline_i32matrix(int32 **m, long i, long l)
/* --------------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* ----------------------------------------------------------- */
void endline_ui32matrix(uint32 **m, long i, long l)
/* ----------------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* --------------------------------------------------------- */
void endline_i64matrix(int64 **m, long i, long l)
/* --------------------------------------------------------- */
{
    m[i+1] = m[i] + l;
}
/* ----------------------------------------------------------------- */
void endline0_bmatrix(byte **m, long i, long l, long ncl)
/* ----------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (byte) l;
}
/* -------------------------------------------------------------------- */
void endline0_i16matrix(int16 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (int16) l;
}
/* ---------------------------------------------------------------------- */
void endline0_ui16matrix(uint16 **m, long i, long l, long ncl)
/* ---------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (uint16) l;
}
/* ---------------------------------------------------------------- */
void endline0_imatrix(int **m, long i, long l, long ncl)
/* ---------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (int) l;
}
/* -------------------------------------------------------------------- */
void endline0_i32matrix(int32 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (int32) l;
}
/* ---------------------------------------------------------------------- */
void endline0_ui32matrix(uint32 **m, long i, long l, long ncl)
/* ---------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (uint32) l;
}
/* -------------------------------------------------------------------- */
void endline0_i64matrix(int64 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl] = (int64) l;
}
/* ----------------------------------------------------------------- */
void endline1_bmatrix(byte **m, long i, long l, long ncl)
/* ----------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (byte) l;
}
/* -------------------------------------------------------------------- */
void endline1_i16matrix(int16 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (int16) l;
}
/* ---------------------------------------------------------------------- */
void endline1_ui16matrix(uint16 **m, long i, long l, long ncl)
/* ---------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (uint16) l;
}
/* ---------------------------------------------------------------- */
void endline1_imatrix(int **m, long i, long l, long ncl)
/* ---------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (int) l;
}
/* -------------------------------------------------------------------- */
void endline1_i32matrix(int32 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (int32) l;
}
/* ---------------------------------------------------------------------- */
void endline1_ui32matrix(uint32 **m, long i, long l, long ncl)
/* ---------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (uint32) l;
}
/* -------------------------------------------------------------------- */
void endline1_i64matrix(int64 **m, long i, long l, long ncl)
/* -------------------------------------------------------------------- */
{
    m[i+1] = m[i] + l + 1;
    
    m[i][ncl-1] = (int64) l;
}

/* -------------------------------------------------------------------------------------- */
void resize_si16Pmatrix(si16Point **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------------- */
void resize_ui16Pmatrix(ui16Point **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------------- */
void resize_si32Pmatrix(si32Point **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------------- */
void resize_ui32Pmatrix(ui32Point **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ------------------------------------------------------------------------------------ */
void resize_f32Pmatrix(f32Point **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
// Triplet Matrix
/* ---------------------------------------------------------------------------------------- */
void resize_si16Tmatrix(si16Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------------- */
void resize_ui16Tmatrix(ui16Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------------- */
void resize_si32Tmatrix(si32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------------- */
void resize_ui32Tmatrix(ui32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* -------------------------------------------------------------------------------------- */
void resize_f32Tmatrix(f32Triplet **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/*
 * --------------
 * matrix_reverse
 * --------------
 */
/* ---------------------------------------------------------------- */
void bmatrix_reverse(byte **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------- */
{
    long i, mrow=(nrl+nrh+1)/2;
    byte *t;
    
    for(i=nrl; i<mrow; i++) {
        t        = m[i];
        m[i]     = m[nrh-i];
        m[nrh-i] = t;
    }
}
/* ----------------------------------------------------------------- */
void smatrix_reverse(sint16 **m, long nrl, long nrh, long ncl, long nch)
/* ----------------------------------------------------------------- */
{
    long i, mrow=(nrl+nrh+1)/2;
    sint16 *t;
    
    for(i=nrl; i<mrow; i++) {
        t        = m[i];
        m[i]     = m[nrh-i];
        m[nrh-i] = t;
    }
}
/* ------------------------------------------------------------------- */
void usmatrix_reverse(uint16 **m, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
{
    long i, mrow=(nrl+nrh+1)/2;
    uint16 *t;
    
    for(i=nrl; i<mrow; i++) {
        t        = m[i];
        m[i]     = m[nrh-i];
        m[nrh-i] = t;
    }
}
/* --------------------------------------------------------------------------------------------------------- */
void desinterlace_bmatrix(byte **S, long nrl, long nrh, long ncl, long nch, byte **D0, byte **D1)
/* --------------------------------------------------------------------------------------------------------- */
{
	int i, i0, i1;
	int j;
	
	i0 = i1 = nrl;
	
	if((nrl&1)==0) {
		
		// nrl is even
		for(i=nrl; i<=nrh; i+=2) {
			//dup_bvector(S[i+0], ncl, nch, D0[i0++]);
			//dup_bvector(S[i+1], ncl, nch, D1[i1++]);
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
		}
		// epilog
		if((nrh&1)==0) {
			//dup_bvector(S[nrh], ncl, nch, D0[i0]);
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
		}
		
	} else {
		
		// nrl is odd
		for(i=nrl; i<=nrh; i+=2) {
			//dup_bvector(S[i+0], ncl, nch, D1[i1++]);
			//dup_bvector(S[i+1], ncl, nch, D0[i0++]);
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
		}
		// epilog
		if((nrh&1)==1) {
			//dup_bvector(S[nrh], ncl, nch, D1[i1]);
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
		}
	}
}
/* ------------------------------------------------------------------------------------------------------------ */
void desinterlace_rgb8matrix(rgb8 **S, long nrl, long nrh, long ncl, long nch, rgb8 **D0, rgb8 **D1)
/* ------------------------------------------------------------------------------------------------------------ */
{
	int i, i0, i1;
	int j;
	
	i0 = i1 = nrl;
	
	if((nrl&1)==0) {
		
		// nrl is even
		for(i=nrl; i<=nrh; i+=2) {
			//dup_rgb8vector(S[i+0], ncl, nch, D0[i0++]);
			//dup_rgb8vector(S[i+1], ncl, nch, D1[i1++]);
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
		}
		// epilog
		if((nrh&1)==0) {
			//dup_rgb8vector(S[nrh], ncl, nch, D0[i0]);
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
		}
		
	} else {
		
		// nrl is odd
		for(i=nrl; i<=nrh; i+=2) {
			//dup_rgb8vector(S[i+0], ncl, nch, D1[i1++]);
			//dup_rgb8vector(S[i+1], ncl, nch, D0[i0++]);
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
			for(j=ncl; j<=nch; j++) D0[i0][j] = S[i][j]; i0++;
		}
		// epilog
		if((nrh&1)==1) {
			//dup_rgb8vector(S[nrh], ncl, nch, D1[i1]);
			for(j=ncl; j<=nch; j++) D1[i1][j] = S[i][j]; i1++;
		}
	}
}
/* ------------------------------------------------------------------------------------------------------- */
void interlace_bmatrix(byte **S0, long nrl, long nrh, long ncl, long nch, byte **S1, byte **D)
/* ------------------------------------------------------------------------------------------------------- */
{
	// S1 & S2 are supposed to have the same height
	int i, i0, i1;
	int j;
	
	i0 = i1 = nrl;
	
	for(i=nrl; i<=nrh;) {
		//dup_bvector(S0[i0++], ncl, nch, D[i++]);
		//dup_bvector(S1[i1++], ncl, nch, D[i++]);
		for(j=ncl; j<=nch; j++) D[i][j] = S0[i0][j]; i++; i0++;
		for(j=ncl; j<=nch; j++) D[i][j] = S0[i1][j]; i++; i1++;
	}
}
/* ---------------------------------------------------------------------------------------------------------- */
void interlace_rgb8matrix(rgb8 **S0, long nrl, long nrh, long ncl, long nch, rgb8 **S1, rgb8 **D)
/* ---------------------------------------------------------------------------------------------------------- */
{
	int i, i0, i1;
	int j;
	
	i0 = i1 = nrl;
	
	for(i=nrl; i<=nrh;) {
		//dup_rgb8vector(S0[i0++], ncl, nch, D[i++]);
		//dup_rgb8vector(S1[i1++], ncl, nch, D[i++]);
		for(j=ncl; j<=nch; j++) D[i][j] = S0[i0][j]; i++; i0++;
		for(j=ncl; j<=nch; j++) D[i][j] = S0[i1][j]; i++; i1++;
	}
}

/* ---------------------------------------------------------------------------------------------- */
void copyc_bmatrix(byte **src,long nrl,long nrh,long ncl, long nch, byte **cond, byte c, byte **dst)
/* ---------------------------------------------------------------------------------------------- */
{
    long i, j;
    byte *Xi, *Yi, *Ci;
    
    for(i=nrl; i<=nrh; i++) {
        Xi = src [i];
        Yi = dst [i];
        Ci = cond[i];
        for(j=ncl; j<=nch; j++) {
            if(Ci[j] == c) Yi[j] = Xi[j]; else Yi[j] = 0;
        }
    }
}
/* ------------------------------------------------------------------------------ */
void complete_border_ui8matrix(uint8 **m, long nrl,long nrh,long ncl, long nch, long n)
/* ------------------------------------------------------------------------------ */
{
    long i, j;
    
    uint8 *Xi;
    
    for(i=nrl; i<=nrh; i++) {
        Xi = m[i];
        for(j=1; j<=n; j++) {
            Xi[ncl-j] = Xi[ncl];
            Xi[nch+j] = Xi[nch];
        }
    }
    for(i=1; i<=n; i++)
        dup_ui8vector(m[nrl], ncl-n, nch+n, m[nrl-i]);
    for(i=1; i<=n; i++)
        dup_ui8vector(m[nrh], ncl-n, nch+n, m[nrh+i]);
}
/* ------------------------------------------------------------------------------------- */
void complete_border1_ui8matrix(uint8 **m, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *Xi;
    
    dup_ui8vector(m[nrl+1], ncl, nch, m[nrl]);
    
    for(i=nrl; i<=nrh; i++) {
        Xi = m[i];
        Xi[nrl] = Xi[nrl+1];
        Xi[nrh] = Xi[nrh-1];
    }
    
    dup_ui8vector(m[nrh-1], ncl, nch, m[nrh]);
}
/* ------------------------------------------------------------------------------------- */
void complete_border2_ui8matrix(uint8 **m, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------------- */
{
    long i;
    uint8 *Xi;
    
    dup_ui8vector(m[nrl+2], ncl, nch, m[nrl+0]);
    dup_ui8vector(m[nrl+2], ncl, nch, m[nrl+1]);
    
    
    for(i=nrl; i<=nrh; i++) {
        Xi = m[i];
        Xi[nrl] = Xi[nrl+1] = Xi[nrl+2];
        Xi[nrh] = Xi[nrh-1] = Xi[nrh-2];
    }
    
    dup_ui8vector(m[nrh-2], ncl, nch, m[nrh-1]);
    dup_ui8vector(m[nrh-2], ncl, nch, m[nrh-0]);
}
/* ------------------------------------------------------------------------------------------------ */
void copy1c_ui8matrix(uint8 **X, long nc, uint8 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------ */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_ui8vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* -------------------------------------------------------------------------------------------------- */
void copy1c_ui16matrix(uint16 **X, long nc, uint16 **Y, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_ui16vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* ---------------------------------------------------------------------------------------------- */
void copy1c_ui32matrix(uint32 **X, long nc, uint32 **Y, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_ui32vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* ------------------------------------------------------------------------------------------------- */
void copy1c_f32matrix(float32 **X, long nc, float32 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_f32vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void copy1c_f64matrix(float64 **X, long nc, float64 **Y, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_f64vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* --------------------------------------------------------------------------------------------------- */
void copy1c_rgb8matrix(rgb8 **X, long nc, rgb8 **Y, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_rgb8vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void copy1c_rgbx8matrix(rgbx8 **X, long nc, rgbx8 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------------ */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        //copy1c_rgbx8vector(X[i], nc, Y[i], ncl, nch);
    }
}
/* ------------------------------------------------------------------------------------------------ */
void copy1r_ui8matrix(uint8 **X, long nr, uint8 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------ */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_ui8vector(X[nr], ncl, nch, Y[i]);
    }
}
/* -------------------------------------------------------------------------------------------------- */
void copy1r_ui16matrix(uint16 **X, long nr, uint16 **Y, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_ui16vector(X[nr], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------- */
void copy1r_ui32matrix(uint32 **X, long nr, uint32 **Y, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_ui32vector(X[nr], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------- */
void copy1r_f32matrix(float32 **X, long nr, float32 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_f32vector(X[nr], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void copy1r_f64matrix(float64 **X, long nr, float64 **Y, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_f64vector(X[nr], ncl, nch, Y[i]);
    }
}
/* --------------------------------------------------------------------------------------------------- */
void copy1r_rgb8matrix(rgb8 **X, long nr, rgb8 **Y, long nrl, long nrh, long ncl, long nch)
/* --------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_rgb8vector(X[nr], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void copy1r_rgbx8matrix(rgbx8 **X, long nr, rgbx8 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------------ */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_rgbx8vector(X[nr], ncl, nch, Y[i]);
    }
}
