/* ------------------ */
/* --- nrarith0.c --- */
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
 * History:
 * modif : log2  -> ilog2 (conflict with math.h on Mac OSX)
 */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nrarith0.h"

void    i8swap(int8    *a, int8    *b) { int8    *t; t=a; a=b; b=t;}
void   i16swap(int16   *a, int16   *b) { int16   *t; t=a; a=b; b=t;}
void   i32swap(int32   *a, int32   *b) { int32   *t; t=a; a=b; b=t;}
void   i64swap(int64   *a, int64   *b) { int64   *t; t=a; a=b; b=t;}
void   f32swap(float32 *a, float32 *b) { float32 *t; t=a; a=b; b=t;}
void   f64swap(float64 *a, float64 *b) { float64 *t; t=a; a=b; b=t;}
void  rgb8swap(rgb8    *a, rgb8    *b) { rgb8    *t; t=a; a=b; b=t;}
void rgbx8swap(rgbx8   *a, rgbx8   *b) { rgbx8   *t; t=a; a=b; b=t;}

/* --------- */
/* -- Min -- */
/* --------- */

float32  f32min  (float32 x1, float32 x2)                                    {if (x1<x2)  return x1; else  return x2;}
float32  f32min2 (float32 x1, float32 x2)                                     {if (x1<x2)  return x1; else  return x2;}
float32  f32min3 (float32 x1, float32 x2, float32 x3)                         {return f32min2(f32min2(x1, x2), x3);}
float32  f32min4 (float32 x1, float32 x2, float32 x3, float32 x4)             {return f32min2(f32min2(x1, x2), f32min2(x3, x4));}
float32  f32min5 (float32 x1, float32 x2, float32 x3, float32 x4, float32 x5) {return f32min3(f32min2(x1, x2), f32min2(x3, x4), x5);}

float32  f64min  (float64 x1, float64 x2)                                     {if (x1<x2)  return x1; else  return x2;}
float32  f64min2 (float64 x1, float64 x2)                                     {if (x1<x2)  return x1; else  return x2;}
float32  f64min3 (float64 x1, float64 x2, float64 x3)                         {return f64min2(f64min2(x1, x2), x3);}
float32  f64min4 (float64 x1, float64 x2, float64 x3, float64 x4)             {return f64min2(f64min2(x1, x2), f64min2(x3, x4));}
float32  f64min5 (float64 x1, float64 x2, float64 x3, float64 x4, float64 x5) {return f64min3(f64min2(x1, x2), f64min2(x3, x4), x5);}

uint8  ui8min (uint8 x1, uint8 x2)                               {if (x1<x2)  return x1; else  return x2;}
uint8  ui8min2(uint8 x1, uint8 x2)                               {if (x1<x2)  return x1; else  return x2;}
uint8  ui8min3(uint8 x1, uint8 x2, uint8 x3)                     {return ui8min2(ui8min2(x1, x2), x3);}
uint8  ui8min4(uint8 x1, uint8 x2, uint8 x3, uint8 x4)           {return ui8min2(ui8min2(x1, x2), ui8min2(x3, x4));}
uint8  ui8min5(uint8 x1, uint8 x2, uint8 x3, uint8 x4, uint8 x5) {return ui8min3(ui8min2(x1, x2), ui8min2(x3, x4), x5);}

uint16 ui16min (uint16 x1, uint16 x2)                                  {if (x1<x2)  return x1; else  return x2;}
uint16 ui16min2(uint16 x1, uint16 x2)                                  {if (x1<x2)  return x1; else  return x2;}
uint16 ui16min3(uint16 x1, uint16 x2, uint16 x3)                       {return ui16min2(ui16min2(x1, x2), x3);}
uint16 ui16min4(uint16 x1, uint16 x2, uint16 x3, uint16 x4)            {return ui16min2(ui16min2(x1, x2), ui16min2(x3, x4));}
uint16 ui16min5(uint16 x1, uint16 x2, uint16 x3, uint16 x4, uint16 x5) {return ui16min3(ui16min2(x1, x2), ui16min2(x3, x4), x5);}

