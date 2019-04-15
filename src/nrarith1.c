/* ------------------ */
/* --- nralloc1.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
*/

/* 
 * History:
 *2002/06/11 ajout des fonctions endline
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

//#include "nralloc.h"
#include "nrarith1.h"

/*
 * ------------------
 * --- sum_vector ---
 * ------------------
 */

/* -------------------------------------------------------- */
sint32 sum_si8vector(sint8 *v, long nl, long nh)
/* -------------------------------------------------------- */
{
	int i;
    sint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* -------------------------------------------------------- */
uint32 sum_u8ivector(uint8 *v, long nl, long nh)
/* -------------------------------------------------------- */
{
	int i;
    uint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ---------------------------------------------------------- */
sint32 sum_si16vector(sint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
    sint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ---------------------------------------------------------- */
uint32 sum_u16ivector(uint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
    uint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ---------------------------------------------------------- */
sint32 sum_si32vector(sint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
    sint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ---------------------------------------------------------- */
uint32 sum_u32ivector(uint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
    uint32 s = 0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ----------------------------------------------------------- */
float32 sum_f32vector(float32 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float32 s = 0.0f;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}
/* ----------------------------------------------------------- */
float64 sum_f64vector(float64 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float64 s = 0.0;
	for(i=nl; i<=nh; i++) {
		s += v[i];
	}
	return s;
}

/*
 * ------------------
 * --- min_vector ---
 * ------------------
 */

/* ------------------------------------------------------- */
sint8 min_si8vector(sint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
	int i;
	uint8  m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ------------------------------------------------------- */
uint8 min_ui8vector(uint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
	int i;
	uint8  m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
sint16 min_si16vector(sint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	int16 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
uint16 min_ui16vector(uint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	uint16 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
sint32 min_si32vector(sint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	int16 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
uint32 min_ui32vector(uint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	uint32 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ----------------------------------------------------------- */
float32 min_f32vector(float32 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float32 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}
/* ----------------------------------------------------------- */
float64 min_f64vector(float64 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float64 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]<m) m = v[i];
	}
	return m;
}

/*
 * ------------------
 * --- max_vector ---
 * ------------------
 */

/* ------------------------------------------------------- */
sint8 max_si8vector(sint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
	int i;
	sint8  m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ------------------------------------------------------- */
uint8 max_ui8vector(uint8 *v, long nl, long nh)
/* ------------------------------------------------------- */
{
	int i;
	uint8  m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
sint16 max_si16vector(sint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i; 
	sint16 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
uint16 max_ui16vector(uint16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i; 
	uint16 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
sint32 max_si32vector(sint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	sint32 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ---------------------------------------------------------- */
uint32 max_ui32vector(uint32 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
	int i;
	uint32 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ----------------------------------------------------------- */
float32 max_f32vector(float32 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float32 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/* ----------------------------------------------------------- */
float64 max_f64vector(float64 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
	int i;
	float64 m;
	
	m = v[nl];
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) m = v[i];
	}
	return m;
}
/*
 * ----------------------
 * --- min_vector_pos ---
 * ----------------------
 */

/* --------------------------------------------------------------------- */
sint8 min_si8vector_pos(sint8 *v, long nl, long nh, int *pos)
/* --------------------------------------------------------------------- */
{
	int i;
	sint8  m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* --------------------------------------------------------------------- */
uint8 min_ui8vector_pos(uint8 *v, long nl, long nh, int *pos)
/* --------------------------------------------------------------------- */
{
	int i;
	uint8  m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------ */
sint16 min_si16vector_pos(sint16 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i;
	sint16 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------ */
uint16 min_ui16vector_pos(uint16 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i;
	uint16 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------ */
sint32 min_si32vector_pos(sint32 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i;
	sint32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------ */
uint32 min_ui32vector_pos(uint32 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i;
	uint32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------- */
float32 min_f32vector_pos(float32 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------- */
{
	int i;
	float32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ------------------------------------------------------------------------- */
float64 min_f64vector_pos(float64 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------- */
{
	int i;
	float64 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}

/*
 * ----------------------
 * --- max_vector_pos ---
 * ----------------------
 */

/* --------------------------------------------------------------------- */
sint8 max_si8vector_pos(sint8 *v, long nl, long nh, int *pos)
/* --------------------------------------------------------------------- */
{
	int i;
	sint8 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* --------------------------------------------------------------------- */
uint8 max_ui8vector_pos(uint8 *v, long nl, long nh, int *pos)
/* --------------------------------------------------------------------- */
{
	int i;
	uint8 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* ------------------------------------------------------------------------ */
sint16 max_si16vector_pos(sint16 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i; 
	int16 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	return m;
}
/* ----------------------------------------------------------------------- */
int16 max_ui16vector_pos(uint16 *v, long nl, long nh, int *pos)
/* ----------------------------------------------------------------------- */
{
	int i; 
	uint16 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* --------------------------------------------------------------------- */
int max_si32vector_pos(sint32 *v, long nl, long nh, int *pos)
/* --------------------------------------------------------------------- */
{
	int i;
	sint32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* ------------------------------------------------------------------------ */
uint32 max_ui32vector_pos(uint32 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------ */
{
	int i;
	uint32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* ----------------------------------------------------------------------- */
float32 max_f32vector_pos(float32 *v, long nl, long nh, int *pos)
/* ----------------------------------------------------------------------- */
{
	int i;
	float32 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* ------------------------------------------------------------------------- */
float64 max_f64vector_pos(float64 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------- */
{
	int i;
	float64 m = v[nl];
	int  p = nl;
	
	for(i=nl+1; i<=nh; i++) {
		if(v[i]>m) { m = v[i]; p = i;}
	}
	*pos = p;
	
	return m;
}
/* --------------------------------------------------------------------- */
void beta_sum_rgb32vector(rgb32 *S,long nl,long nh, rgb32 *D)
/* --------------------------------------------------------------------- */
{
	long i;
	int32 r, g, b, s;
	for(i=nl; i<=nh; i++){
		r = S[i].r;
		g = S[i].g;
		b = S[i].b;
		s = r + g + b;
		D[i].r = s;
		D[i].g = s;
		D[i].b = s;
	}
}
/* ----------------------------------------------------------------------- */
void beta_average_rgb32vector(rgb32 *S,long nl,long nh, rgb32 *D)
/* ----------------------------------------------------------------------- */
{
	long i;
	int32 r, g, b, s;
	for(i=nl; i<=nh; i++){
		r = S[i].r;
		g = S[i].g;
		b = S[i].b;
		s = (r + g + b) / 3;
		D[i].r = s;
		D[i].g = s;
		D[i].b = s;
	}
}
/* ------------------------------------------------------------------------ */
void add_i32vector(int32 *S1,long nl,long nh, int32 *S2, int32 *D)
/* ------------------------------------------------------------------------ */
{
	long i;
	for(i=nl; i<=nh; i++) D[i] = S1[i] + S2[i];
}
/* ------------------------------------------------------------------------ */
void sub_i32vector(int32 *S1,long nl,long nh, int32 *S2, int32 *D)
/* ------------------------------------------------------------------------ */
{
	long i;
	for(i=nl; i<=nh; i++) D[i] = S1[i] - S2[i];
}
/* ---------------------------------------------------------------------- */
void mulc_i32vector(int32 *S,long nl,long nh, int32 c, int32 *D)
/* ---------------------------------------------------------------------- */
{
	long i;
	for(i=nl; i<=nh; i++) D[i] = c * S[i];
}
/* ------------------------------------------------------------------------ */
void mulc_rgb32vector(rgb32 *S,long nl,long nh, int32 c, rgb32 *D)
/* ------------------------------------------------------------------------ */
{
	long i;
	
	for(i=nl; i<=nh; i++) {
		D[i].r = c * S[i].r;
		D[i].g = c * S[i].g;
		D[i].b = c * S[i].b;
	}
}
/* ------------------------------------------------------------------------ */
void divc_i32vector(int32 *S,long nl,long nh, int32 c, int32 *D)
/* ------------------------------------------------------------------------ */
{
	long i;
	for(i=nl; i<=nh; i++) D[i] = S[i]  / c;
}
/* -------------------------------------------------------------------------- */
void divc_rgb32vector(rgb32 *S,long nl,long nh, int32 c, rgb32 *D)
/* -------------------------------------------------------------------------- */
{
	long i;
	
	for(i=nl; i<=nh; i++) {
		D[i].r = S[i].r / c;
		D[i].g = S[i].g / c;
		D[i].b = S[i].b / c;
	}
}
/* -------------------------------------------------------------------- */
void cumulleft_i32vector(int32 *S, long nl,long nh, int32 *D)
/* -------------------------------------------------------------------- */
{
	// for histogram
	long i;
	
	for(i=nh-1; i>=nl; i--) {
		D[i] += S[i+1];
	}
}
/* --------------------------------------------------------------------- */
void cumulleft_rgb32vector(rgb32 *S, long nl,long nh, rgb32 *D)
/* --------------------------------------------------------------------- */
{
	// for histogram
	long i;
	
	for(i=nh-1; i>=nl; i--) {
		D[i].r += S[i+1].r;
		D[i].g += S[i+1].g;
		D[i].b += S[i+1].b;
	}
}
/* -------------------------------------------------------------------- */
void cumulright_i32vector(int32 *S, long nl,long nh, int32 *D)
/* -------------------------------------------------------------------- */
{
	// for histogram
	long i;
	
	for(i=nl+1; i<=nh; i++) {
		D[i] += S[i-1];
	}
}
/* ---------------------------------------------------------------------- */
void cumulright_rgb32vector(rgb32 *S, long nl,long nh, rgb32 *D)
/* ---------------------------------------------------------------------- */
{
	// for histogram
	long i;
	
	for(i=nl+1; i<=nh; i++) {
		D[i].r += S[i-1].r;
		D[i].g += S[i-1].g;
		D[i].b += S[i-1].b;
	}
}
/* ----------------------------------------------------------------------------------- */
void mulfrac_i32vector(int32 *S, long nl,long nh, int32 a, int32 b, int32 *D)
/* ----------------------------------------------------------------------------------- */
{
	long i;
	
	for(i=nl; i<=nh; i++) {
		//D[i] = (a * S[i] + b) / b;
		D[i] = (a * S[i]) / b;
	}
}
/* ------------------------------------------------------------------------------------- */
void mulfrac_rgb32vector(rgb32 *S, long nl,long nh, int32 a, int32 b, rgb32 *D)
/* ------------------------------------------------------------------------------------- */
{
	long i;
	
	for(i=nl; i<=nh; i++) {
		//D[i].r = (a * S[i].r + b) / b;
		//D[i].g = (a * S[i].g + b) / b;
		//D[i].b = (a * S[i].b + b) / b;
		D[i].r = (a * S[i].r) / b;
		D[i].g = (a * S[i].g) / b;
		D[i].b = (a * S[i].b) / b;
	}
}
