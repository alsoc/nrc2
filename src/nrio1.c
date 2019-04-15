/* --------------- */
/* --- nrio1.c --- */
/* --------------- */

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

#include "nralloc1.h"
#include "nrio0.h"
#include "nrio1.h"

/*
 * ----------------------
 * --- display_vector ---
 * ----------------------
 */

/* ------------------------------------------------------------------------------- */
void display_bvector(byte *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------- */
void display_si8vector(sint8 *v,long nl,long nh, char *format, char *name)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ---------------------------------------------------------------------------------- */
void display_ui8vector(uint8 *v,long nl,long nh, char *format, char *name)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_si16vector(sint16 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------- */
void display_ui16vector(uint16 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_si32vector(sint32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_ui32vector(uint32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_si64vector(sint64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_ui64vector(uint64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
  long i;

  if(name != NULL) printf("%s", name);

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_f32vector(float32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_f64vector(float64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ---------------------------------------------------------------------------------- */
void display_rgb8vector(rgb8 *v,long nl,long nh, char *format, char *name)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ------------------------------------------------------------------------------------ */
void display_rgbx8vector(rgbx8 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}

/*
 * -----------------------------
 * --- display_vector_number ---
 * -----------------------------
 */

/* -------------------------------------------------------------------------------------- */
void display_bvector_number(byte *v,long nl,long nh, char *format, char *name)
/* -------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------- */
void display_si8vector_number(sint8 *v,long nl,long nh, char *format, char *name)
/* ----------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) puts(name);
  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------- */
void display_ui8vector_number(uint8 *v,long nl,long nh, char *format, char *name)
/* ----------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) puts(name);
  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_si16vector_number(sint16 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) puts(name);
  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_ui16vector_number(uint16 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) puts(name);
  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_si32vector_number(sint32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_ui32vector_number(uint32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_si64vector_number(sint64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_ui64vector_number(uint64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_f32vector_number(float32 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_f64vector_number(float64 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------- */
void display_rgb8vector_number(rgb8 *v,long nl,long nh, char *format, char *name)
/* ----------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_rgbx8vector_number(rgbx8 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------------- */
{
  long i;

  if(name != NULL) printf("%s\n", name);

  for(i=nl; i<=nh; i++) {
    printf(format, i);
  }
  putchar('\n');

  for(i=nl; i<=nh; i++) {
    printf(format, v[i]);
  }
  putchar('\n');
}
/*
 * ------------------------
 * --- display_vector_T ---
 * ------------------------
 */

/* ----------------------------------------------------------------------------------- */
void display_si8vector_T(sint8 *v,int i0, int i1, char *format, char *name)
/* ----------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ----------------------------------------------------------------------------------- */
void display_ui8vector_T(uint8 *v,int i0, int i1, char *format, char *name)
/* ----------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_si16vector_T(sint16 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_ui16vector_T(uint16 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_si32vector_T(sint32 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_ui32vector_T(uint32 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_si64vector_T(sint64 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_ui64vector_T(uint64 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_f32vector_T(float32 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_f64vector_T(float64 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ----------------------------------------------------------------------------------- */
void display_rgb8vector_T(rgb8 *v,int i0, int i1, char *format, char *name)
/* ----------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------- */
void display_rgbx8vector_T(rgbx8 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}

/*
 * -------------------------------
 * --- display_vector_number_T ---
 * -------------------------------
 */

/* ------------------------------------------------------------------------------------------ */
void display_si8vector_number_T(sint8 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------------ */
void display_ui8vector_number_T(uint8 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_si16vector_number_T(sint16 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_ui16vector_number_T(uint16 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_si32vector_number_T(sint32 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_ui32vector_number_T(uint32 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_si64vector_number_T(sint64 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_ui64vector_number_T(uint64 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_f32vector_number_T(float32 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {  
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_f64vector_number_T(float64 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------------ */
void display_rgb8vector_number_T(rgb8 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_rgbx8vector_number_T(rgbx8 *v,int i0, int i1, char *format, char *name)
/* -------------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf("%8d ", i);
        printf(format, v[i]);
        putchar('\n');
    }
}

/*
 * -------------------------------
 * --- display_vector_positive ---
 * -------------------------------
 */

// -------------------------------------------------------------------------------
void display_ui8vector_positive(uint8 *v, int j0, int j1, int iformat, char *name)
// -------------------------------------------------------------------------------
{
    int j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(j=j0; j<=j1; j++) {
        if(v[j]) {
            printf(format, v[j]);
        } else {
            printf("%s", str);
        }
    }
    putchar('\n');
}

// ---------------------------------------------------------------------------------
void display_ui16vector_positive(uint16 *v, int j0, int j1, int iformat, char *name)
// ---------------------------------------------------------------------------------
{
    int j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(j=j0; j<=j1; j++) {
        if(v[j]) {
            printf(format, v[j]);
        } else {
            printf("%s", str);
        }
    }
    putchar('\n');
}
// ---------------------------------------------------------------------------------
void display_ui32vector_positive(uint32 *v, int j0, int j1, int iformat, char *name)
// ---------------------------------------------------------------------------------
{
    int j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(j=j0; j<=j1; j++) {
        if(v[j]) {
            printf(format, v[j]);
        } else {
            printf("%s", str);
        }
    }
    putchar('\n');
}

/*
 * --------------------
 * --- write_vector ---
 * --------------------
 */
/* ------------------------------------------------------------------------------------ */
void write_si8vector(sint8 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------ */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------ */
void write_ui8vector(uint8 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------ */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}

/* -------------------------------------------------------------------------------------- */
void write_si16vector(sint16 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_ui16vector(uint16 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_si32vector(sint32 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_ui32vector(uint32 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_si64vector(sint64 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------- */
void write_i64vector(uint64 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_f32vector(float32 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_f64vector(float64 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ---------------------------------------------------------------------------------- */
void write_rgb8vector(rgb8 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgb8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); } fputc('\n', f);
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_rgbx8vector(rgbx8 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgbx8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); } fputc('\n', f);
  fclose(f);
}
/*
 * ----------------------
 * --- write_vector_T ---
 * ----------------------
 */
/* -------------------------------------------------------------------------------------- */
void write_si8vector_T(sint8 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_ui8vector_T(uint8 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_si16vector_T(sint16 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_ui16vector_T(uint16 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_si32vector_T(sint32 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_ui32vector_T(uint32 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_si64vector_T(sint64 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_ui64vector_T(uint64 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* -------------------------------------------------------------------------------------- */
void write_rgb8vector_T(rgb8 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgb8vector_T"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); fputc('\n', f); }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------- */
void write_rgbx8vector_T(rgbx8 *v,long nl,long nh, char *format, char *filename)
/* ---------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgbx8vector_T"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); fputc('\n', f); }
  fclose(f);
}

/*
 * ---------------------------
 * --- write_vector_number ---
 * ---------------------------
 */
/* --------------------------------------------------------------------------------------------- */
void write_si8vector_number(sint8 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si8vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_ui8vector_number(uint8 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui8vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_si16vector_number(sint16 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si16vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_ui16vector_number(uint16 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui16vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_si32vector_number(sint32 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si32vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_ui32vector_number(uint32 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui32vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_si64vector_number(sint64 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si64vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_ui64vector_number(uint64 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui64vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_f32vector_number(float32 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f32vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_f64vector_number(float64 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f32vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_rgb8vector_number(rgb8 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgb8vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_rgbx8vector_number(rgbx8 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgbx8vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k].r, v[k].g, v[k].b); } fputc('\n', f);
  fclose(f);
}
/*
 * -----------------------------
 * --- write_vector_T_number ---
 * -----------------------------
 */

/* --------------------------------------------------------------------------------------------- */
void write_si8vector_T_number(sint8 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_ui8vector_T_number(uint8 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui8vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_si16vector_T_number(sint16 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_ui16vector_T_number(uint16 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_si32vector_T_number(sint32 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_si32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_ui32vector_T_number(uint32 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_ui32vector_T_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_si64vector_T_number(sint64 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_i64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_ui64vector_T_number(uint64 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_i64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_f32vector_T_number(float32 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f32vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_f64vector_T_number(float64 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f64vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------- */
void write_rgb8vector_T_number(rgb8 *v,long nl,long nh, char *format, char *filename)
/* ------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgb8vector_T"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k].r, v[k].g, v[k].b); fputc('\n', f); }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_rgbx8vector_T_number(rgbx8 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_rgb8vector_T"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k].r, v[k].g, v[k].b); fputc('\n', f); }
  fclose(f);
}

/*
 * --------------------
 * --- fread_vector ---
 * --------------------
 */

/* ---------------------------------------------------------------------- */
void fread_si8vector(char *filename, sint8 *v,long nl,long nh)
/* ---------------------------------------------------------------------- */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_si8vector");

  nread = fread(v+nl, sizeof(sint8), ncol, f);
  if(nread != ncol) nrerror("fread_si8vector can't read the whole vector");
  fclose(f);
}
/* ---------------------------------------------------------------------- */
void fread_ui8vector(char *filename, uint8 *v,long nl,long nh)
/* ---------------------------------------------------------------------- */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_ui8vector");

  nread = fread(v+nl, sizeof(uint8), ncol, f);
  if(nread != ncol) nrerror("fread_ui8vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_si16vector(char *filename, sint16 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_si16vector");

  nread = fread(v+nl, sizeof(int16), ncol, f);
  if(nread != ncol) nrerror("fread_si16vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_ui16vector(char *filename, uint16 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_ui16vector");

  nread = fread(v+nl, sizeof(int16), ncol, f);
  if(nread != ncol) nrerror("fread_ui16vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_si32vector(char *filename, sint32 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_si32vector");

  nread = fread(v+nl, sizeof(sint32), ncol, f);
  if(nread != ncol) nrerror("fread_si32vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_ui32vector(char *filename, uint32 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_ui32vector");

  nread = fread(v+nl, sizeof(uint32), ncol, f);
  if(nread != ncol) nrerror("fread_ui32vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_si64vector(char *filename, sint64 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_si64vector");

  nread = fread(v+nl, sizeof(sint64), ncol, f);
  if(nread != ncol) nrerror("fread_si64vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_ui64vector(char *filename, uint64 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_ui64vector");

  nread = fread(v+nl, sizeof(uint64), ncol, f);
  if(nread != ncol) nrerror("fread_ui64vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_f32vector(char *filename, float32 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_f32vector");

  nread = fread(v+nl, sizeof(float32), ncol, f);
  if(nread != ncol) nrerror("fread_f32vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_f64vector(char *filename, float64 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_f64vector");

  nread = fread(v+nl, sizeof(float64), ncol, f);
  if(nread != ncol) nrerror("fread_f64vector can't read the whole vector");
  fclose(f);
}
/* ---------------------------------------------------------------------- */
void fread_rgb8vector(char *filename, rgb8 *v,long nl,long nh)
/* ---------------------------------------------------------------------- */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_rgb8vector");

  nread = fread(v+nl, sizeof(float32), ncol, f);
  if(nread != ncol) nrerror("fread_rgb8vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_rgbx8vector(char *filename, rgbx8 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_rgbx8vector");

  nread = fread(v+nl, sizeof(float32), ncol, f);
  if(nread != ncol) nrerror("fread_rgbx8vector can't read the whole vector");
  fclose(f);
}
/* ------------------- */
/* -- fwrite_vector -- */
/* ------------------- */
/* ---------------------------------------------------------------------- */
void fwrite_si8vector(sint8 *v,long nl,long nh,char *filename)
/* ---------------------------------------------------------------------- */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_si8vector"); 
  fwrite(v+nl, sizeof(sint8), ncol, f);
  fclose(f);
}
/* ---------------------------------------------------------------------- */
void fwrite_ui8vector(uint8 *v,long nl,long nh,char *filename)
/* ---------------------------------------------------------------------- */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_ui8vector"); 
  fwrite(v+nl, sizeof(uint8), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_si16vector(sint16 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_si16vector"); 
  fwrite(v+nl, sizeof(sint16), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------- */
void fwrite_ui16vector(uint16 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------- */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_ui16vector"); 
  fwrite(v+nl, sizeof(uint16), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_si32vector(sint32 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_si32vector"); 
  fwrite(v+nl, sizeof(sint32), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_ui32vector(uint32 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_ui32vector"); 
  fwrite(v+nl, sizeof(uint32), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_si64vector(sint64 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_si64vector");
  fwrite(v+nl, sizeof(sint64), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_ui64vector(uint64 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_ui-'vector");
  fwrite(v+nl, sizeof(uint64), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_f32vector(float32 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in f32write_vector"); 
  fwrite(v+nl, sizeof(float32), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_f64vector(float64 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in f64write_vector"); 
  fwrite(v+nl, sizeof(float64), ncol, f);
  fclose(f);
}
/* ---------------------------------------------------------------------- */
void fwrite_rgb8vector(rgb8 *v,long nl,long nh,char *filename)
/* ---------------------------------------------------------------------- */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in write_rgb8vector"); 
  fwrite(v+nl, sizeof(rgb8), ncol, f);
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_rgbx8vector(rgbx8 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in write_rgbx8vector");
  fwrite(v+nl, sizeof(rgbx8), ncol, f);
  fclose(f);
}
