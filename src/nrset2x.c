/* ----------------- */
/* --- nrset2X.c --- */
/* ----------------- */

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
#include <ctype.h> // isdigit
#include <string.h> // memcpy
#include <math.h> // fabs
// #include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrtypex.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nrset1.h"
#include "nrset2.h"
#include "nrset2x.h"


/* --------------------------------------------------------------------------------- */
void zero_si32Pmatrix(si32Point **m, long nrl,long nrh,long ncl,long nch)
/* --------------------------------------------------------------------------------- */
{
    long i,j;
    si32Point *mi;
    
    for(i=nrl; i<=nrh; i++) {
        mi = m[i];
        for(j=ncl; j<=nch; j++) {
            mi[j].x = 0;
            mi[j].y = 0;
        }
    }
}
/* ------------------------------------------------------------------------------- */
void zero_f32Pmatrix(f32Point **m, long nrl,long nrh,long ncl,long nch)
/* ------------------------------------------------------------------------------- */
{
    long i,j;
    f32Point *mi;
    
    for(i=nrl; i<=nrh; i++) {
        mi = m[i];
        for(j=ncl; j<=nch; j++) {
            mi[j].x = 0;
            mi[j].y = 0;
        }
    }
}
/* ----------------------------------------------------------------------------------- */
void zero_si32Tmatrix(si32Triplet **m, long nrl,long nrh,long ncl,long nch)
/* ----------------------------------------------------------------------------------- */
{
    long i,j;
    si32Triplet *mi;
    
    for(i=nrl; i<=nrh; i++) {
        mi = m[i];
        for(j=ncl; j<=nch; j++) {
            mi[j].x = 0;
            mi[j].y = 0;
            mi[j].z = 0;
        }
    }
}
/* --------------------------------------------------------------------------------- */
void zero_f32Tmatrix(f32Triplet **m, long nrl,long nrh,long ncl,long nch)
/* --------------------------------------------------------------------------------- */
{
    long i,j;
    f32Triplet *mi;
    
    for(i=nrl; i<=nrh; i++) {
        mi = m[i];
        for(j=ncl; j<=nch; j++) {
            mi[j].x = 0;
            mi[j].y = 0;
            mi[j].z = 0;
        }
    }
}
