// ------------------
// --- nrkernel.c ---
// ------------------

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 *
 * Distributed under the Boost Software License, Version 1.0
 * see accompanying file LICENSE.txt or copy it at
 * http://www.boost.org/LICENSE_1_0.txt
 */

/* 
* 2002/06/11 ajout des fonctions endline
*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
//#include <stdarg.h> // va_start
#include <ctype.h> // isdigit
#include <string.h> // memcpy
#include <math.h> // fabs
// #include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

/* ------------------------- */
void nrerror0(char error_text[])
/* ------------------------- */
/* Numerical Recipes standard error handler */
{
    fprintf(stderr,"Numerical Recipes run-time error...\n");
    fprintf(stderr,"%s\n",error_text);
    fprintf(stderr,"...now exiting to system...\n");
    exit(1);
}
/* ------------------------- */
void nrerror1(char *format, ...)
/* ------------------------- */
/* global error handler */
{
	/*va_list pa;
	int n;
	char *s, c;
	float f;

    printf("NRC nrerror: ");
	va_start(pa, format);

	while (*format != '\0') {
		if ( *format == '%' ) {
			switch (*++format) {
				case '%' : putchar('%'); break;
				case 'c' :
					c = va_arg(pa, int); // 'char' is promoted to 'int' when passed through '...'
					putchar(c);
					break;
				case 'd' :
					n = va_arg(pa, int);
					printf("%d", n); 
					break;
				case 'f' : // affichage d'un float
					f = (float) va_arg(pa, double);    // 'float' is promoted to 'double' when passed through '...'
					printf("%f", f); 
					break;
				case 's' :
					s = va_arg(pa, char*);
					for ( ; *s != '\0'; s++ ) 
						putchar(*s);
					break;
			}
		}
		else 
			putchar( *format);
		format++;
	}   
	va_end(pa);
	putchar('\n');
	exit(-1);
     */
}
/* ------------------------- */
void nrerror(char error_text[])
/* ------------------------- */
/* Numerical Recipes standard error handler */
{
    nrerror0(error_text);
}
// --------------------------
void Error(char *format, ...)
// --------------------------
{
    puts("NRC 'Error' with variable length args is currently unavailable");
    puts("use nrerror until 'include <stdarg.h>' issue will be addressed");
    exit(-1);
    
	/*va_list pa;
	int n;
	char *s, c;
	float f;

    printf("NRC Error: ");
	va_start(pa, format);

	while (*format != '\0') {
		if ( *format == '%' ) {
			switch (*++format) {
				case '%' : putchar('%'); break;
				case 'c' :
					c = va_arg(pa, int); // 'char' is promoted to 'int' when passed through '...'
					putchar(c);
					break;
				case 'd' :
					n = va_arg(pa, int);
					printf("%d", n); 
					break;
				case 'f' : // affichage d'un float
					f = (float) va_arg(pa, double);    // 'float' is promoted to 'double' when passed through '...'
					printf("%f", f); 
					break;
				case 's' :
					s = va_arg(pa, char*);
					for ( ; *s != '\0'; s++ ) 
						putchar(*s);
					break;
			}
		}
		else 
			putchar( *format);
		format++;
	}   
	va_end(pa);
	putchar('\n');
	exit(-1);
     */
}
// ----------------------------
void Warning(char *format, ...)
// ----------------------------
{
    puts("NRC 'Warning' with variable length args is currently unavailable");
    puts("use nrerror until 'include <stdarg.h>' issue will be addressed");
    exit(-1);
    
	/*
     va_list pa;
	int n;
	char *s, c;
	float f;

	va_start(pa, format);

	while (*format != '\0') {
		if ( *format == '%' ) {
			switch (*++format) {
				case '%' : putchar('%'); break;
				case 'c' :
					c = va_arg(pa, int); // 'char' is promoted to 'int' when passed through '...'
					putchar(c);
					break;
				case 'd' :
					n = va_arg(pa, int);
					printf("%d", n); 
					break;
				case 'f' : // affichage d'un float
					f = (float) va_arg(pa, double);    // 'float' is promoted to 'double' when passed through '...'
					printf("%f", f); 
					break;
				case 's' :
					s = va_arg(pa, char*);
					for ( ; *s != '\0'; s++ ) 
						putchar(*s);
					break;
			}
		}
		else 
			putchar( *format);
		format++;
	}   
	va_end(pa);
	putchar('\n');
	//exit(-1);
     */
}
