/* --------------- */
/* --- nrio3.c --- */
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
#include "nrio3.h"


/* -------------------- */
/* --- display_cube --- */
/* -------------------- */
/* ------------------------------------------------------------------------------------------------------------------------- */
void display_i8cube(int8 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* --------------------------------------------------------------------------------------------------------------------------- */
void display_i16cube(int16 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* --------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* ----------------------------------------------------------------------------------------------------------------------------- */
void display_ui16cube(uint16 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ----------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* --------------------------------------------------------------------------------------------------------------------------- */
void display_i32cube(int32 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* --------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* ----------------------------------------------------------------------------------------------------------------------------- */
void display_ui32cube(uint32 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ----------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* --------------------------------------------------------------------------------------------------------------------------- */
void display_i64cube(int64 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* --------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
/* ----------------------------------------------------------------------------------------------------------------------------- */
void display_f32cube(float32 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ----------------------------------------------------------------------------------------------------------------------------- */
{
  long i,j,k;

  if(name != NULL) puts(name);

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        printf(format, c[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}

/* ---------------- */
/* -- write_cube -- */
/* ---------------- */
/* ------------------------------------------------------------------------------------------------------------------------------ */
void write_i8cube(int8 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* ------------------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i8cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------------- */
void write_i16cube(int16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* -------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------------------- */
void write_ui16cube(uint16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* ---------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------------- */
void write_i32cube(int32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* -------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------------------- */
void write_ui32cube(uint32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* ---------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------------- */
void write_i64cube(int64 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* -------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------------------- */
void write_f32cube(float32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* ---------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_f32cube");
  }

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      for(j=ncl; j<=nch; j++) {
        fprintf(f, format, c[k][i][j]);
      }
      fputc('\n', f);
    }
    fputc('\n', f);
  }

  fclose(f);
}

/* ---------------- */
/* -- fread_cube -- */
/* ---------------- */
/* ----------------------------------------------------------------------------------------------------------- */
void fread_i8cube(char *filename, int8 ***c,long ndl,long ndh,long nrl,long nrh,long ncl, long nch)
/* ----------------------------------------------------------------------------------------------------------- */
{
  long  i, k;
  long ncol = nch-ncl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL)
    nrerror("Can't open file in fread_i8cube");


  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      nread = fread( &(c[k][i][ncl]), sizeof(int8), ncol, f);
      if(nread != ncol) nrerror("fread_i8cube : can't write data");
    }
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------- */
void fread_i16cube(char *filename, int16 ***c,long ndl,long ndh,long nrl,long nrh,long ncl, long nch)
/* ------------------------------------------------------------------------------------------------------------- */
{
  long  i, k;
  long ncol = nch-ncl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL)
    nrerror("Can't open file in fread_i16cube");

  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      nread = fread( &(c[k][i][ncl]), sizeof(int16), ncol, f);
      if(nread != ncol) nrerror("fread_i16cube : can't write data");
    }
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------- */
void fread_ui16cube(char *filename, uint16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------------------------------------- */
{
  long  i, k;
  long ncol = nch-ncl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL)
    nrerror("Can't open file in fread_ui16cube");


  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      nread = fread( &(c[k][i][ncl]), sizeof(uint16), ncol, f);
      if(nread != ncol) nrerror("fread_ui16cube : can't write data");
    }
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------ */
void fread_i32cube(char *filename, int32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  long  i, k;
  long ncol = nch-ncl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL)
    nrerror("Can't open file in fread_i32cube");


  for(k=ndl; k<=ndh; k++) {
    for(i=nrl; i<=nrh; i++) {
      nread = fread( &(c[k][i][ncl]), sizeof(int32), ncol, f);
      if(nread != ncol) nrerror("fread_i32cube : can't write data");
    }
  }
  fclose(f);
}
/* --------------- */
/* --- nrio3.h --- */
/* --------------- */

#ifndef __NRIO3_H__
#define __NRIO3_H__

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
/* ------------------ */
/* --- fread_cube --- */
/* ------------------ */

void fread_ui32cube(char *filename, uint32  ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_i64cube (char *filename, int64   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_f32cube (char *filename, float32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);

/* ----------------- */
/* -- fwrite_cube -- */
/* ----------------- */

void fwrite_i8cube(int8     ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);
void fwrite_i16cube(int16   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);
void fwrite_ui16cube(uint16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);
void fwrite_i32cube(int32   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);
void fwrite_ui32cube(uint32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);
void fwrite_i64cube(int64   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *filename);

#ifdef __cplusplus
}
#endif

#endif /* __NRIO3_H__ */
