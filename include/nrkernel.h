// ------------------
// --- nrkernel.c ---
// ------------------

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef __NRKERNEL_H__
#define __NRKERNEL_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrkernel.h ***")
#endif

void nrerror(char error_text[]);
void nrerror0(char error_text[]);    
void nrerror1(char *format, ...);
    
void Error  (char *format, ...);
void Warning(char *format, ...);


#ifdef __cplusplus
}
#endif

#endif // __NRKERNEL_H__
