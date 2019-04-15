/* ------------------ */
/* --- nrmem2XX.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

#include "def.h"
#include "nrmem1.h"
#include "nrmem2.h"
#include "nrmem2X.h"
#include "nrmem2XX.h"
/* ---------------------------- */
/* --- Left & right Rotate  --- */
/* ---------------------------- */
// (i,j) -> (n-j,i) -> (n-i,n-j) -> (j,n-i) ->
/* -------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte **D)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_smatrix(short **S, long nrl,long nrh,long ncl, long nch, short **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch, int16 **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D)
/* --------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate_imatrix(int **S, long nrl,long nrh,long ncl, long nch, int **D)
/* ------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch, uint **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch, int32 **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D)
/* --------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_matrix(float **S, long nrl,long nrh,long ncl, long nch, float **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate_dmatrix(double **S, long nrl,long nrh,long ncl, long nch, double **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-j][i] = S[i][j];
		}
	}
}
/* -------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte **D)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_smatrix(short **S, long nrl,long nrh,long ncl, long nch, short **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch, int16 **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* --------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D)
/* --------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate_imatrix(int **S, long nrl,long nrh,long ncl, long nch, int **D)
/* ------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch, uint **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch, int32 **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* --------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D)
/* --------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_matrix(float **S, long nrl,long nrh,long ncl, long nch, float **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ------------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate_dmatrix(double **S, long nrl,long nrh,long ncl, long nch, double **D)
/* ------------------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][j] = S[n-j][i];
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	byte t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate1_smatrix(short **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	short t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	ushort t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_imatrix(int **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) lrotate1_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	uint t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_matrix(float **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	float t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_dmatrix(double **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	double t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) lrotate1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	rgb8 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-j][i];
			S[n-j][i] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	byte t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate1_smatrix(short **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	short t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	ushort t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_imatrix(int **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) rrotate1_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	uint t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_matrix(float **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	float t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_dmatrix(double **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	double t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) rrotate1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	rgb8 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][j];
			S[i][j]   = S[n-j][i];
			S[n-j][i] = t;
		}
	}
}
/* ---------------------------------- */
/* --- Horizontal & Vertical Flip --- */
/* ---------------------------------- */

/* ------------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) hflip_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch, byte **D)
/* ------------------------------------------------------------------------------------ */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* -------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_smatrix(short **S, long nrl,long nrh,long ncl, long nch, short **D)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch, int16 **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_imatrix(int **S, long nrl,long nrh,long ncl, long nch, int **D)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch, uint **D)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_i32matrix (int32 **S, long nrl,long nrh,long ncl, long nch, int32 **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_matrix(float **S, long nrl,long nrh,long ncl, long nch, float **D)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_dmatrix(double **S, long nrl,long nrh,long ncl, long nch, double **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[i][n-j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_bmatrix(byte  **S, long nrl,long nrh,long ncl, long nch, byte **D)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* -------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_smatrix(short **S, long nrl,long nrh,long ncl, long nch, short **D)
/* -------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ----------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch, ushort **D)
/* ----------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch, int16 **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch, uint16 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_imatrix(int **S, long nrl,long nrh,long ncl, long nch, int **D)
/* ---------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch, uint **D)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch, int32 **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch, uint32 **D)
/* ------------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_matrix(float **S, long nrl,long nrh,long ncl, long nch, float **D)
/* ------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* ---------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_dmatrix(double **S, long nrl,long nrh,long ncl, long nch, double **D)
/* ---------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch, rgb8 **D)
/* --------------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			D[n-i][j] = S[i][j];
		}
	}
}
/* --------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_bmatrix(byte **S, long nrl,long nrh,long ncl, long nch)
/* --------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	byte t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_smatrix(short **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	short t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) hflip1_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = ncl + nch;
	ushort t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) hflip1_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = ncl + nch;
	int16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	uint16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_imatrix(int **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	int t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	uint t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_i32matrix (int32 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	int32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	uint32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* --------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_matrix(float **S, long nrl,long nrh,long ncl, long nch)
/* --------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	float t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) hflip1_dmatrix(double **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = ncl + nch;
	double t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) hflip1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = ncl + nch;
	rgb8 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[i][n-j];
			S[i][n-j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_bmatrix(byte  **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	byte t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_smatrix(short **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	short t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) vflip1_usmatrix(ushort **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	ushort t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) vflip1_i16matrix(int16 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	int16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_ui16matrix(uint16 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint16 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_imatrix(int **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	int t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ---------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_uimatrix(uint **S, long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) vflip1_i32matrix(int32 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	int32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* -------------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_ui32matrix(uint32 **S, long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	uint32 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* --------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_matrix(float **S, long nrl,long nrh,long ncl, long nch)
/* --------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	float t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ----------------------------------------------------------------------------- */
IMAGE_EXPORT(void) vflip1_dmatrix(double **S, long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------- */
{
	int i, j, n = nrl + nrh;
	double t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}
/* ------------------------------------------------------------------------------ */
IMAGE_EXPORT(void) vflip1_rgb8matrix(rgb8 **S, long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------ */
{
	int i, j, n = nrl + nrh;
	rgb8 t;
	
	for(i=nrl; i<=nrh; i++) {
		for(j=ncl; j<=nch; j++) {
			t         = S[n-i][j];
			S[n-i][j] = S[i][j];
			S[i][j]   = t;
		}
	}
}

