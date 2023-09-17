/* ---------------- */
/* --- nrio2x.c --- */
/* ---------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
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

#include "nrio0.h"
#include "nralloc1.h"
#include "nralloc2.h"
#include "nrio1.h"
#include "nrio2.h"
#include "nrio2x.h"

/* ------------------------------ */
/* --- display_matrix_endline --- */
/* ------------------------------ */
/* ---------------------------------------------------------------------------------------------------------- */
void display_matrix_endline(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  byte *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* -------------------------------------------------------------------------------------------------------------- */
void display_i16matrix_endline(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  int16 *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
void display_ui16matrix_endline(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  uint16 *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* -------------------------------------------------------------------------------------------------------------- */
void display_i32matrix_endline(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  int32 *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_ui32matrix_endline(uint32 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  uint32 *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* -------------------------------------------------------------------------------------------------------------- */
void display_i64matrix_endline(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  int64 *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------- */
void display_imatrix_endline(int **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int n = (i1-i0+1) * (j1-j0+1);
  int *p = &m[i0][j0];

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j0+n; j++) {
      printf(format, *p++);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------- */
/* --- display_matrix_endline0 --- */
/* ------------------------------- */
/* ------------------------------------------------------------------------------------------------------------- */
//void display_bmatrix_endline0(byte **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ------------------------------------------------------------------------------------------ */
void display_bmatrix_endline0(byte **m, long i0, long i1,const char *format, const char *name)
/* ------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* --------------------------------------------------------------------------------------------------------------- */
//void display_i16matrix_endline0(int16 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ---------------------------------------------------------------------------------------------- */
void display_i16matrix_endline0(int16 **m, long i0, long i1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
//void display_ui16matrix_endline0(uint16 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ------------------------------------------------------------------------------------------------ */
void display_ui16matrix_endline0(uint16 **m, long i0, long i1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* --------------------------------------------------------------------------------------------------------------- */
//void display_i32matrix_endline0(int32 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ---------------------------------------------------------------------------------------------- */
void display_i32matrix_endline0(int32 **m, long i0, long i1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
//void display_ui32matrix_endline0(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ----------------------------------------------------------------------------------------------- */
void display_ui32matrix_endline0(uint32 **m,long i0, long i1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* --------------------------------------------------------------------------------------------- */
void display_i64matrix_endline0(int64 **m, long i0, long i1, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------- */
{
  int i, j;
  int64 n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------- */
//void display_imatrix_endline0(int **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------- */
/*{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}*/
/* ------------------------------------------------------------------------------------------ */
void display_imatrix_endline0(int **m, long i0, long i1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d] ", i);
    n = m[i][0];
    for(j=1; j<=+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------- */
/* --- display_matrix_endline1 --- */
/* ------------------------------- */
/* ------------------------------------------------------------------------------------------------------------- */
void display_bmatrix_endline1(byte **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------- -------------------------------------------------------- */
void display_i16matrix_endline1(int16 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_ui16matrix_endline1(uint16 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
void display_i32matrix_endline1(int32 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_ui32matrix_endline1(uint32 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------- */
void display_i64matrix_endline1(int64 **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int64 n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------ */
void display_imatrix_endline1(int **m, long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* -------------------------------------- */
/* --- display_matrix_number_endline0 --- */
/* -------------------------------------- */
/* ------------------------------------------------------------------------------------------------------------------- */
void display_bmatrix_number_endline0(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i16matrix_number_endline0(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void display_ui16matrix_number_endline0(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i32matrix_number_endline0(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void display_ui32matrix_number_endline0(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i64matrix_number_endline0(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int64 n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_imatrix_number_endline0(int **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* -------------------------------------- */
/* --- display_matrix_number_endline1 --- */
/* -------------------------------------- */
/* ------------------------------------------------------------------------------------------------------------------- */
void display_bmatrix_number_endline1(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i16matrix_number_endline1(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void display_ui16matrix_number_endline1(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i32matrix_number_endline1(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void display_ui32matrix_number_endline1(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void display_i64matrix_number_endline1(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i, j;
  int64 n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_imatrix_number_endline1(int **m,long i0, long i1, long j0, long j1, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j, n;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    printf("[%3d]", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
/* ------------------------- */
/* --- display_trimatrix --- */
/* ------------------------- */
/* ------------------------------------------------------------------------------------------------------------------ */
void display_btrimatrix(byte **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j;
  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* --------------------------------------------------------------------------------------------------------------------- */
void display_i16trimatrix(int16 **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------------- */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------------- */
void display_ui16trimatrix(uint16 **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_itrimatrix(int **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* --------------------------------------------------------------------------------------------------------------------- */
void display_i32trimatrix(int32 **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------------- */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_f32trimatrix(float32 **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------------ */
void display_f64trimatrix(float64 **m, long i0, long i1, long j0, long j1, long step, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i, j;

  if(name != NULL) puts(name);

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      printf(format, m[i][j]);
    }
    putchar('\n');
    j1 += step;
  }
  putchar('\n');
}

/* ----------------------- */
/* --- write_trimatrix --- */
/* ----------------------- */
/* ----------------------------------------------------------------------------------------------------------------- */
void write_btrimatrix(byte **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_btrimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}

/* -------------------------------------------------------------------------------------------------------------------- */
void write_i16trimatrix(int16 **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16trimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void write_ui16trimatrix(uint16 **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16trimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------- */
void write_itrimatrix(int **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_itrimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i32trimatrix(int32 **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32trimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void write_f32trimatrix(float32 **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_f32trimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------------- */
void write_f64trimatrix(float64 **m,long i0,long i1,long j0, long j1, long step, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_f64trimatrix");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
    j1 += step;
  }
  fputc('\n', f);

  fclose(f);
}
/* ---------------------------- */
/* --- write_matrix_endline --- */
/* ---------------------------- */
/* ------------------------------------------------------------------------------------------------------------ */
void write_bmatrix_endline(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  byte *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_bmatrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------- */
void write_i16matrix_endline(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  int16 *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16matrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------ */
void write_ui16matrix_endline(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  uint16 *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16matrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------- */
void write_i32matrix_endline(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  int32 *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32matrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------ */
void write_ui32matrix_endline(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  uint32 *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32matrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------------- */
void write_i64matrix_endline(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  int64 *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64matrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_imatrix_endline(int **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  //int n = (i1-i0+1) * (j1-j0+1);
  int *p = &m[i0][j0];

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_imatrix_endline");
  }

  for(i=i0; i<=i1; i++) {
    for(j=j0; j<=j1; j++) {
      fprintf(f, format, *p++);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------ */
/* --- write_imatrix_endline0 --- */
/* ------------------------------ */
/* -------------------------------------------------------------------------------------------------------------- */
void write_bmatrix_endline0(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_bmatrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i16matrix_endline0(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_endline0(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i32matrix_endline0(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i64matrix_endline0(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  int64 n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_endline0(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------- */
void write_imatrix_endline0(int **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_imatrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------ */
/* --- write_imatrix_endline1 --- */
/* ------------------------------ */
/* -------------------------------------------------------------------------------------------------------------- */
void write_bmatrix_endline1(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_bmatrix_endline1");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i16matrix_endline1(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_endline1(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i32matrix_endline1(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_endline1(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_i64matrix_endline1(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  int i,j;
  int64 n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64matrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------- */
void write_imatrix_endline1(int **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_imatrix_endline0");
  }

  for(i=i0; i<=i1; i++) {
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------- */
/* --- write_imatrix_number_endline0 --- */
/* ------------------------------------- */
/* --------------------------------------------------------------------------------------------------------------------- */
void write_bmatrix_number_endline0(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_bmatrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------- */
void write_i16matrix_number_endline0(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_number_endline0(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i32matrix_number_endline0(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_number_endline0(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i64matrix_number_endline0(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  int64 n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------- */
void write_imatrix_number_endline0(int **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_imatrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0];
    for(j=j0; j<=j0+n; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------- */
/* --- write_imatrix_number_endline1 --- */
/* ------------------------------------- */
/* --------------------------------------------------------------------------------------------------------------------- */
void write_bmatrix_number_endline1(byte **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_bmatrix_number_endline1");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i16matrix_number_endline1(int16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i16matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_number_endline1(uint16 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui16matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i32matrix_number_endline1(int32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i32matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_number_endline1(uint32 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_ui32matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------------ */
void write_i64matrix_number_endline1(int64 **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------------ */
{
  int i,j;
  int64 n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_i64matrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------------- */
void write_imatrix_number_endline1(int **m,long i0, long i1, long j0, long j1, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------------- */
{
  int i,j, n;
  
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_imatrix_number_endline0");
  }

  for(i=i0; i<=i1; i++) {
    fprintf(f, "[%3d] ", i);
    n = m[i][j0-1];
    for(j=j0; j<=j0+n-1; j++) {
      fprintf(f, format, m[i][j]);
    }
    fputc('\n', f);
  }
  fclose(f);
}
/* ---------------------- */
/* -- fwrite_trimatrix -- */
/* ---------------------- */
/* ---------------------------------------------------------------------------------------------------- */
void fwrite_btrimatrix(byte **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* ---------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_btrimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(byte), ncol, f);
    ncol += step;
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------- */
void fwrite_i16trimatrix(int16 **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* ------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_i16trimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(int16), ncol, f);
    ncol += step;
  }
  fclose(f);
}
/* --------------------------------------------------------------------------------------------------------- */
void fwrite_ui16trimatrix(uint16 **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* --------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_ui16trimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(uint16), ncol, f);
    ncol += step;
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------- */
void fwrite_i32trimatrix(int32 **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* ------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_i32trimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(int32), ncol, f);
    ncol += step;
  }
  fclose(f);
}
/* --------------------------------------------------------------------------------------------------------- */
void fwrite_f32trimatrix(float32 **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* --------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_f32trimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(float32), ncol, f);
    ncol += step;
  }
  fclose(f);
}
/* --------------------------------------------------------------------------------------------------------- */
void fwrite_f64trimatrix(float64 **m,long i0,long i1,long j0, long j1, long step, const char *filename)
/* --------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in fwrite_f64trimatrix");

  for(i=i0; i<=i1; i++) {
    fwrite(m[i]+j0, sizeof(float64), ncol, f);
  }
  fclose(f);
}

/* --------------------- */
/* -- fread_trimatrix -- */
/* --------------------- */
/* --------------------------------------------------------------------------------------------------- */
void fread_btrimatrix(const char *filename, byte **m,long i0,long i1,long j0, long j1, long step)
/* --------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_btrimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(byte), ncol, f);
    if(nread != ncol) nrerror("fread_btrimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------ */
void fread_i16trimatrix(const char *filename, int16 **m,long i0,long i1,long j0, long j1, long step)
/* ------------------------------------------------------------------------------------------------------ */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_i16trimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(int16), ncol, f);
    if(nread != ncol) nrerror("fread_i16trimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------- */
void fread_ui16trimatrix(const char *filename, uint16 **m,long i0,long i1,long j0, long j1, long step)
/* -------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_ui16trimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(uint16), ncol, f);
    if(nread != ncol) nrerror("fread_ui16trimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------- */
void fread_itrimatrix(const char *filename, int **m,long i0,long i1,long j0, long j1, long step)
/* -------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_itrimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(int), ncol, f);
    if(nread != ncol) nrerror("fread_itrimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* ------------------------------------------------------------------------------------------------------ */
void fread_i32trimatrix(const char *filename, int32 **m,long i0,long i1,long j0, long j1, long step)
/* ------------------------------------------------------------------------------------------------------ */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_i32trimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(byte), ncol, f);
    if(nread != ncol) nrerror("fread_i32trimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------- */
void fread_f32trimatrix(const char *filename, float32 **m,long i0,long i1,long j0, long j1, long step)
/* -------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_f32trimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(byte), ncol, f);
    if(nread != ncol) nrerror("fread_f32trimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
/* -------------------------------------------------------------------------------------------------------- */
void fread_f64trimatrix(const char *filename, float64 **m,long i0,long i1,long j0, long j1, long step)
/* -------------------------------------------------------------------------------------------------------- */
{
  long  i, ncol = j1-j0+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_f64trimatrix"); 

  for(i=i0; i<=i1; i++) {
    nread = fread(m[i]+j0, sizeof(byte), ncol, f);
    if(nread != ncol) nrerror("fread_f64trimatrix : can't read data");
    ncol += step;
  }
  fclose(f);
}
