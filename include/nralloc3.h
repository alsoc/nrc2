/* ------------------ */
/* --- nralloc3.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
* 
*/


#ifndef __NRALLOC3_H__
#define __NRALLOC3_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nralloc3.h ***")
#endif

double*** d3tensor(long nrl, long nrh, long ncl, long nch, long ndl, long ndh);
void free_d3tensor(double  ***t,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);



sint8***   si8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
uint8***   ui8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
sint16*** si16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
uint16*** ui16cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
sint32*** si32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
uint32*** ui32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
float32*** f32cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
float64*** f64cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
rgb8***   rgb8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
rgbx8*** rgbx8cube(long ndl, long ndh, long nrl, long nrh, long ncl, long nch);

void free_si8cube  (sint8   ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_ui8cube  (uint8   ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_si16cube (sint16  ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_ui16cube (uint16  ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_si32cube (sint32  ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_ui32cube (uint32  ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_f32cube  (float32 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_f64cube  (float64 ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_rgb8cube (rgb8    ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);
void free_rgbx8cube(rgbx8   ***c,long nrl,long nrh,long ncl,long nch,long ndl,long ndh);

#ifdef __cplusplus
}
#endif

#endif /* __NRALLOC3_H__ */
