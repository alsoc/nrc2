/* ------------------ */
/* --- nralloc1.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * + 2022, MILLET Maxime, LIP6 Sorbonne University
 * 
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
 */

/*
 * this code is based on the "Numerical Recipes in C 2nd edition" nrutil.c nrutil.h files from
 * William H. Press, Saul A. Teukolsky, William T. Vetterling, Brian P. Flannery
 *
 * The original code is not-copyrighted.
 * The original routines are placed into the public domain
 * (see Appendix B: utility routines, pp 964)
 * for more information, visit http://www.nr.com
*/


#include <stdio.h>
#include <stdlib.h>

#include <string.h> // memcpy
#include <math.h> // fabs

#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"
#include "nralloc1.h"

#include "nrfp16.h"
// --------------
// -- nralloc1 --
// --------------

/* ------------------------------------------ */
float16* f16vector(long nl, long nh)
/* ------------------------------------------ */
{
    float16 *v;
    
    v=(float16 *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(float16)));
    if (!v) nrerror("allocation failure in f16vector()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* --------------------------------------------- */
float16* f16vector0(long nl, long nh)
/* --------------------------------------------- */
/* allocate a float16 vector with subscript range v[nl..nh] */
{
    float16 *v;
    
    v=(float16 *) calloc ( (size_t) (nh-nl+1+NR_END), sizeof(float16) );
    if (!v) nrerror("allocation failure in f16vector0()");
    if(!v) return NULL;
    return v-nl+NR_END;
}
/* ---------------------------------------------------- */
void free_f16vector(float16 *v, long nl, long nh)
/* ---------------------------------------------------- */
{
    free((FREE_ARG) (v+nl-NR_END));
}

// --------------
// -- nralloc2 --
// --------------

/* ------------------------------------------------------------------- */
float16** f16matrix(long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------- */
/* allocate a float matrix with subscript range m[nrl..nrh][ncl..nch] */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float16 **m;
    
    /* allocate pointers to rows */
    m=(float16 **) malloc((size_t)((nrow+NR_END)*sizeof(float16*)));
    if (!m) nrerror("allocation failure 1 in f16matrix()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float16 *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(float16)));
    if (!m[nrl]) nrerror("allocation failure 2 in f16matrix()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------- */
float16** f16matrix0(long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------- */
{
    long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
    float16 **m;
    
    /* allocate pointers to rows */
    m=(float16 **) malloc((size_t)((nrow+NR_END)*sizeof(float16*)));
    if (!m) nrerror("allocation failure 1 in f16matrix0()");
    m += NR_END;
    m -= nrl;
    
    /* allocate rows and set pointers to them */
    m[nrl]=(float16 *) calloc((size_t)(nrow*ncol+NR_END),sizeof(float16));
    if (!m[nrl]) nrerror("allocation failure 2 in f16matrix0()");
    m[nrl] += NR_END;
    m[nrl] -= ncl;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
    
    /* return pointer to array of pointers to rows */
    return m;
}
/* -------------------------------------------------------------------------------- */
void free_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (m[nrl]+ncl-NR_END));
    free((FREE_ARG) (m+nrl-NR_END));
}

// --------------
// -- nralloc3 --
// --------------

/* -------------------------------------------------------------------------------------- */
float16*** f16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    float16 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(float16***) malloc((size_t)((ndep+NR_END)*sizeof(float16**)));
    if (!t) nrerror("allocation failure 1 in f16cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(float16**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(float16*)));
    if (!t[ndl]) nrerror("allocation failure 2 in f16cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(float16*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(float16)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in f16cube()");
    t[ndl][nrl] += NR_END;
    t[ndl][nrl] -= ncl;
    
    for(j=nrl+1;j<=nrh;j++) t[ndl][j]=t[ndl][j-1]+nrol;
    for(i=ndl+1;i<=ndh;i++) {
        t[i]=t[i-1]+nrow;
        t[i][nrl]=t[i-1][nrl]+nrow*nrol;
        for(j=nrl+1;j<=nrh;j++) t[i][j]=t[i][j-1]+nrol;
    }
    /* return pointer to array of pointers to rows */
    return t;
}
/* --------------------------------------------------------------------------------------------- */
void free_f16cube(float16 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}

// --------------
// -- nrarith0 --
// --------------

float16 f16min (float16 x1, float16 x2)                                     {if (x1<x2)  return x1; else  return x2;}
float16 f16min2(float16 x1, float16 x2)                                     {if (x1<x2)  return x1; else  return x2;}
float16 f16min3(float16 x1, float16 x2, float16 x3)                         {return f16min2(f16min2(x1, x2), x3);}
float16 f16min4(float16 x1, float16 x2, float16 x3, float16 x4)             {return f16min2(f16min2(x1, x2), f16min2(x3, x4));}
float16 f16min5(float16 x1, float16 x2, float16 x3, float16 x4, float16 x5) {return f16min3(f16min2(x1, x2), f16min2(x3, x4), x5);}
float16 f16max (float16 x1, float16 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float16 f16max2(float16 x1, float16 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float16 f16max3(float16 x1, float16 x2, float16 x3)                         {return f16max2(f16max2(x1, x2), x3);}
float16 f16max4(float16 x1, float16 x2, float16 x3, float16 x4)             {return f16max2(f16max2(x1, x2), f16max2(x3, x4));}
float16 f16max5(float16 x1, float16 x2, float16 x3, float16 x4, float16 x5) {return f16max3(f16max2(x1, x2), f16max2(x3, x4), x5);}

// --------------
// -- nrarith1 --
// --------------

/* ----------------------------------------------------------- */
float16 min_f16vector(float16 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
    int i;
    float16 m;
    
    m = v[nl];
    for(i=nl+1; i<=nh; i++) {
        if(v[i]<m) m = v[i];
    }
    return m;
}
/* ----------------------------------------------------------- */
float16 max_f16vector(float16 *v, long nl, long nh)
/* ----------------------------------------------------------- */
{
    int i;
    float16 m;
    
    m = v[nl];
    for(i=nl+1; i<=nh; i++) {
        if(v[i]>m) m = v[i];
    }
    return m;
}
/* ------------------------------------------------------------------------- */
float16 min_f16vector_pos(float16 *v, long nl, long nh, int *pos)
/* ------------------------------------------------------------------------- */
{
    int i;
    float16 m = v[nl];
    int  p = nl;
    
    for(i=nl+1; i<=nh; i++) {
        if(v[i]>m) { m = v[i]; p = i;}
    }
    *pos = p;
    return m;
}
/* ----------------------------------------------------------------------- */
float16 max_f16vector_pos(float16 *v, long nl, long nh, int *pos)
/* ----------------------------------------------------------------------- */
{
    int i;
    float16 m = v[nl];
    int  p = nl;
    
    for(i=nl+1; i<=nh; i++) {
        if(v[i]>m) { m = v[i]; p = i;}
    }
    *pos = p;
    
    return m;
}

// --------------
// -- nrarith2 --
// --------------

/* ---------------------------------------------------------------------------------- */
float16 min_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    int i, j;
    float16 minimum = m[nrl][ncl];
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            if(m[i][j]<minimum) minimum = m[i][j];
        }
    }
    return minimum;
}
/* ---------------------------------------------------------------------------------- */
float16 max_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    int i, j;
    float16 maximum = m[nrl][ncl];
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            if(m[i][j]>maximum) maximum = m[i][j];
        }
    }
    return maximum;
}
/* -------------------------------------------------------------------------------------------------------- */
void add_f16matrix(float16 **X, long nrl,long nrh, long ncl, long nch, float16 **Y, float16 **Z)
/* -------------------------------------------------------------------------------------------------------- */
{
    long i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void addc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i,j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            Z[i][j] = X[i][j] + y;
        }
    }
}
/* -------------------------------------------------------------------------------------------------------- */
void sub_f16matrix(float16 **X, long nrl,long nrh, long ncl, long nch, float16 **Y, float16 **Z)
/* -------------------------------------------------------------------------------------------------------- */
{
    long i, j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            Z[i][j] = X[i][j] - Y[i][j];
        }
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void subc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i,j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            Z[i][j] = X[i][j] - y;
        }
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void mulc_f16matrix(float16 **X,long nrl,long nrh, long ncl, long nch, float16 y, float16 **Z)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i,j;
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            Z[i][j] = X[i][j] * y;
        }
    }
}

