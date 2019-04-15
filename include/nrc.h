/* -------------- */
/* --- nrc2.h --- */
/* -------------- */


/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

/*
 * main NRC header
 */

#ifndef __NRC2_H__
#define __NRC2_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "mypredef.h"
#include "nrtype.h"
#include "nrtypex.h"
#include "nrdef.h"
#include "nrkernel.h"
    
#include "nralloc1.h"
#include "nralloc2.h"
#include "nralloc2x.h"
#include "nralloc3.h"

#include "nrarith0.h"
#include "nrarith1.h"
#include "nrarith2.h"

#include "nrbool1.h"
#include "nrbool2.h"
//#include "nrbool3.h"

//#include "nrhisto.h"

#include "nrio0.h"
#include "nrio1.h"
#include "nrio2.h"
#include "nrio2x.h"
#include "nrio3.h"

#include "nrlut.h"

#include "nrmem1.h"
#include "nrmem2.h"
#include "nrmem2x.h"

#include "nrset1.h"
#include "nrset2.h"
#include "nrset3.h"

#include "nrwrap1.h"
#include "nrwrap2.h"

#ifdef VERBOSE_PRAGMA
//#pragma message ("- include nrc2.h")
#endif
    
#ifdef __cplusplus
}
#endif

#endif // __NRC2_H__