uint32 ui32min (uint32 x1, uint32 x2)                                  {if (x1<x2)  return x1; else  return x2;}
uint32 ui32min2(uint32 x1, uint32 x2)                                  {if (x1<x2)  return x1; else  return x2;}
uint32 ui32min3(uint32 x1, uint32 x2, uint32 x3)                       {return ui32min2(ui32min2(x1, x2), x3);}
uint32 ui32min4(uint32 x1, uint32 x2, uint32 x3, uint32 x4)            {return ui32min2(ui32min2(x1, x2), ui32min2(x3, x4));}
uint32 ui32min5(uint32 x1, uint32 x2, uint32 x3, uint32 x4, uint32 x5) {return ui32min3(ui32min2(x1, x2), ui32min2(x3, x4), x5);}

rgb8 rgb8min (rgb8 x1, rgb8 x2)                            {rgb8 y; y.r = ui8min2(x1.r,x2.r);y.g=ui8min2(x1.g,x2.g);y.b=ui8min2(x1.b,x2.b);return y;}
rgb8 rgb8min2(rgb8 x1, rgb8 x2)                            {rgb8 y; y.r = ui8min2(x1.r,x2.r);y.g=ui8min2(x1.g,x2.g);y.b=ui8min2(x1.b,x2.b);return y;}
rgb8 rgb8min3(rgb8 x1, rgb8 x2, rgb8 x3)                   {return rgb8min2(rgb8min2(x1, x2), x3);}
rgb8 rgb8min4(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4)          {return rgb8min2(rgb8min2(x1, x2), rgb8min2(x3,x4));}
rgb8 rgb8min5(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4, rgb8 x5) {return rgb8min3(rgb8min2(x1, x2), rgb8min2(x3,x4), x5);}

/* --------- */
/* -- Max -- */
/* --------- */

