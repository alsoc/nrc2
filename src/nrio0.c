/* --------------- */
/* --- nrio0.c --- */
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
#include <string.h> /* memcpy, strlen */
//#include <memory.h> // memcpy

#include "mypredef.h"
#include "nrtype.h"
#include "nrdef.h"
#include "nrmacro.h"
#include "nrkernel.h"

#include "nralloc1.h"
#include "nrio0.h"

/* --------------------------------------------------------------------------------------------------- */
void generate_filename_k_ndigit(char *filename, int k, int ndigit, char *complete_filename, int complete_filename_strlen)
/* --------------------------------------------------------------------------------------------------- */
{
    char *format = "%s%d.txt";
    
    switch(ndigit) {
        case 0 : format = "%s%d.txt";   break;
        case 1 : format = "%s%01d.txt"; break;
        case 2 : format = "%s%02d.txt"; break;
        case 3 : format = "%s%03d.txt"; break;
        case 4 : format = "%s%04d.txt"; break;
        case 5 : format = "%s%05d.txt"; break;
        case 6 : format = "%s%06d.txt"; break;
        case 7 : format = "%s%07d.txt"; break;
        case 8 : format = "%s%08d.txt"; break;
        case 9 : format = "%s%09d.txt"; break;
    }
    //sprintf(complete_filename, format, filename, k);
    //snprintf(complete_filename, strlen(complete_filename), format, filename, k);
    int len = snprintf(complete_filename, complete_filename_strlen, format, filename, k);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_filename_k_ndigit: filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* ------------------------------------------------------------------------------------------------------------------------------ */
void generate_filename_k_ndigit_extension(char *filename, int k, int ndigit, char *extension, char *complete_filename, int complete_filename_strlen)
/* ------------------------------------------------------------------------------------------------------------------------------ */
{
    char *format = "%s%d.%s";
    
    switch(ndigit) {
        case 0 : format = "%s%d.%s";   break;
        case 1 : format = "%s%01d.%s"; break;
        case 2 : format = "%s%02d.%s"; break;
        case 3 : format = "%s%03d.%s"; break;
        case 4 : format = "%s%04d.%s"; break;
        case 5 : format = "%s%05d.%s"; break;
        case 6 : format = "%s%06d.%s"; break;
        case 7 : format = "%s%07d.%s"; break;
        case 8 : format = "%s%08d.%s"; break;
        case 9 : format = "%s%09d.%s"; break;
    }
    //sprintf(complete_filename, format, filename, k, extension);
    //snprintf(complete_filename, strlen(complete_filename), format, filename, k, extension);
    int len = snprintf(complete_filename, complete_filename_strlen, format, filename, k, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_filename_k_ndigit_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */
void generate_filename_k_ndigit_l_extension(char *filename, int k, int ndigit, int l, char *extension, char *complete_filename, int complete_filename_strlen)
/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */
{
    char *format = "%s%d_%d.%s";
    
    switch(ndigit) {
        case 0 : format = "%s%d_%d.%s";   break;
        case 1 : format = "%s%01d_%01d.%s"; break;
        case 2 : format = "%s%02d_%02d.%s"; break;
        case 3 : format = "%s%03d_%03d.%s"; break;
        case 4 : format = "%s%04d_%04d.%s"; break;
        case 5 : format = "%s%05d_%05d.%s"; break;
        case 6 : format = "%s%06d_%06d.%s"; break;
        case 7 : format = "%s%07d_%07d.%s"; break;
        case 8 : format = "%s%08d_%08d.%s"; break;
        case 9 : format = "%s%09d_%09d.%s"; break;
    }
    int len = snprintf(complete_filename, complete_filename_strlen, format, filename, k, l, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_filename_k_ndigit_l_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}

/* ---------------------------------------------------------------------------------------- */
void generate_path_filename(char *path, char *filename, char *complete_filename, int complete_filename_strlen)
/* ---------------------------------------------------------------------------------------- */
{
    //sprintf(complete_filename, "%s%s", path, filename);
    //snprintf(complete_filename, strlen(complete_filename), "%s%s", path, filename);
    int len = snprintf(complete_filename, complete_filename_strlen, "%s%s", path, filename);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_path_filename: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* ------------------------------------------------------------------------------------------------------------------- */
void generate_path_filename_extension(char *path, char *filename, char *extension, char *complete_filename, int complete_filename_strlen)
/* ------------------------------------------------------------------------------------------------------------------- */
{
    //sprintf(complete_filename, "%s%s.%s", path, filename, extension);
    //snprintf(complete_filename, strlen(complete_filename), "%s%s.%s", path, filename, extension);
    int len = snprintf(complete_filename, complete_filename_strlen, "%s%s.%s", path, filename, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_path_filename_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* ---------------------------------------------------------------------------------------------------------------------------------------- */
void generate_path_filename_suffix_extension(char *path, char *filename, char *suffix, char *extension, char *complete_filename, int complete_filename_strlen)
/* ---------------------------------------------------------------------------------------------------------------------------------------- */
{
    //sprintf(complete_filename, "%s%s%s.%s", path, filename, suffix, extension);
    //snprintf(complete_filename, strlen(complete_filename), "%s%s%s.%s", path, filename, suffix, extension);
    int len = snprintf(complete_filename, complete_filename_strlen, "%s%s%s.%s", path, filename, suffix, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_path_filename_suffix_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* ----------------------------------------------------------------------------------------------------------------------------------------------- */
void generate_path_filename_k_ndigit_extension(char *path, char *filename, int k, int ndigit, char *extension, char *complete_filename, int complete_filename_strlen)
/* ----------------------------------------------------------------------------------------------------------------------------------------------- */
{
    char *format = "%s%s%d.%s";
    
    switch(ndigit) {
        case 0 : format = "%s%s%d.%s";   break;
        case 1 : format = "%s%s%01d.%s"; break;
        case 2 : format = "%s%s%02d.%s"; break;
        case 3 : format = "%s%s%03d.%s"; break;
        case 4 : format = "%s%s%04d.%s"; break;
        case 5 : format = "%s%s%05d.%s"; break;
        case 6 : format = "%s%s%06d.%s"; break;
        case 7 : format = "%s%s%07d.%s"; break;
        case 8 : format = "%s%s%08d.%s"; break;
        case 9 : format = "%s%s%09d.%s"; break;
    }
    //sprintf(complete_filename, format, path, filename, k, extension);
    //snprintf(complete_filename, strlen(complete_filename), format, path, filename, k, extension);
    int len = snprintf(complete_filename, complete_filename_strlen, format, path, filename, k, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_path_filename_k_ndigit_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */
void generate_path_filename_k_ndigit_l_extension(char *path, char *filename, int k, int ndigit, int l, char *extension, char *complete_filename, int complete_filename_strlen)
/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */
{
    char *format = "%s%s%d_%d.%s";
    
    switch(ndigit) {
        case 0 : format = "%s%s%d_%d.%s";   break;
        case 1 : format = "%s%s%01d_%01d.%s"; break;
        case 2 : format = "%s%s%02d_%02d.%s"; break;
        case 3 : format = "%s%s%03d_%03d.%s"; break;
        case 4 : format = "%s%s%04d_%04d.%s"; break;
        case 5 : format = "%s%s%05d_%05d.%s"; break;
        case 6 : format = "%s%s%06d_%06d.%s"; break;
        case 7 : format = "%s%s%07d_%07d.%s"; break;
        case 8 : format = "%s%s%08d_%08d.%s"; break;
        case 9 : format = "%s%s%09d_%09d.%s"; break;
    }
    //sprintf(complete_filename, format, path, filename, k, l, extension);
    //snprintf(complete_filename, strlen(complete_filename), format, path, filename, k, l, extension);
    int len = snprintf(complete_filename, complete_filename_strlen, format, path, filename, k, l, extension);
    
    if(len > complete_filename_strlen) {
        nrerror1("generate_path_filename_k_ndigit_l_extension: complete_filename_strlen = %d BUT required len = %d\n", complete_filename_strlen, len);
    }
}
// ----------------------------------------------------------------------------
void select_display_positive_parameters(int iformat, char **format, char **str)
// ----------------------------------------------------------------------------
{
    char *format1 = "%1d", *str1 = " ";
    char *format2 = "%2d", *str2 = "  ";
    char *format3 = "%3d", *str3 = "   ";
    char *format4 = "%4d", *str4 = "    ";
    char *format5 = "%5d", *str5 = "     ";
    char *format6 = "%6d", *str6 = "      ";
    char *format7 = "%7d", *str7 = "       ";
    char *format8 = "%8d", *str8 = "        ";
    char *format9 = "%9d", *str9 = "         ";
    
    switch(iformat) {
        case 1:  *format = format1; *str = str1; break;
        case 2:  *format = format2; *str = str2; break;
        case 3:  *format = format3; *str = str3; break;
        case 4:  *format = format4; *str = str4; break;
        case 5:  *format = format5; *str = str5; break;
        case 6:  *format = format6; *str = str6; break;
        case 7:  *format = format7; *str = str7; break;
        case 8:  *format = format8; *str = str8; break;
        case 9:  *format = format9; *str = str9; break;
        default: *format = format3; *str = str3; break;
    }
}
