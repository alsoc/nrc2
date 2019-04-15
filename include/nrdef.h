 /* --------------- */
/* --- nrdef.h --- */
/* --------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef __NRDEF_H__
#define __NRDEF_H__

#ifdef __cplusplus
extern "C" {
#endif

//#define NR_VERBOSE_PRAGMA
// pour affichage de #pragma message("include XXX") 

#ifdef NR_VERBOSE_PRAGMA
#pragma message ("- *** include mypredef.h ***")
#endif

/* ------------------- */
/* --- Exportation --- */
/* ------------------- */
//#define NRC_EXPORT(x) x
//#define IMAGE_EXPORT(x) x
//#define ROUTINE(x) x
//#define NRC_ROUTINE(x) x
    
/* --------------------- */
/* --- Progress Info --- */
/* --------------------- */

#define NR_PROGRESS_INFO_ENABLED

#ifdef NR_PROGRESS_INFO_ENABLED
#define NR_PROGRESS_INFO(str, i, i0, i1) // ProgressInfo(str, i,i0, i1);
#else 
#define NR_PROGRESS_INFO(str, i, i0, i1) // no progress
#endif

/* ------------- */
/* --- Debug --- */
/* ------------- */

#define NEW(x)

#ifdef _DEBUG

#ifdef VERBOSE_PRAGMA
#pragma message ("Info : DEBUG is ON")
#endif

#define LL_DEBUG(x) x
#define DEBUG(x) x
#define VERBOSE(x) x
#define LL_OPTIMIZE(x)
//#define FUNCTION_NAME(x) NameFunction(x)
#define FUNCTION_NAME(x)
#define NAME_FUNCTION(x)

#endif // _DEBUG

/* --------------- */
/* --- Release --- */
/* --------------- */

#ifdef NDEBUG

#ifdef VERBOSE_PRAGMA
#pragma message ("Info : DEBUG is OFF")
#endif

#define LL_DEBUG(x) 
#define DEBUG(x)
#define VERBOSE(x)
#define LL_OPTIMIZE(x) x
#define FUNCTION_NAME(x)
#define NAME_FUNCTION(x)

#endif // NDEBUG

 /* --------------------- */
/* --- Error Handler --- */
/* --------------------- */
#define RCCHECK(rc) if(rc) return rc;

/* ---------------- */
/* --- Modifier --- */
/* ---------------- */
#ifndef ROUTINE
#ifndef _cplusplus

    
#ifdef WIN32
#define ROUTINE __inline
#define ROUTINE_EXPORT(X) __inline x
#define GPC_ROUTINE_EXPORT(x) __inline x __stdcall
#else
#define ROUTINE 
#define ROUTINE_EXPORT(X) x
#define GPC_ROUTINE_EXPORT(x) x
#endif

#else

#define ROUTINE inline
#define ROUTINE_EXPORT(X) inline x
#define GPC_ROUTINE_EXPORT(x) inline x __stdcall
#endif
#endif

#ifndef PRIVATE
#define PRIVATE static
#else
#pragma message("  ATTENTION : PRIVATE  already defined")
#endif

#ifndef PUBLIC
#define PUBLIC
#else
#pragma message("  ATTENTION : PUBLIC  already defined")
#endif

/*#ifndef BOOLEAN
#define BOOLEAN int
#else
#pragma message("  ATTENTION : BOOLEAN  already defined")
#endif*/

/* ---------- */
/* --- PI --- */
/* ---------- */
// for the fun
#define PI 3.1415926535897932384626433832795028841972
/* pi par Donald E. Knuth
 * PI 3.14159.26535.89793.23846.26433.83279.50288.41972
 */

/* ------------------- */
/* --- end of file --- */
/* ------------------- */

#ifdef __cplusplus
}
#endif

#endif // __NRDEF_H__
