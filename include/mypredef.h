/* ------------------ */
/* --- mypredef.h --- */
/* ------------------ */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 */

// see predef.sourceforge.net
// for complete predef list


#ifndef __MY_PREDEF_H__
#define __MY_PREDEF_H__

#ifdef __cplusplus
//#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include mypredef.h ***")
#endif

// ------------------ //
// -- Architecture -- //
// ------------------ //

#ifdef _ARCH_PPC
#define myArch_Altivec
#define myArch Altivec
#endif
    
#if defined(_M_IX86) || defined(i386) || defined (__i386__) || defined (__x86_64) || defined (__x86_64__)
#define myArch_SSE
#define myArch SSE
#endif

#if defined(__THW_CBEA__)
#define myArch_Cell
#define myArch Cell
#endif
    
// -------------- //    
// -- Compiler -- //
// -------------- //

#ifdef _INTEL_COMPILER
#define myCompiler_ICC
#define myCompiler ICC
#endif
    
#if defined (__xlc__) || defined(__XLC__)
#define myCompiler_XLC
#define myCompiler XLC
#endif

#ifdef _MSC_VER
#define myCompiler_MSC
#define myCompiler MSC
#endif
    
#if !defined(myCompiler_ICC) && !defined(myCompiler_XLC) && !defined(myCompiler_MSC)
#define myCompiler_GCC
#endif
// par defaut GCC est aussi defini lors de l'utilisation de ICC   

// -------- //
// -- OS -- //
// -------- //

#if defined(linux) || defined(__linux)
#define myOS_Linux
#define myOS Linux
#endif

#if defined(__APPLE__)
#define myOS_MacOS
#define myOS MacOS
#endif
    
#if defined(WIN32) || defined(_WIN32)
#define myOS_Windows
#define myOS Windows
#endif    
    
#ifdef __cplusplus
}
#endif

#endif /* __MY_PREDEF_H__ */