float32 f32max (float32 x1, float32 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float32 f32max2(float32 x1, float32 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float32 f32max3(float32 x1, float32 x2, float32 x3)                         {return f32max2(f32max2(x1, x2), x3);}
float32 f32max4(float32 x1, float32 x2, float32 x3, float32 x4)             {return f32max2(f32max2(x1, x2), f32max2(x3, x4));}
float32 f32max5(float32 x1, float32 x2, float32 x3, float32 x4, float32 x5) {return f32max3(f32max2(x1, x2), f32max2(x3, x4), x5);}

float32  f64max  (float64 x1, float64 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float32  f64max2 (float64 x1, float64 x2)                                     {if (x1>x2)  return x1; else  return x2;}
float32  f64max3 (float64 x1, float64 x2, float64 x3)                         {return f64max2(f64max2(x1, x2), x3);}
float32  f64max4 (float64 x1, float64 x2, float64 x3, float64 x4)             {return f64max2(f64max2(x1, x2), f64max2(x3, x4));}
float32  f64max5 (float64 x1, float64 x2, float64 x3, float64 x4, float64 x5) {return f64max3(f64max2(x1, x2), f64max2(x3, x4), x5);}

uint8 ui8max (uint8 x1, uint8 x2)                               {if (x1>x2)  return x1; else  return x2;}
uint8 ui8max2(uint8 x1, uint8 x2)                               {if (x1>x2)  return x1; else  return x2;}
uint8 ui8max3(uint8 x1, uint8 x2, uint8 x3)                     {return ui8max2(ui8max2(x1, x2), x3);}
uint8 ui8max4(uint8 x1, uint8 x2, uint8 x3, uint8 x4)           {return ui8max2(ui8max2(x1, x2), ui8max2(x3, x4));}
uint8 ui8max5(uint8 x1, uint8 x2, uint8 x3, uint8 x4, uint8 x5) {return ui8max3(ui8max2(x1, x2), ui8max2(x3, x4), x5);}

uint16 ui16max (uint16 x1, uint16 x2)                                  {if (x1>x2)  return x1; else  return x2;}
uint16 ui16max2(uint16 x1, uint16 x2)                                  {if (x1>x2)  return x1; else  return x2;}
uint16 ui16max3(uint16 x1, uint16 x2, uint16 x3)                       {return ui16max2(ui16max2(x1, x2), x3);}
uint16 ui16max4(uint16 x1, uint16 x2, uint16 x3, uint16 x4)            {return ui16max2(ui16max2(x1, x2), ui16max2(x3, x4));}
uint16 ui16max5(uint16 x1, uint16 x2, uint16 x3, uint16 x4, uint16 x5) {return ui16max3(ui16max2(x1, x2), ui16max2(x3, x4), x5);}

uint32 ui32max (uint32 x1, uint32 x2)                                  {if (x1>x2) return x1; else  return x2;}
uint32 ui32max2(uint32 x1, uint32 x2)                                  {if (x1>x2) return x1; else  return x2;}
uint32 ui32max3(uint32 x1, uint32 x2, uint32 x3)                       {return ui32max2(ui32max2(x1, x2), x3);}
uint32 ui32max4(uint32 x1, uint32 x2, uint32 x3, uint32 x4)            {return ui32max2(ui32max2(x1, x2), ui32max2(x3, x4));}
uint32 ui32max5(uint32 x1, uint32 x2, uint32 x3, uint32 x4, uint32 x5) {return ui32max3(ui32max2(x1, x2), ui32max2(x3, x4), x5);}

rgb8 rgb8max (rgb8 x1, rgb8 x2)                            {rgb8 y; y.r = ui8max2(x1.r,x2.r);y.g=ui8max2(x1.g,x2.g);y.b=ui8max2(x1.b,x2.b);return y;}
rgb8 rgb8max2(rgb8 x1, rgb8 x2)                            {rgb8 y; y.r = ui8max2(x1.r,x2.r);y.g=ui8max2(x1.g,x2.g);y.b=ui8max2(x1.b,x2.b);return y;}
rgb8 rgb8max3(rgb8 x1, rgb8 x2, rgb8 x3)                   {return rgb8max2(rgb8max2(x1, x2), x3);}
rgb8 rgb8max4(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4)          {return rgb8max2(rgb8max2(x1, x2), rgb8max2(x3,x4));}
rgb8 rgb8max5(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4, rgb8 x5) {return rgb8max3(rgb8max2(x1, x2), rgb8max2(x3,x4), x5);}

/* ----------- */
/* -- Other -- */
/* ----------- */

/* ------------------------------- */
int32 i32bit(int32 x, int n)
/* ------------------------------- */
{
  return ((x>>n)&1);
}
/* --------------------------- */
int32 sym_int32(int32 x)
/* --------------------------- */
{
  int i;
  int32 y = 0;
  for(i=0; i<31; i++) {
    y = y | (x & 1);
    x = x >> 1;
  }
  y = y | x;
  return y;
}


/* ----------------------- */
int ilog2(int x)
/* ----------------------- */
{
  int s = 0;
  while(x) {
    x >>= 1;
    s++;
  }
  return s - 1;
}
/* ----------------------------- */
int next_power2(int x)
/* ----------------------------- */
{
  int s = ilog2(x);
  int n = 1 << s;
  
  if(x != n)
    return n << 1;
  else
    return n;
}
/* ---------------------------- */
int gcd(int u, int v)
/* ---------------------------- */
{
  int r;
  while(v) {
    r = u % v;
    u = v;
    v = r;
  }
  return u;
}
/* ---------------------------- */
int lcm(int u, int v)
/* ---------------------------- */
{
  return (u*v)/gcd(u,v);
}