// -----------
// -- nrio1 --
// -----------

/* ------------------------------------------------------------------------------------ */
void display_f16vector(float16 *v,long nl,long nh, char *format, char *name)
/* ------------------------------------------------------------------------------------ */
{
    long i;
    
    if(name != NULL) printf("%s", name);
    
    for(i=nl; i<=nh; i++) {
        printf(format, v[i]);
    }
    putchar('\n');
}
/* ------------------------------------------------------------------------------------------- */
void display_f16vector_number(float16 *v,long nl,long nh, char *format, char *name)
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
/* ------------------------------------------------------------------------------------- */
void display_f16vector_T(float16 *v,int i0, int i1, char *format, char *name)
/* ------------------------------------------------------------------------------------- */
{
    int i;
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {           
        printf(format, v[i]);
        putchar('\n');
    }
}
/* -------------------------------------------------------------------------------------------- */
void display_f16vector_number_T(float16 *v,int i0, int i1, char *format, char *name)
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
/* -------------------------------------------------------------------------------------- */
void write_f16vector(float16 *v,long nl,long nh, char *format, char *filename)
/* -------------------------------------------------------------------------------------- */
{
  long  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void write_f16vector_number(float16 *v,long nl,long nh, char *format, char *filename)
/* --------------------------------------------------------------------------------------------- */
{
  int k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f16vector_number"); }
  for(k=nl; k<=nh; k++) { fprintf(f, format, k,k,k);} fputc('\n', f);
  for(k=nl; k<=nh; k++) { fprintf(f, format, v[k]); } fputc('\n', f);
  fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void write_f16vector_T_number(float16 *v,long nl,long nh, char *format, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
  int  k;
  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) { nrerror("Can't open file in write_f16vector"); }
  for(k=nl; k<=nh; k++) { fprintf(f, "%3d ", k); fprintf(f, format, v[k]); fputc('\n', f); }
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fread_f16vector(char *filename, float16 *v,long nl,long nh)
/* ------------------------------------------------------------------------ */
{
  long ncol=nh-nl+1, nread;
  FILE *f;

  f = fopen(filename, "rb");
  if(f == NULL) nrerror("Can't open file in fread_f16vector");

  nread = fread(v+nl, sizeof(float16), ncol, f);
  if(nread != ncol) nrerror("fread_f16vector can't read the whole vector");
  fclose(f);
}
/* ------------------------------------------------------------------------ */
void fwrite_f16vector(float16 *v,long nl,long nh,char *filename)
/* ------------------------------------------------------------------------ */
{
  long  ncol = nh-nl+1;
  FILE *f;

  f = fopen(filename, "wb");
  if(f == NULL) nrerror("Can't open file in f16write_vector"); 
  fwrite(v+nl, sizeof(float16), ncol, f);
  fclose(f);
}

// ------------
// -- nrio1x --
// ------------

/* ---------------------------------------------------------------------------------------------------------- */
void display_f16vector_circular(float16 *v,long nl,long nh, long c0, long c1, char *format, char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_f16vector_circular_number(float16 *v,long nl,long nh, long c0, long c1, char *format, char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
  long i, n=nh-nl+1;

  if(name != NULL) puts(name);

  putchar('#'); for(i=c0; i<=c1; i++) { printf(format,   i%n+nl); } putchar('\n');
  putchar(' ');  for(i=c0; i<=c1; i++) { printf(format, v[i%n+nl]);} putchar('\n');
}

// -----------
// -- nrio2 --
// -----------

/* ---------------------------------------------------------------------------------------------------------- */
void display_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            printf(format, m[i][j]);
        }
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------------------------------ */
void display_f16matrix_T(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ------------------------------------------------------------------------------------------------------------ */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {           
            printf(format, m[i][j]);
        }
        putchar('\n');
    }
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_f16matrix_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *name)
/* ----------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    if(name != NULL) puts(name);
    
    // 1ere ligne
    printf("%5c", '#');
    for(j=ncl; j<=nch; j++) {
        printf(format, j);
    }
    putchar('\n');
    for(i=nrl; i<=nrh; i++) {
        printf("[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            printf(format, m[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f16matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_f16matrix_T(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f16matrix");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_f16matrix_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f16matrix_number");
    }
    
    // entete
    fprintf(f, "%4d", 0);
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, (float16)j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "%4d", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* --------------------------------------------------------------------------------------------------------------------- */
void write_f16matrix_T_number(float16 **m,long nrl,long nrh,long ncl, long nch, char *format, char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f16matrix_T_number");
    }
    
    fprintf(f, "%5c", '#');
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, format, (float)i);
    }
    fputc('\n', f);
    
    for(j=ncl; j<=nch; j++) {
        fprintf(f, "[%3d]", j);
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_f16matrix(float16 **m,long nrl,long nrh,long ncl, long nch, char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_f16matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(float16), ncol, f);
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_f16matrix(char *filename, float16 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_f16matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(float16), ncol, f);
        if(nread != ncol) nrerror("fread_f16matrix : can't read data");
    }
    fclose(f);
}

