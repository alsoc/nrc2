/* ------------------ */
/* --- nrarith0.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef __NRARITH0_H__
#define __NRARITH0_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif

#ifdef VERBOSE_PRAGMA
//#pragma message(" -include nrarith0.h")
#endif

/* ---------- */
/* -- Swap -- */
/* ---------- */

void   i8swap(int8    *a, int8    *b);
void  i16swap(int16   *a, int16   *b);
void  i32swap(int32   *a, int32   *b);
void  i64swap(int64   *a, int64   *b);
void  f32swap(float32 *a, float32 *b);
void  f64swap(float64 *a, float64 *b);
void  rgb8swap(rgb8   *a, rgb8    *b);
void rgbx8swap(rgbx8  *a, rgbx8   *b);

/* --------- */
/* -- Min -- */
/* --------- */

float32 f32min (float32 x1, float32 x2);
float32 f32min2(float32 x1, float32 x2);
float32 f32min3(float32 x1, float32 x2, float32 x3);
float32 f32min4(float32 x1, float32 x2, float32 x3, float32 x4);
float32 f32min5(float32 x1, float32 x2, float32 x3, float32 x4, float32 x5);

float32 f64min (float64 x1, float64 x2);
float32 f64min2(float64 x1, float64 x2);
float32 f64min3(float64 x1, float64 x2, float64 x3);
float32 f64min4(float64 x1, float64 x2, float64 x3, float64 x4);
float32 f64min5(float64 x1, float64 x2, float64 x3, float64 x4, float64 x5);

byte  bmin (byte x1, byte x2);
byte  bmin2(byte x1, byte x2);
byte  bmin3(byte x1, byte x2, byte x3);
byte  bmin4(byte x1, byte x2, byte x3, byte x4);
byte  bmin5(byte x1, byte x2, byte x3, byte x4, byte x5);

uint8 ui8min (uint8 x1, uint8 x2);
uint8 ui8min2(uint8 x1, uint8 x2);
uint8 ui8min3(uint8 x1, uint8 x2, uint8 x3);
uint8 ui8min4(uint8 x1, uint8 x2, uint8 x3, uint8 x4);
uint8 ui8min5(uint8 x1, uint8 x2, uint8 x3, uint8 x4, uint8 x5);

uint16 ui16min (uint16 x1, uint16 x2);
uint16 ui16min2(uint16 x1, uint16 x2);
uint16 ui16min3(uint16 x1, uint16 x2, uint16 x3);
uint16 ui16min4(uint16 x1, uint16 x2, uint16 x3, uint16 x4);
uint16 ui16min5(uint16 x1, uint16 x2, uint16 x3, uint16 x4, uint16 x5);

uint32 ui32min (uint32 x1, uint32 x2);
uint32 ui32min2(uint32 x1, uint32 x2);
uint32 ui32min3(uint32 x1, uint32 x2, uint32 x3);
uint32 ui32min4(uint32 x1, uint32 x2, uint32 x3, uint32 x4);
uint32 ui32min5(uint32 x1, uint32 x2, uint32 x3, uint32 x4, uint32 x5);

rgb8 rgb8min (rgb8 x1, rgb8 x2);
rgb8 rgb8min2(rgb8 x1, rgb8 x2);
rgb8 rgb8min3(rgb8 x1, rgb8 x2, rgb8 x3);
rgb8 rgb8min4(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4);
rgb8 rgb8min5(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4, rgb8 x5);

/* --------- */
/* -- Max -- */
/* --------- */
float32 f32max (float32 x1, float32 x2);
float32 f32max2(float32 x1, float32 x2);
float32 f32max3(float32 x1, float32 x2, float32 x3);
float32 f32max4(float32 x1, float32 x2, float32 x3, float32 x4);
float32 f32max5(float32 x1, float32 x2, float32 x3, float32 x4, float32 x5);

float32 f64max (float64 x1, float64 x2);
float32 f64max2(float64 x1, float64 x2);
float32 f64max3(float64 x1, float64 x2, float64 x3);
float32 f64max4(float64 x1, float64 x2, float64 x3, float64 x4);
float32 f64max5(float64 x1, float64 x2, float64 x3, float64 x4, float64 x5);

float32  bmax (byte x1,  byte x2);
float32  bmax2(byte x1,  byte x2);
float32  bmax3(byte x1,  byte x2, byte x3);
float32  bmax4(byte x1,  byte x2, byte x3, byte x4);
float32  bmax5(byte x1,  byte x2, byte x3, byte x4, byte x5);

uint8 ui8max (uint8 x1, uint8 x2);
uint8 ui8max2(uint8 x1, uint8 x2);
uint8 ui8max3(uint8 x1, uint8 x2, uint8 x3);
uint8 ui8max4(uint8 x1, uint8 x2, uint8 x3, uint8 x4);
uint8 ui8max5(uint8 x1, uint8 x2, uint8 x3, uint8 x4, uint8 x5);

uint16 ui16max (uint16 x1, uint16 x2);
uint16 ui16max2(uint16 x1, uint16 x2);
uint16 ui16max3(uint16 x1, uint16 x2, uint16 x3);
uint16 ui16max4(uint16 x1, uint16 x2, uint16 x3, uint16 x4);
uint16 ui16max5(uint16 x1, uint16 x2, uint16 x3, uint16 x4, uint16 x5);

uint32 ui32max (uint32 x1, uint32 x2);
uint32 ui32max2(uint32 x1, uint32 x2);
uint32 ui32max3(uint32 x1, uint32 x2, uint32 x3);
uint32 ui32max4(uint32 x1, uint32 x2, uint32 x3, uint32 x4);
uint32 ui32max5(uint32 x1, uint32 x2, uint32 x3, uint32 x4, uint32 x5);

rgb8 rgb8max (rgb8 x1, rgb8 x2);
rgb8 rgb8max2(rgb8 x1, rgb8 x2);
rgb8 rgb8max3(rgb8 x1, rgb8 x2, rgb8 x3);
rgb8 rgb8max4(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4);
rgb8 rgb8max5(rgb8 x1, rgb8 x2, rgb8 x3, rgb8 x4, rgb8 x5);

/* ----------- */
/* -- Other -- */
/* ----------- */

int32 ibit(int32 x, int n);
int32 sym_int32(int32 x);
int myLog2(int x);
int next_power2(int x);
int myGCD(int u, int v);
int myLCM(int u, int v);

#ifdef __cplusplus
}
#endif

#else
//#pragma message(" Warning : attempt to re-include nrarith0.h") 
#endif

