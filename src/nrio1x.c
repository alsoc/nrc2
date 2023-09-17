/* ---------------- */
/* --- nrio1x.c --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

#include <stdlib.h>
#include <stdio.h>

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrkernel.h"
#include "nrmacro.h"

#include "nralloc1.h"
#include "nrio1x.h"

/* ---------------------------------------------------------------------------------------------------------- */
void display_bvector_circular(byte *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------- */
void display_si16vector_circular(sint16 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name); 

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* --------------------------------------------------------------------------------------------------------- */
void display_ui32vector_circular(uint32 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------- */
void display_f32vector_circular(float32 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------ */
void display_f64vector_circular(float64 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------ */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_bvector_circular_number(byte *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#');
  for(i=c0; i<=c1; i++) {
    printf(format,   i%n+nl);
  }
  putchar('\n');
  putchar(' ');
  for(i=c0; i<=c1; i++) {
    printf(format, v[i%n+nl]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_si16vector_circular_number(sint16 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#'); for(i=c0; i<=c1; i++) { printf(format,   i%n+nl); } putchar('\n');
  putchar(' ');  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
void display_ui32vector_circular_number(uint32 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#'); for(i=c0; i<=c1; i++) { printf(format,   i%n+nl); } putchar('\n');
  putchar(' '); for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_f32vector_circular_number(float32 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#'); for(i=c0; i<=c1; i++) { printf(format,   i%n+nl); } putchar('\n');
  putchar(' ');  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------- */
void display_dvector_circular_number(float64 *v,long nl,long nh, long c0, long c1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#'); for(i=c0; i<=c1; i++) { printf(format,   i%n+nl); } putchar('\n');
  putchar(' '); for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}

/* ------------------------------------------------------------------------------------- */
void display_bvector_cycle(byte *v,long nl,long nh, const char *format, const char *name)
/* ------------------------------------------------------------------------------------- */
{
  long i;
  uint8 first, next;
  uint8 *displayed;

  if(name != NULL) printf("%s", name);

  displayed = ui8vector0(nl, nh);
  
  for(i=nl; i<=nh; i++) {
    if(!displayed[i]) {
      displayed[i] = 1;
      printf(format, i);
      first = (byte) i;
      next = v[i];
      while(first != next) {
        displayed[next] = 1;
        printf(format, next);
        next = v[next];
      }
      putchar('\n');
    }
  }
  putchar('\n');
  free_ui8vector(displayed, nl, nh);
}
/* -------------------------------------------------------------------------------------- */
void display_si16vector_cycle(sint16 *v,long nl,long nh, const char *format, const char *name)
/* -------------------------------------------------------------------------------------- */
{
  long i;
  uint16 first, next;
  uint8 *displayed;

  if(name != NULL) printf("%s", name);

  displayed = ui8vector0(nl, nh);
  
  for(i=nl; i<=nh; i++) {
    if(!displayed[i]) {
      displayed[i] = 1;
      printf(format, i);
      first = (sint16) i;
      next = v[i];
      while(first != next) {
        displayed[next] = 1;
        printf(format, next);
        next = v[next];
      }
      putchar('\n');
    }
  }
  putchar('\n');
  free_ui8vector(displayed, nl, nh);
}
/* ---------------------------------------------------------------------------------------- */
void display_ui16vector_cycle(uint16 *v,long nl,long nh, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------- */
{
  long i;
  uint16 first, next;
  uint8 *displayed;

  if(name != NULL) printf("%s", name);

  displayed = ui8vector0(nl, nh);
  
  for(i=nl; i<=nh; i++) {
    if(!displayed[i]) {
      displayed[i] = 1;
      printf(format, i);
      first = (uint16) i;
      next = v[i];
      while(first != next) {
        displayed[next] = 1;
        printf(format, next);
        next = v[next];
      }
      putchar('\n');
    }
  }
  putchar('\n');
  free_ui8vector(displayed, nl, nh);
}

/* --------------------------- */
/* -- write_vector_circular -- */
/* --------------------------- */
/* ------------------------------------------------------------------------------------------------------------ */
void write_bvector_circular(byte *v,long nl,long nh, long c0, long c1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
  long i, n=nh-nl+1;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_bvector_circular"); }

  for(i=c0; i<=c1; i++) { fprintf(f, format, v[i%n+nl]);} fputc('\n', f);
  fclose(f);
}
/* ------------------------------- */
/* --- display_vector_endline1 --- */
/* ------------------------------- */
/* ------------------------------------------------------------------------------------------ */
void display_bvector_endline1(byte *v, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------ */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* --------------------------------------------------------------------------------------------- */
void display_i16vector_endline1(int16 *v, long j0, long j1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* ----------------------------------------------------------------------------------------------- */
void display_ui16vector_endline1(uint16 *v, long j0, long j1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* --------------------------------------------------------------------------------------------- */
void display_i32vector_endline1(int32 *v, long j0, long j1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* ----------------------------------------------------------------------------------------------- */
void display_ui32vector_endline1(uint32 *v, long j0, long j1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* ---------------------------------------------------------------------------------------------- */
void display_i64vector_endline1(int64 *v,  long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
/* ----------------------------------------------------------------------------------------- */
void display_ivector_endline1(int *v, long j0, long j1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------- */
{
    if(name != NULL) puts(name);
    
    int n = v[j0-1];
    for(int j=j0; j<=j0+n-1; j++) {
        printf(format, v[j]);
    }
    putchar('\n');
}