// -----------
// -- nrio3 --
// -----------

/* ----------------------------------------------------------------------------------------------------------------------------- */
void display_f16cube(float16 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, char *format, char *name)
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
/* ---------------------------------------------------------------------------------------------------------------------------------- */
void write_f16cube(float16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, char *format, char *filename)
/* ---------------------------------------------------------------------------------------------------------------------------------- */
{
  int i, j, k;

  FILE *f;

  f = fopen(filename, "wt");
  if(f == NULL) {
    nrerror("Can't open file in write_f16cube");
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

// --------------
// -- nrlinalg --
// --------------

/* ----------------------------------------------------------------------------------------- */
void transpose_f16matrix(float16 **S, long nrl,long nrh,long ncl, long nch, float16 **D)
/* ----------------------------------------------------------------------------------------- */
{
    int i, j;
    
    for(i=nrl; i<=nch; i++) {
        for(j=ncl; j<=nch; j++) {
            D[j][i] = S[i][j];
        }
    }
}
/* ------------------------------------------------------------------------------- */
void transpose1_f16matrix(float16 **S, long nrl,long nrh,long ncl, long nch)
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

// ------------
// -- nrmem1 --
// ------------

/* -------------------------------------------------------------------- */
void dup_f16vector(float16 *X, long nl, long nh, float16 *Y)
/* -------------------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) {
        Y[i] = X[i];
    }
}
/* -------------------------------------------------------------------------------- */
void convert_si8vector_f16vector(sint8 *X, long nl, long nh, float16 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_ui8vector_f16vector(uint8 *X, long nl, long nh, float16 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si16vector_f16vector(sint16 *X, long nl, long nh, float16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_ui16vector_f16vector(uint16 *X, long nl, long nh, float16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_si32vector_f16vector(sint32 *X, long nl, long nh, float16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* ----------------------------------------------------------------------------------- */
void convert_ui32vector_f16vector(uint32 *X, long nl, long nh, float16 *Y)
/* ----------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f16vector_si8vector(float16 *X, long nl, long nh, sint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint8) X[i];
}
/* -------------------------------------------------------------------------------- */
void convert_f16vector_ui8vector(float16 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint8) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_si16vector(float16 *X, long nl, long nh, sint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_ui16vector(float16 *X, long nl, long nh, uint16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint16) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_si32vector(float16 *X, long nl, long nh, sint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (sint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_ui32vector(float16 *X, long nl, long nh, uint32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (uint32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_f32vector(float16 *X, long nl, long nh, float32 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f16vector_f64vector(float16 *X, long nl, long nh, float64 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float64) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f32vector_f16vector(float32 *X, long nl, long nh, float16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float32) X[i];
}
/* ---------------------------------------------------------------------------------- */
void convert_f64vector_f16vector(float64 *X, long nl, long nh, float16 *Y)
/* ---------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++)
        Y[i] = (float16) X[i];
}

// -------------
// -- nrmem1x --
// -------------

/* ---------------------------------------------------------------------------------------- */
void copy_f16vector(float16 *src, long nl1, long nh1, float16 *dst, long nl2, long nh2)
/* ---------------------------------------------------------------------------------------- */
{
    long len = nh1 - nl1 + 1;
    static long size = sizeof(float16);
    memcpy(dst + nl2, src + nl1, len*size);
}
/* ----------------------------------------------------------------------------- */
void copy1c_f16vector(float16 *src, long nc, float16 *dst, long nl, long nh)
/* ----------------------------------------------------------------------------- */
{
    int j;
    float c = src[nc];
    for(j=nl; j<=nh; j++) dst[j] = c;
}
/* ------------------------------------------------------------------------------ */
void copy_f16vector_mod(float16 *src, long nl, long nh, long m, float16 *dst)
/* ------------------------------------------------------------------------------ */
{
    long len;
    long len1, len2;
    
    if(nh>nl) {
        len = nh - nl + 1; memcpy(dst, src + nl, len*sizeof(float16));
    } else {
        len1 = m - nl; memcpy(dst,      src + nl, len1*sizeof(float16));
        len2 = nh + 1; memcpy(dst+len1, src + nh, len2*sizeof(float16));
    }
}

// ------------
// -- nrmem2 --
// ------------

/* ------------------------------------------------------------------------------------------ */
void dup_f16matrix(float16 **X, long nrl,long nrh,long ncl, long nch, float16 **Y)
/* ------------------------------------------------------------------------------------------ */
{
    int i;
    for(i=nrl; i<=nrh; i++) {
        dup_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------- */
void resize_f16matrix(float16 **m, long nrl, long nrh, long ncl, long nch)
/* ---------------------------------------------------------------------------------- */
{
    long i, ncol=nch-ncl+1;
    
    for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_si8matrix_f16matrix(sint8 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si8vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_ui8matrix_f16matrix(uint8 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui8vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si16matrix_f16matrix(sint16 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si16vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui16matrix_f16matrix(uint16 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui16vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_si32matrix_f16matrix(sint32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_si32vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_ui32matrix_f16matrix(uint32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_ui32vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f16matrix_si8matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_si8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f16matrix_ui8matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_ui8vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_si16matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_si16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_ui16matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_ui16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_si32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, sint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_si32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_ui32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, uint32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_ui32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f32matrix_f16matrix(float32 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f32vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f64matrix_f16matrix(float64 **X, int nrl, int nrh, int ncl, int nch, float16 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f64vector_f16vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_f32matrix(float16 **X, int nrl, int nrh, int ncl, int nch, float32 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_f32vector(X[i], ncl, nch, Y[i]);
    }
}
/* ------------------------------------------------------------------------------------------------------ */
void convert_f16matrix_f64matrix(float16 **X, int nrl, int nrh, int ncl, int nch, float64 **Y)
/* ------------------------------------------------------------------------------------------------------ */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_f64vector(X[i], ncl, nch, Y[i]);
    }
}

// -------------
// -- nrmem2x --
// -------------

/* ------------------------------------------------------------------------------------------------- */
void copy1r_f16matrix(float16 **X, long nr, float16 **Y, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------------------- */
{
    int i;
    
    for(i=nrl; i<=nrh; i++) {
        dup_f16vector(X[nr], ncl, nch, Y[i]);
    }
}

// ------------
// -- nrset1 --
// ------------

/* --------------------------------------------------------- */
void zero_f16vector(float16 *v, long nl, long nh)
/* --------------------------------------------------------- */
{
    int i;
    for(i=nl; i<=nh; i++) v[i] = 0;
}
/* ------------------------------------------------------------------- */
void set_f16vector(float16 *v, long nl, long nh, float16 x)
/* ------------------------------------------------------------------- */
{
    int i;    
    for(i=nl; i<=nh; i++)
        v[i] = x;
}
/* --------------------------------------------------------------------------------- */
void set_f16vector_param(float16 *v, long nl, long nh, float16 x, float16 xstep)
/* ---------------------------------------------------------------------------------- */
{
    int i;   
    for(i=nl; i<=nh; i++) {
        v[i] = x;
        x += xstep;
    }
}
/* ---------------------------------------------------------- */
void set_f16vector_j(float16 *v, long nl, long nh)
/* ---------------------------------------------------------- */
{
    int i;
    
    for(i=nl; i<=nh; i++)
        v[i] = (float16) i;
}

// ------------
// -- nrset2 --
// ------------

/* ------------------------------------------------------------------------ */
void zero_f16matrix(float16 **m, int i0, int i1, int j0, int j1)
/* ------------------------------------------------------------------------ */
{
    int i;
    for(i=i0; i<=i1; i++) {
        zero_f16vector(m[i], j0, j1);
    }
}
/* --------------------------------------------------------------------------------- */
void set_f16matrix(float16 **m, int i0, int i1,int j0, int j1, float16 x)
/* --------------------------------------------------------------------------------- */
{
    int i;
    for(i=i0; i<=i1; i++)
        set_f16vector(m[i], j0, j1, x);
}
/* -------------------------------------------------------------------------------------------------------- */
void set_f16matrix_param(float16 **m, int i0, int i1, int j0, int j1, float16 x, float16 xstep, float16 ystep)
/* -------------------------------------------------------------------------------------------------------- */
{
    int i;
    for(i=i0; i<=i1; i++) {
        set_f16vector_param(m[i], j0, j1, x, xstep);
        x += ystep;
    }
}
/* ------------------------------------------------------------------------- */
void set_f16matrix_i(float16 **m, int i0, int i1, int j0, int j1)
/* ------------------------------------------------------------------------- */
{
    set_f16matrix_param(m, i0, i1, j0, j1, (float16) i0, (float16)0, (float16)1);
}
/* ------------------------------------------------------------------------- */
void set_f16matrix_j(float16 **m, int i0, int i1, int j0, int j1)
/* ------------------------------------------------------------------------- */
{
    set_f16matrix_param(m, i0, i1, j0, j1, (float16)j0,(float16)1, (float16)0);
}

// ------------
// -- nrset3 --
// ------------

/* --------------------------------------------------------------------------------------- */
void zero_f16cube(float16 ***c, int k0, int k1, int i0, int i1, int j0, int j1)
/* --------------------------------------------------------------------------------------- */
{
    int k;
    for(k=k0; k<=k1; k++) {
        zero_f16matrix(c[k], i0, i1, j0, j1);
    }
}
/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */
void set_f16cube_param(float16 ***c, int k0, int k1, int i0, int i1, int j0, int j1, float16 x, float16 xstep, float16 ystep, float16 zstep)
/* ---------------------------------------------------------------------------------------------------------------------------------------------------- */
{
    int k;
    for(k=k0; k<=k1; k++) {
        set_f16matrix_param(c[k], i0, i1, j0, j1, x, xstep, ystep);
        x += zstep;
    }
}

// -------------
// -- nrsort1 --
// -------------

/* ---------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f16vector(float16 *v, long nl, long nh, long *nlnz, long *nhnz, float16 epsillon)
/* ---------------------------------------------------------------------------------------------- */
{
    long left = nl, right = nh;;

    while(fabs(v[left ])<epsillon && left  <= nh) left++;
    while(fabs(v[right])<epsillon && right >= nl) right--;

    *nlnz = left; *nhnz = right;
}

// -------------
// -- nrsort2 --
// -------------

/* ----------------------------------------------------------------------------------------------------------------------- */
void extractnz_boundaries_f16matrix(float16 **m, long nrl,long nrh, long ncl, long nch, long *nclnz, long *nchnz, float16 epsillon)
/* ----------------------------------------------------------------------------------------------------------------------- */
{
    int i;
    long a, b;
    long left, right;
    
    extractnz_boundaries_f16vector(m[nrl], ncl, nch, &left, &right, epsillon); // premier intervalle
    for(i=nrl+1; i<=nrh; i++) {
        extractnz_boundaries_f16vector(m[i], ncl, nch, &a, &b, epsillon);
        if(a < left) left = a; // agrandissement de l'intervalle SI necessaire (et non le contraire)
        if(b > right) right = b;
    }
    *nclnz = left;
    *nchnz = right;
}

// ------------
// -- Maxime --
// ------------

/* -------------------------------------------------------------------------------- */
void convert_f16vector_ui8vector_sat(float16 *X, long nl, long nh, uint8 *Y)
/* -------------------------------------------------------------------------------- */
{
    long i;
    for(i=nl; i<=nh; i++) {
        float16 x = X[i];
        if(x > 255) {
            x = 255.000;
        }
        Y[i] = (uint8) x;
    }
}
/* ---------------------------------------------------------------------------------------------------- */
void convert_f16matrix_ui8matrix_sat(float16 **X, int nrl, int nrh, int ncl, int nch, uint8 **Y)
/* ---------------------------------------------------------------------------------------------------- */
{
    long i;
    for(i=nrl; i<=nrh; i++) {
        convert_f16vector_ui8vector_sat(X[i], ncl, nch, Y[i]);
    }
}
