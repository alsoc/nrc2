/* ------------------ */
/* --- nralloc3.c --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
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

#include "nralloc1.h"
#include "nralloc3.h"

/* ----------------------------------------------------------------------- */
double*** d3tensor(long nrl, long nrh, long ncl, long nch, long ndl, long ndh)
/* ----------------------------------------------------------------------- */
/* allocate a float 3tensor with range t[nrl..nrh][ncl..nch][ndl..ndh] */
{
    long i,j,nrow=nrh-nrl+1,ncol=nch-ncl+1,ndep=ndh-ndl+1;
    double ***t;
    
    /* allocate pointers to pointers to rows */
    t=(double ***) malloc((size_t)((nrow+NR_END)*sizeof(double**)));
    if (!t) nrerror("allocation failure 1 in d3tensor()");
    t += NR_END;
    t -= nrl;
    
    /* allocate pointers to rows and set pointers to them */
    t[nrl]=(double **) malloc((size_t)((nrow*ncol+NR_END)*sizeof(double*)));
    if (!t[nrl]) nrerror("allocation failure 2 in d3tensor()");
    t[nrl] += NR_END;
    t[nrl] -= ncl;
    
    /* allocate rows and set pointers to them */
    t[nrl][ncl]=(double *) malloc((size_t)((nrow*ncol*ndep+NR_END)*sizeof(double)));
    if (!t[nrl][ncl]) nrerror("allocation failure 3 in d3tensor()");
    t[nrl][ncl] += NR_END;
    t[nrl][ncl] -= ndl;
    
    for(j=ncl+1;j<=nch;j++) t[nrl][j]=t[nrl][j-1]+ndep;
    for(i=nrl+1;i<=nrh;i++) {
        t[i]=t[i-1]+ncol;
        t[i][ncl]=t[i-1][ncl]+ncol*ndep;
        for(j=ncl+1;j<=nch;j++) t[i][j]=t[i][j-1]+ndep;
    }
    
    /* return pointer to array of pointers to rows */
    return t;
}
/* ------------------------------------------------------------------------------ */
void free_d3tensor(double ***t,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* ------------------------------------------------------------------------------ */
/* free a float f3tensor allocated by d3tensor() */
{
    free((FREE_ARG) (t[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (t[nrl]+ncl-NR_END));
    free((FREE_ARG) (t+nrl-NR_END));
}

/* ------------------------------------------------------------------------------------ */
sint8*** si8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    sint8 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(sint8***) malloc((size_t)((ndep+NR_END)*sizeof(sint8**)));
    if (!t) nrerror("allocation failure 1 in si8cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(sint8**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(sint8*)));
    if (!t[ndl]) nrerror("allocation failure 2 in si8cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(sint8*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(sint8)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in si8cube()");
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
/* ------------------------------------------------------------------------------------ */
uint8*** ui8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    uint8 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(uint8***) malloc((size_t)((ndep+NR_END)*sizeof(uint8**)));
    if (!t) nrerror("allocation failure 1 in ui8cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(uint8**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(uint8*)));
    if (!t[ndl]) nrerror("allocation failure 2 in ui8cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(uint8*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(uint8)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in ui8cube()");
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
/* -------------------------------------------------------------------------------------- */
sint16*** si16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    sint16 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(sint16 ***) malloc((size_t)((ndep+NR_END)*sizeof(sint16**)));
    if (!t) nrerror("allocation failure 1 in si16cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(sint16 **) malloc((size_t)((ndep*nrow+NR_END)*sizeof(sint16*)));
    if (!t[ndl]) nrerror("allocation failure 2 in si16cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(sint16 *) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(sint16)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in si16cube()");
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
/* -------------------------------------------------------------------------------------- */
uint16*** ui16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    uint16 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(uint16***) malloc((size_t)((ndep+NR_END)*sizeof(uint16**)));
    if (!t) nrerror("allocation failure 1 in ui16cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(uint16**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(uint16*)));
    if (!t[ndl]) nrerror("allocation failure 2 in ui16cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(uint16*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(uint16)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in ui16cube()");
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
/* ------------------------------------------------------------------------------------ */
sint32*** si32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    sint32 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(sint32***) malloc((size_t)((ndep+NR_END)*sizeof(sint32**)));
    if (!t) nrerror("allocation failure 1 in si32cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(sint32**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(sint32*)));
    if (!t[ndl]) nrerror("allocation failure 2 in si32cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(sint32*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(sint32)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in si32cube()");
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
/* -------------------------------------------------------------------------------------- */
uint32*** ui32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    uint32 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(uint32***) malloc((size_t)((ndep+NR_END)*sizeof(uint32**)));
    if (!t) nrerror("allocation failure 1 in ui32cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(uint32**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(uint32*)));
    if (!t[ndl]) nrerror("allocation failure 2 in ui32cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(uint32*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(uint32)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in ui32cube()");
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
/* -------------------------------------------------------------------------------------- */
float32*** f32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    float32 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(float32***) malloc((size_t)((ndep+NR_END)*sizeof(float32**)));
    if (!t) nrerror("allocation failure 1 in f32cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(float32**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(float32*)));
    if (!t[ndl]) nrerror("allocation failure 2 in f32cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(float32*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(float32)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in f32cube()");
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
/* -------------------------------------------------------------------------------------- */
float64*** f64cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    float64 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(float64***) malloc((size_t)((ndep+NR_END)*sizeof(float64**)));
    if (!t) nrerror("allocation failure 1 in f32cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(float64**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(float64*)));
    if (!t[ndl]) nrerror("allocation failure 2 in f64cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(float64*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(float64)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in f64cube()");
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
/* ------------------------------------------------------------------------------------ */
rgb8*** rgb8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* ------------------------------------------------------------------------------------ */
/* allocate a rgb8 cube with range t[ndl..ndh][nrl..nrh][ncl..nch] */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    rgb8 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(rgb8***) malloc((size_t)((ndep+NR_END)*sizeof(rgb8**)));
    if (!t) nrerror("allocation failure 1 in rgb8cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(rgb8**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(rgb8*)));
    if (!t[ndl]) nrerror("allocation failure 2 in rgb8cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(rgb8*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(rgb8)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in rgb8cube()");
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
/* -------------------------------------------------------------------------------------- */
rgbx8*** rgbx8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch)
/* -------------------------------------------------------------------------------------- */
/* allocate a rgb8 cube with range t[ndl..ndh][nrl..nrh][ncl..nch] */
{
    long i,j,ndep=ndh-ndl+1,nrow=nrh-nrl+1,nrol=nch-ncl+1;
    rgbx8 ***t;
    
    /* allocate pointers to pointers to rows */
    t=(rgbx8***) malloc((size_t)((ndep+NR_END)*sizeof(rgbx8**)));
    if (!t) nrerror("allocation failure 1 in rgbx8cube()");
    t += NR_END;
    t -= ndl;
    
    /* allocate pointers to rows anc set pointers to them */
    t[ndl]=(rgbx8**) malloc((size_t)((ndep*nrow+NR_END)*sizeof(rgbx8*)));
    if (!t[ndl]) nrerror("allocation failure 2 in rgbx8cube()");
    t[ndl] += NR_END;
    t[ndl] -= nrl;
    
    /* allocate rows anc set pointers to them */
    t[ndl][nrl]=(rgbx8*) malloc((size_t)((ndep*nrow*nrol+NR_END)*sizeof(rgbx8)));
    if (!t[ndl][nrl]) nrerror("allocation failure 3 in rgbx8cube()");
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
/* ------------------------------------------------------------------------------------------- */
void free_si8cube(sint8 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* ------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------------- */
void free_ui8cube(uint8 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* ------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_si16cube(sint16 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_ui16cube(uint16 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_si32cube(sint32 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_ui32cube(uint32 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_f32cube(float32 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_f64cube(float64 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* ------------------------------------------------------------------------------------------- */
void free_rgb8cube(rgb8 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* ------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
/* --------------------------------------------------------------------------------------------- */
void free_rgbx8cube(rgbx8 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh)
/* --------------------------------------------------------------------------------------------- */
{
    free((FREE_ARG) (c[nrl][ncl]+ndl-NR_END));
    free((FREE_ARG) (c[nrl]+ncl-NR_END));
    free((FREE_ARG) (c+nrl-NR_END));
}
