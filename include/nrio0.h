/* --------------- */
/* --- nrio0.h --- */
/* --------------- */

/*
* Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
* Univ Paris Sud XI, CNRS
*/

#ifndef _NR_IO0_H_
#define _NR_IO0_H_

#ifdef __cplusplus
#pragma message ("C++")
extern "C" {
#endif
    
#ifdef VERBOSE_PRAGMA
//#pragma message ("- *** include nrio0.h ***")
#endif

void generate_filename_k_ndigit          (char *filename, int k, int ndigit,                  char *complete_filename);
void generate_filename_k_ndigit_extension(char *filename, int k, int ndigit, char *extension, char *complete_filename);

void generate_path_filename                     (char *path, char *filename,                                            char *complete_filename);
void generate_path_filename_extension           (char *path, char *filename,                           char *extension, char *complete_filename);
void generate_path_filename_suffix_extension    (char *path, char *filename, char *suffix,             char *extension, char *complete_filename);
void generate_path_filename_k_ndigit_extension  (char *path, char *filename, int k, int ndigit,        char *extension, char *complete_filename);
void generate_path_filename_k_ndigit_l_extension(char *path, char *filename, int k, int ndigit, int l, char *extension, char *complete_filename);

void select_display_positive_parameters(int iformat, char **format, char **str);

#ifdef __cplusplus
}
#endif

#endif // _NR_IO0_H_
