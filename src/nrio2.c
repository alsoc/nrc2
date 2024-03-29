/* --------------- */
/* --- nrio2.c --- */
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


#ifdef NRC_USE_PNG
// Add PNG support
#include <png.h> // libpng
#endif // NRC_USE_PNG


#ifdef NRC_USE_ZLIB
#include <zlib.h> // zlib
#endif // NRC_USE_ZLIB


#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nralloc1.h"
#include "nralloc2.h"
#include "nrio0.h"
#include "nrio1.h"
#include "nrio2.h"

/*
 * ----------------------
 * --- display_matrix ---
 * ----------------------
 */

/* -------------------------------------------------------------------------------------------------------- */
void display_ui8matrix(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------- */
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
/* -------------------------------------------------------------------------------------------------------- */
void display_si8matrix(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------- */
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_si16matrix(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_ui16matrix(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_si32matrix(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_ui32matrix(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_si64matrix(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* --------------------------------------------------------------------------------------------------------- */
void display_i64matrix(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------- */
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_f32matrix(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_f64matrix(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* -------------------------------------------------------------------------------------------------------- */
void display_rgb8matrix(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* -------------------------------------------------------------------------------------------------------- */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        putchar('\n');
    }
}
/* ---------------------------------------------------------------------------------------------------------- */
void display_rgbx8matrix(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        putchar('\n');
    }
}
/*
 * ----------------------
 * --- display_matrix ---
 * ----------------------
 */

/* ---------------------------------------------------------------------------------------------------------- */
void display_si8matrix_T(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_ui8matrix_T(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_si16matrix_T(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_ui16matrix_T(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_si32matrix_T(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_ui32matrix_T(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_si64matrix_T(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_ui64matrix_T(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_f32matrix_T(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ------------------------------------------------------------------------------------------------------------ */
void display_f64matrix_T(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ---------------------------------------------------------------------------------------------------------- */
void display_rgb8matrix_T(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ---------------------------------------------------------------------------------------------------------- */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {           
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        putchar('\n');
    }
}
/* ------------------------------------------------------------------------------------------------------------ */
void display_rgbx8matrix_T(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* ------------------------------------------------------------------------------------------------------------ */
{
    long i,j;
    
    if(name != NULL) puts(name);
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {           
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        putchar('\n');
    }
}

/*
 * ------------------------
 * --- display_matrix_T ---
 * ------------------------
 */

/* --------------------------------------------------------------------------------------------------------------- */
void display_si8matrix_number(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------- */
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
/* --------------------------------------------------------------------------------------------------------------- */
void display_ui8matrix_number(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------- */
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_si16matrix_number(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_ui16matrix_number(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_si32matrix_number(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_ui32matrix_number(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_si64matrix_number(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_ui64matrix_number(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_f32matrix_number(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* ----------------------------------------------------------------------------------------------------------------- */
void display_f64matrix_number(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
/* --------------------------------------------------------------------------------------------------------------- */
void display_rgb8matrix_number(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
/* --------------------------------------------------------------------------------------------------------------- */
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
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        putchar('\n');
    }
    putchar('\n');
}
/* ----------------------------------------------------------------------------------------------------------------- */
void display_rgbx8matrix_number(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *name)
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
            printf(format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        putchar('\n');
    }
    putchar('\n');
}

/*
 * --------------------
 * --- write_matrix ---
 * --------------------
 */

/* ---------------------------------------------------------------------------------------------------------- */
void write_si8matrix(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------- */
{
    int  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si8matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------- */
void write_ui8matrix(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------- */
{
    int  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui8matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_si16matrix(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si16matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_ui16matrix(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui16matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_si32matrix(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si32matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_ui32matrix(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui32matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_si64matrix(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si64matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_ui64matrix(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui64matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_f32matrix(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f32matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_f64matrix(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f64matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------------------- */
void write_rgb8matrix(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ---------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgb8matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_rgbx8matrix(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgbx8matrix");
    }
    
    for(i=nrl; i<=nrh; i++) {
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        fputc('\n', f);
    }
    fclose(f);
}

/*
 * ----------------------
 * --- write_matrix_T ---
 * ----------------------
 */

/* ------------------------------------------------------------------------------------------------------------ */
void write_si8matrix_T(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si8matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_ui8matrix_T(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui8matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_si32matrix_T(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si32matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_T(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui32matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_si64matrix_T(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si64matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_ui64matrix_T(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui64matrix_T");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_f32matrix_T(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f32matrix");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_f64matrix_T(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f64matrix");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------ */
void write_rgb8matrix_T(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------ */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgb8matrix");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------------------------- */
void write_rgbx8matrix_T(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* -------------------------------------------------------------------------------------------------------------- */
{
    long  i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgb8matrix");
    }
    
    for(j=ncl; j<=nch; j++) {
        for(i=nrl; i<=nrh; i++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        fputc('\n', f);
    }
    fclose(f);
}

/*
 * ---------------------------
 * --- write_matrix_number ---
 * ---------------------------
 */

/* ----------------------------------------------------------------------------------------------------------------- */
void write_si8matrix_number(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si8matrix_number");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------------------------- */
void write_ui8matrix_number(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui8matrix_number");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_si16matrix_number(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si16matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_number(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui16matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_si32matrix_number(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si32matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_number(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui32matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_si64matrix_number(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si64matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui64matrix_number(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui64matrix");
    }
    
    // entete
    fprintf(f, "%5c", '#');
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "[%3d]", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j]);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_f32matrix_number(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f32matrix_number");
    }
    
    // entete
    fprintf(f, "%4d", 0);
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, (float32)j);
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
/* ------------------------------------------------------------------------------------------------------------------- */
void write_f64matrix_number(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f64matrix_number");
    }
    
    // entete
    fprintf(f, "%4d", 0);
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, (float32)j);
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
/* ----------------------------------------------------------------------------------------------------------------- */
void write_rgb8matrix_number(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ----------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgb8matrix_number");
    }
    
    // entete
    fprintf(f, "%4d", 0);
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, (float32)j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "%4d", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------------------------- */
void write_rgb8xmatrix_number(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgbx8matrix_number");
    }
    
    // entete
    fprintf(f, "%4d", 0);
    for(j=ncl; j<=nch; j++) {
        fprintf(f, format, (float32)j);
    }
    fputc('\n', f);
    
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, "%4d", i);
        for(j=ncl; j<=nch; j++) {
            fprintf(f, format, m[i][j].r, m[i][j].g, m[i][j].b, m[i][j].x);
        }
        fputc('\n', f);
    }
    fclose(f);
}
/*
 * -----------------------------
 * --- write_matrix_T_number ---
 * -----------------------------
 */
/* ------------------------------------------------------------------------------------------------------------------- */
void write_si8matrix_T_number(sint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si8matrix_T_number");
    }
    
    fprintf(f, "%5c", '#');
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, format, i);
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
/* ------------------------------------------------------------------------------------------------------------------- */
void write_ui8matrix_T_number(uint8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui8matrix_T_number");
    }
    
    fprintf(f, "%5c", '#');
    for(i=nrl; i<=nrh; i++) {
        fprintf(f, format, i);
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_si16matrix_T_number(sint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si16matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_ui16matrix_T_number(uint16 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui16matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_si32matrix_T_number(sint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si32matrix_T_number");
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

/* --------------------------------------------------------------------------------------------------------------------- */
void write_ui32matrix_T_number(uint32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui32matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_si64matrix_T_number(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_si64matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_ui64matrix_T_number(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui64matrix_T_number");
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

/* --------------------------------------------------------------------------------------------------------------------- */
void write_f32matrix_T_number(float32 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f32matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_f64matrix_T_number(float64 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_f64matrix_T_number");
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
/* ------------------------------------------------------------------------------------------------------------------- */
void write_rgb8matrix_T_number(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgb8matrix_T_number");
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
/* --------------------------------------------------------------------------------------------------------------------- */
void write_rgbx8matrix_T_number(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *format, const char *filename)
/* --------------------------------------------------------------------------------------------------------------------- */
{
    int i,j;
    
    FILE *f;
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_rgbx8matrix_T_number");
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
/*
 * ---------------------
 * --- fwrite_matrix ---
 * ---------------------
 */

/* ----------------------------------------------------------------------------------------------- */
void fwrite_si8matrix(sint8 **m,long nrl, long nrh, long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_si8matrix"); 
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(sint8), ncol, f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------ */
void fwrite_ui8matrix(uint8 **m, long nrl, long nrh, long ncl, long nch, const char *filename)
/* ------------------------------------------------------------------------------------------------ */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_ui8matrix"); 
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(int8), ncol, f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------- */
void fwrite_si16matrix(sint16 **m,long nrl, long nrh, long ncl, long nch, const char *filename)
/* ------------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_i16matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(sint16), ncol, f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------- */
void fwrite_ui16matrix(uint16 **m,long nrl, long nrh, long ncl, long nch, const char *filename)
/* ------------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_ui16matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(uint16), ncol, f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------- */
void fwrite_si32matrix(sint32 **m,long nrl, long nrh, long ncl, long nch, const char *filename)
/* ------------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_si32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(sint32), ncol, f);
    }
    fclose(f);
}
/* ------------------------------------------------------------------------------------------------- */
void fwrite_ui32matrix(uint32 **m,long nrl, long nrh, long ncl, long nch, const char *filename)
/* ------------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_ui32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(uint32), ncol, f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_si64matrix(sint64 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_si64matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(sint64), ncol, f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_ui64matrix(uint64 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL)
        nrerror("Can't open file in fwrite_ui64matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(uint64), ncol, f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_f32matrix(float32 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_f32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(float32), ncol, f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_f64matrix(float64 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in f64write_matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(float64), ncol, f);
    }
    fclose(f);
}
/* --------------------------------------------------------------------------------------------- */
void fwrite_rgb8matrix(rgb8 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* --------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_rgb8matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(rgb8), ncol, f);
    }
    fclose(f);
}
/* ----------------------------------------------------------------------------------------------- */
void fwrite_rgbx8matrix(rgbx8 **m,long nrl,long nrh,long ncl, long nch, const char *filename)
/* ----------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1;
    FILE *f;
    
    f = fopen(filename, "wb");
    if(f == NULL) nrerror("Can't open file in fwrite_rgbx8matrix");
    
    for(i=nrl; i<=nrh; i++) {
        fwrite(m[i]+nrl, sizeof(rgbx8), ncol, f);
    }
    fclose(f);
}

/*
 * --------------------
 * --- fread_matrix ---
 * --------------------
 */

/* -------------------------------------------------------------------------------------------- */
void fread_si8matrix(const char *filename, sint8 **m,long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_i8matrix"); 
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(sint8), ncol, f);
        if(nread != ncol) nrerror("fread_si8matrix : can't read data");
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------- */
void fread_ui8matrix(const char *filename, uint8 **m,long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_ui8matrix"); 
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(uint8), ncol, f);
        if(nread != ncol) nrerror("fread_ui8matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_si32matrix(const char *filename, sint32 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL)
        nrerror("Can't open file in fread_si32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(sint32), ncol, f);
        if(nread != ncol) nrerror("fread_si32matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_ui32matrix(const char *filename, uint32 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL)
        nrerror("Can't open file in fread_ui32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(uint32), ncol, f);
        if(nread != ncol) nrerror("fread_ui32matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_si64matrix(const char *filename, sint64 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL)
        nrerror("Can't open file in fread_si64matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(sint32), ncol, f);
        if(nread != ncol) nrerror("fread_si64matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_ui64matrix(const char *filename, uint64 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL)
        nrerror("Can't open file in fread_ui64matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(uint64), ncol, f);
        if(nread != ncol) nrerror("fread_ui64matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_f32matrix(const char *filename, float32 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_f32matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(float32), ncol, f);
        if(nread != ncol) nrerror("fread_f32matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_f64matrix(const char *filename, float64 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_f64matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(float64), ncol, f);
        if(nread != ncol) nrerror("fread_f64matrix : can't read data");
    }
    fclose(f);
}
/* -------------------------------------------------------------------------------------------- */
void fread_rgb8matrix(const char *filename, rgb8 **m,long nrl,long nrh,long ncl, long nch)
/* -------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_rgb8matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(rgb8), ncol, f);
        if(nread != ncol) nrerror("fread_rgb8matrix : can't read data");
    }
    fclose(f);
}
/* ---------------------------------------------------------------------------------------------- */
void fread_rgbx8matrix(const char *filename, rgbx8 **m,long nrl,long nrh,long ncl, long nch)
/* ---------------------------------------------------------------------------------------------- */
{
    long  i, ncol = nch-ncl+1, nread;
    FILE *f;
    
    f = fopen(filename, "rb");
    if(f == NULL) nrerror("Can't open file in fread_rgbx8matrix");
    
    for(i=nrl; i<=nrh; i++) {
        nread = fread(m[i]+ncl, sizeof(rgbx8), ncol, f);
        if(nread != ncol) nrerror("fread_rgbx8matrix : can't read data");
    }
    fclose(f);
}

/*
 * -------------------------------
 * --- display_matrix_positive ---
 * -------------------------------
 */

// ------------------------------------------------------------------------------------------------
void display_si8matrix_positive(sint8 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// ------------------------------------------------------------------------------------------------
{
    int i, j;
    
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// ------------------------------------------------------------------------------------------------
void display_ui8matrix_positive(uint8 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// ------------------------------------------------------------------------------------------------
{
    int i, j;
    
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_si16matrix_positive(sint16 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_ui16matrix_positive(uint16 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_si32matrix_positive(sint32 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_ui32matrix_positive(uint32 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_si64matrix_positive(sint64 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void display_ui64matrix_positive(uint64 **m, int i0, int i1, int j0, int j1, int iformat, const char *name)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    if(name != NULL) puts(name);
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                printf(format, m[i][j]);
            } else {
                printf("%s", str);
            }
        }
        putchar('\n');
    }    
}
// --------------------------------------------------------------------------------------------------
void write_ui8matrix_positive(uint8 **m, int i0, int i1, int j0, int j1, int iformat, const char *filename)
// --------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    FILE *f;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui8matrix_positive");
    }
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                fprintf(f, format, m[i][j]);
            } else {
                fprintf(f, "%s", str);
            }
        }
        fputc('\n', f);
    }
    fclose(f);
}

// ----------------------------------------------------------------------------------------------------
void write_ui16matrix_positive(uint16 **m, int i0, int i1, int j0, int j1, int iformat, const char *filename)
// ----------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    FILE *f;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui16matrix_positive");
    }
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                fprintf(f, format, m[i][j]);
            } else {
                fprintf(f, "%s", str);
            }
        }
        fputc('\n', f);
    }
    fclose(f);
}
// ---------------------------------------------------------------------------------------------------
void write_ui32matrix_positive(uint32 **m,int i0, int i1, int j0, int j1, int iformat, const char *filename)
// ---------------------------------------------------------------------------------------------------
{
    int i, j;
    char *format, *str;
    FILE *f;
    
    select_display_positive_parameters(iformat, &format, &str);
    
    f = fopen(filename, "wt");
    if(f == NULL) {
        nrerror("Can't open file in write_ui32matrix_positive");
    }
    
    for(i=i0; i<=i1; i++) {
        for(j=j0; j<=j1; j++) {
            if(m[i][j]) {
                fprintf(f, format, m[i][j]);
            } else {
                fprintf(f, "%s", str);
            }
        }
        fputc('\n', f);
    }
    fclose(f);
}

/* ------------------------ */
/* -- PGM IO for bmatrix -- */
/* ------------------------ */

PRIVATE char *readitem   (FILE *file, char *buffer);
PRIVATE void  ReadPGMrow (FILE *file, int width, uint8  *line);
PRIVATE void  WritePGMrow(uint8 *line, int width, FILE  *file);

/* ------------------------------------------ */
PRIVATE char *readitem(FILE *file, char *buffer)
/* ------------------------------------------ */
// read a word
// public domain function: author is unknown
{
    char *aux;
    int k;
    
    k=0;
    aux=buffer;
    while (!feof(file))
    {
        *aux=fgetc(file);
        switch(k)
        {
        case 0:
            if (*aux=='#') k=1;
            if (isalnum(*aux)) k=2, aux++;
            break;
        case 1:
            if (*aux==0xA) k=0;
            break;
        case 2:
            if (!isalnum(*aux))
            {
                *aux=0;
                return buffer;
            }
            aux++;
            break;
        }
    }
    *aux=0;
    return buffer;
}
/* ----------------------------------------------------- */
PRIVATE void ReadPGMrow(FILE  *file, int width, uint8 *line)
/* ----------------------------------------------------- */
{
    // file is already open (in read) and will not be closed at the end
    if (fread(&(line[0]), sizeof(uint8), width, file) != width)
         nrerror("Can't read a full row");
}
/* ------------------------------------------------------- */
PRIVATE void WritePGMrow(uint8 *line, int width, FILE  *file)
/* ------------------------------------------------------- */
{
    // file is already open (in read) and will not be closed at the end
    if (fwrite(&(line[0]), sizeof(uint8), width, file) != width)
        nrerror("Can't write a full row");
}
/* --------------------------------------------------------------------------------------- */
uint8** LoadPGM_ui8matrix(const char *filename, int *nrl, int *nrh, int *ncl, int *nch)
/* --------------------------------------------------------------------------------------- */
{
    // only for P5 binary type, not for text type
    
    int height, width/*, gris*/;
    uint8 **m;
    FILE *file;
    
    char *buffer;
    char msg[1024];
    //char  c;
    int i;
    
    buffer = (char*) calloc(80, sizeof(char));

    // open file
    file = fopen(filename,"rb");
    if (file==NULL) {
        //nrerror("ouverture du fichier impossible\n");
        sprintf(msg, "ouverture du fichier %s impossible dans LoadPGM_ui8matrix\n", filename);
        nrerror(msg);
    }
    
    // read PGM header
    readitem(file, buffer);
    /*fscanf(fichier, "%s", buffer);*/
    if(strcmp(buffer, "P5") != 0) nrerror("entete du fichier %s invalide\n");
    //nrerror("entete du fichier %s invalide\n", filename);
    
    width  = atoi(readitem(file, buffer));
    height = atoi(readitem(file, buffer));
    /*gris   = atoi(*/readitem(file, buffer)/*)*/;
    
    *nrl = 0;
    *nrh = height - 1;
    *ncl = 0;
    *nch = width - 1;
    m = ui8matrix(*nrl, *nrh, *ncl, *nch);
    
    for(i=0; i<height; i++) {
        ReadPGMrow(file, width, m[i]);
    }
    
    fclose(file);
    free(buffer);
    
    return m;
}
/* ----------------------------------------------------------------------------------------------- */
void LoadPGM_ui8matrix2(const char *filename, int *nrl, int *nrh, int *ncl, int *nch, uint8 **m)
/* ----------------------------------------------------------------------------------------------- */
{
    // only for P5 binary type, not for text type
    
    int height, width/*, gris*/;
    FILE *file;
    
    char *buffer;
    char msg[1024];
    int i;
    
    buffer = (char*) calloc(80, sizeof(char));
    /* ouverture du fichier */
    file = fopen(filename,"rb");
    if (file==NULL) {
        //nrerror("ouverture du fichier impossible\n");
        sprintf(msg, "ouverture du fichier %s impossible dans SavePGM_bmatrix\n", filename);
        nrerror(msg);
    }
    
    /* lecture de l'entete du fichier pgm */
    readitem(file, buffer);
    /*fscanf(fichier, "%s", buffer);*/
    if(strcmp(buffer, "P5") != 0)
        nrerror("entete du fichier %s invalide\n");
    //nrerror("entete du fichier %s invalide\n", filename);
    
    width  = atoi(readitem(file, buffer));
    height = atoi(readitem(file, buffer));
    /*gris   = atoi(*/readitem(file, buffer)/*)*/;
    
    *nrl = 0;
    *nrh = height - 1;
    *ncl = 0;
    *nch = width - 1;
    
    for(i=0; i<height; i++) {
        ReadPGMrow(file, width, m[i]);
    }
    
    fclose(file);
    free(buffer);
}

#if defined(NRC_USE_PNG) && defined(NRC_USE_ZLIB)
// -----------------------------------------------------------------------------------
uint8** LoadPNG_ui8matrix(const char *filename, int *nrl, int *nrh, int *ncl, int *nch) {
// -----------------------------------------------------------------------------------
    const int MAX_FMT_LEN = 1024;
    char msg[MAX_FMT_LEN];
    
    FILE* file = fopen(filename, "r");

    png_structp png_ptr = NULL;
    png_infop info_ptr = NULL;
    png_infop end_info = NULL;

    uint8** mat = NULL;
    
    if (!file){
	snprintf(msg, MAX_FMT_LEN, "Could not open %s file in %s\n", filename, __FUNCTION__);
	nrerror(msg);

	return NULL;
    }

    // Check if the file is a PNG file
#define PNG_HEADER_SIZE (8)
    unsigned char header[PNG_HEADER_SIZE];
    
    fread(header, 1, PNG_HEADER_SIZE, file);
    int is_png = !png_sig_cmp(header, 0, PNG_HEADER_SIZE);
    if (!is_png) {
	snprintf(msg, MAX_FMT_LEN, "Could not read %s in %s, not a PNG file\n", filename, __FUNCTION__);
	
	nrerror(msg);
	fclose(file);

	return NULL;
    }
    
    png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    if (!png_ptr) {
	snprintf(msg, MAX_FMT_LEN, "Could not create PNG read struct in %s\n", __FUNCTION__);

	nrerror(msg);
	fclose(file);

	return NULL;
    }

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr) {
	snprintf(msg, MAX_FMT_LEN, "Could not create PNG info structure in %s\n", __FUNCTION__);
	nrerror(msg);
	
	goto clean;
    }

    end_info = png_create_info_struct(png_ptr);
    if (!end_info) {
	snprintf(msg, MAX_FMT_LEN, "Could not create PNG end info struct in %s\n", __FUNCTION__);
	nrerror(msg);
	
	goto clean;
    }
    

    if (setjmp(png_jmpbuf(png_ptr))) {
	snprintf(msg, MAX_FMT_LEN, "Could not set PNG error handler in %s\n", __FUNCTION__);
	nrerror(msg);
	
	goto clean;
    }

    png_init_io(png_ptr, file);
    png_set_sig_bytes(png_ptr, PNG_HEADER_SIZE);

    // Ensure 8-bits per pixel
    const int transforms = PNG_TRANSFORM_SCALE_16 | PNG_TRANSFORM_PACKING;
    
    png_read_png(png_ptr, info_ptr, transforms, NULL);


    int bit_depth = png_get_bit_depth(png_ptr, info_ptr);
    if (bit_depth != 8) {
	snprintf(msg, MAX_FMT_LEN, "Image %s is not 8-bits grayscale (%d)", filename, bit_depth);
	nrerror(msg);

	goto clean;
    }
    
    uint8** row_pointers = png_get_rows(png_ptr, info_ptr);

    int width = png_get_image_width(png_ptr, info_ptr);
    int height = png_get_image_height(png_ptr, info_ptr);

    *nrl = 0;
    *nrh = height - 1;
    *ncl = 0;
    *nch = width - 1;
    
    mat = ui8matrix(*nrl, *nrh, *ncl, *nch);

    for (int row = 0; row < height; row++) {
	memcpy(mat[row], row_pointers[row], width);
    }
    
  clean:    
    png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
    fclose(file);
    
    return mat;
}
#endif // NRC_USE_PNG && NRC_USE_ZLIB

// -----------------------------------------------------------------------------------
void MLoadPGM_ui8matrix(const char *filename, int nrl, int nrh, int ncl, int nch, uint8 **m)
// -----------------------------------------------------------------------------------
{
    // only for P5 binary type, not for text type
    
    int height, width/*, gris*/;
    FILE *file;
    
    char *buffer;
    char msg[1024];
    
    int i;
    
    buffer = (char*) calloc(80, sizeof(char));
    /* ouverture du fichier */
    file = fopen(filename,"rb");
    if (file==NULL) {
        //nrerror("ouverture du fichier impossible\n");
        sprintf(msg, "ouverture du fichier %s impossible dans MLoadPGM_ui8matrix\n", filename);
        nrerror(msg);
    }
    
    /* lecture de l'entete du fichier pgm */
    readitem(file, buffer);
    /*fscanf(fichier, "%s", buffer);*/
    if(strcmp(buffer, "P5") != 0)
        nrerror("entete du fichier %s invalide\n");
    //nrerror("entete du fichier %s invalide\n", filename);
    
    width  = atoi(readitem(file, buffer));
    height = atoi(readitem(file, buffer));
    /*gris   = atoi(*/readitem(file, buffer)/*)*/;
    
    for(i=0; i<height; i++) {
        ReadPGMrow(file, width, m[i]);
    }
    
    fclose(file);
    free(buffer);
}
// ----------------------------------------------------------------------------------
void SavePGM_ui8matrix(uint8 **m, int nrl, int nrh, int ncl, int nch, const char *filename)
// ----------------------------------------------------------------------------------
{
    int nrow = nrh-nrl+1;
    int ncol = nch-ncl+1;
    
    char buffer[80];
    char msg[1024];
    
    FILE *file;
    int  i;
    
    file = fopen(filename, "wb");
    if (file == NULL) {
        //nrerror("ouverture du fichier %s impossible dans SavePGM_bmatrix\n", filename);
        sprintf(msg, "ouverture du fichier %s impossible dans SavePGM_bmatrix\n", filename);
        nrerror(msg);
    }
    
    /* enregistrement de l'image au format rpgm */
    sprintf(buffer,"P5\n%d %d\n255\n",ncol, nrow);
    fwrite(buffer,strlen(buffer),1,file);
    for(i=nrl; i<=nrh; i++)
        WritePGMrow(m[i]+ncl, ncol, file);
    
    /* fermeture du fichier */
    fclose(file);
}

#if defined(NRC_USE_PNG) && defined(NRC_USE_ZLIB)
// ----------------------------------------------------------------------------------
int SavePNG_ui8matrix(uint8 **m, int nrl, int nrh, int ncl, int nch, const char* filename) {
// ----------------------------------------------------------------------------------

    const int MAX_FMT_LEN = 1024;
    char msg[MAX_FMT_LEN];
    
    FILE* file = fopen(filename, "wb");
    
    png_structp png_ptr = NULL;
    png_infop info_ptr = NULL;
    
    if (!file) {
	snprintf(msg, MAX_FMT_LEN, "Could not open %s file in SavePNG_ui8matrix\n", filename);
	nrerror(msg);

	return -1;
    }

    png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    
    if (!png_ptr) {

	sprintf(msg, "Could not create PNG write structure in SavePNG_ui8matrix\n");
	nrerror(msg);
	fclose(file);
	
	return -1;
    }

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr) {

	sprintf(msg, "Could not create PNG info structure in SavePNG_ui8matrix\n");
	nrerror(msg);
	
	png_destroy_write_struct(&png_ptr, NULL);
	fclose(file);
	
	return -1;
    }

    if (setjmp(png_jmpbuf(png_ptr))) {

	sprintf(msg, "Could not set PNG error handler\n");
	nrerror(msg);

	png_destroy_write_struct(&png_ptr, &info_ptr);
	fclose(file);
	
	return -1;
    }
    
    png_init_io(png_ptr, file);


    int width = nch + 1;
    int height = nrh + 1;

    int color_depth = 8;
    int color_type = PNG_COLOR_TYPE_GRAY;
    int interlace_method = PNG_INTERLACE_NONE;
    int compression_method = PNG_COMPRESSION_TYPE_DEFAULT;
    int filter_method = PNG_FILTER_TYPE_DEFAULT;
    
    
    png_set_IHDR(png_ptr, info_ptr, width, height, color_depth, color_type, interlace_method,
		 compression_method, filter_method);

    png_write_info(png_ptr, info_ptr);

    // Copy data from uint8 matrix
    png_write_image(png_ptr, m);

    png_write_end(png_ptr, info_ptr);

    
    png_destroy_write_struct(&png_ptr, &info_ptr);
    
    fclose(file);

    return 0;
}
#endif // NRC_USE_PNG && NRC_USE_ZLIB


/* --------------------------- */
/* -- PNM IO for rgb8matrix -- */
/* --------------------------- */

/* ------------------------------------------------------ */
PRIVATE void ReadPNMrow(FILE  *file, int width, byte  *line)
/* ------------------------------------------------------ */
{
    /* Le fichier est ouvert (en lecture) et ne sera pas ferme a la fin */
    if(fread(&(line[0]), sizeof(byte), 3*sizeof(byte)*width, file) != 3*sizeof(byte)*width)
        nrerror("Can't read a full row");
}
/* ------------------------------------------------------- */
PRIVATE void WritePNMrow(byte  *line, int width, FILE  *file)
/* ------------------------------------------------------- */
{
    /* Le fichier est deja ouvert et ne sera pas ferme a la fin */
    if(fwrite(&(line[0]), sizeof(byte), 3*sizeof(byte)*width, file) != 3*sizeof(byte)*width)
        nrerror("Can't write a full row");
}
/* ------------------------------------------------------------------------------------------ */
rgb8** LoadPPM_rgb8matrix(const char *filename, int *nrl, int *nrh, int *ncl, int *nch)
/* ------------------------------------------------------------------------------------------ */
{
    /* cette version ne lit plus que le type P6 */
    
    int height, width/*, gris*/;
    rgb8 **m;
    FILE *file;
    //int   format;
    
    char *buffer;
    char msg[1024];
    //char  c;
    int i;
    
    buffer = (char*) calloc(80, sizeof(char));
    /* ouverture du fichier */
    file = fopen(filename,"rb");
    if (file==NULL) {
        //nrerror("ouverture du fichier impossible\n");
        sprintf(msg, "ouverture du fichier %s impossible dans SavePGM_bmatrix\n", filename);
        nrerror(msg);
    }
    
    /* lecture de l'entete du fichier pgm */
    readitem(file, buffer);
    /*fscanf(fichier, "%s", buffer);*/
    if(strcmp(buffer, "P6") != 0)
        nrerror("entete du fichier %s invalide\n");
    //nrerror("entete du fichier %s invalide\n", filename);
    
    width  = atoi(readitem(file, buffer));
    height = atoi(readitem(file, buffer));
    /*gris   = atoi(*/readitem(file, buffer)/*)*/;
    
    *nrl = 0;
    *nrh = height - 1;
    *ncl = 0;
    *nch = width - 1;
    m = rgb8matrix(*nrl, *nrh, *ncl, *nch);
    
    for(i=0; i<height; i++) {
        ReadPNMrow(file, width, (byte*)m[i]);
    }
    
    fclose(file);
    free(buffer);
    
    return m;
}
/* -------------------------------------------------------------------------------------------------- */
void LoadPPM_rgb8matrix2(const char *filename, int *nrl, int *nrh, int *ncl, int *nch, rgb8 **m)
/* -------------------------------------------------------------------------------------------------- */
{
    /* cette version ne lit plus que le type P6 */
    
    int height, width/*, gris*/;
    FILE *file;
    //int   format;
    
    char *buffer;
    char msg[1024];
    //char  c;
    int i;
    
    buffer = (char*) calloc(80, sizeof(char));
    /* ouverture du fichier */
    file = fopen(filename,"rb");
    if (file==NULL) {
        //nrerror("ouverture du fichier impossible\n");
        sprintf(msg, "ouverture du fichier %s impossible dans LoadPPM_rgb8matrix2\n", filename);
        nrerror(msg);
    }
    
    /* lecture de l'entete du fichier pgm */
    readitem(file, buffer);
    /*fscanf(fichier, "%s", buffer);*/
    if(strcmp(buffer, "P6") != 0)
        nrerror("entete du fichier %s invalide\n");
    //nrerror("entete du fichier %s invalide\n", filename);
    
    width  = atoi(readitem(file, buffer));
    height = atoi(readitem(file, buffer));
    /*gris   = atoi(*/readitem(file, buffer)/*)*/;
    
    *nrl = 0;
    *nrh = height - 1;
    *ncl = 0;
    *nch = width - 1;
    
    for(i=0; i<height; i++) {
        ReadPNMrow(file, width, (byte*)m[i]);
    }
    fclose(file);
    free(buffer);
}
/* ------------------------------------------------------------------------------------------------- */
void SavePPM_rgb8matrix(rgb8 **m, int nrl, int nrh, int ncl, int nch, const char *filename)
/* ------------------------------------------------------------------------------------------------- */
{
    int nrow = nrh-nrl+1;
    int ncol = nch-ncl+1;
    
    char buffer[80];
    char msg[1024];
    
    FILE *file;
    int  i;
    
    file = fopen(filename, "wb");
    if (file == NULL) {
        //nrerror("ouverture du fichier %s impossible dans SavePGM_bmatrix\n", filename);
        //nrerror("ouverture du fichier %s impossible dans SavePPM_bmatrix\n");
        sprintf(msg, "ouverture du fichier %s impossible dans SavePPM_rgb8matrix\n", filename);
        
        nrerror(msg);
    }
    
    /* enregistrement de l'image au format rpgm */
    
    sprintf(buffer,"P6\n%d %d\n255\n",ncol, nrow);
    fwrite(buffer,strlen(buffer),1,file);
    for(i=nrl; i<=nrh; i++)
        WritePNMrow((byte*)m[i], ncol, file);
    
    /* fermeture du fichier */
    fclose(file);
}
