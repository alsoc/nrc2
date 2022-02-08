/* ----------------- */
/* --- nrsort2.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef _NRSORT2_H_
#define _NRSORT2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
//#pragma message ("C++")
#endif
extern "C" {
#endif

#ifdef PRAGMA_VERBOSE
//#pragma message("- include nrsort2.h")
#endif

void sort_dmatrix_selection (double *m, long nl, long nh);

void sort_imatrix_selection2(int **m, long nl, long nh);
void sort_imatrix_selection (int **m, long nrl, long nrh, long ncl, long nch, long nrow);

void sort_imatrix_leftpart_selection2(int **m, long nl, long nh, long len);
/*
 * Sort the first len item of a 2-row matrix
 */

void sort_index_imatrix_selection_kmin(int   **key, long nrl,long nrh,long ncl, long nch, int **index, int k);
void sort_index_imatrix_selection_kmax(int   **key, long nrl,long nrh,long ncl, long nch, int **index, int k);
/*
 * appel de "sort_index_ivector_selection_k" pour chaque ligne
 * ATTENTION L'initialisation du tableau index est fait ici
 */

void sortv_imatrix_selection_min(int **m, long nrl,long nrh,long ncl, long nch, long nc);
void sortv_imatrix_selection_max(int **m, long nrl,long nrh,long ncl, long nch, long nc);

void sortv_imatrix_selection_kmin(int **m, long nrl,long nrh,long ncl, long nch, long nc, int k);
void sortv_imatrix_selection_kmax(int **m, long nrl,long nrh,long ncl, long nch, long nc, int k);

/*
 * tri vertical, de toutes les lignes
 * tri vertical, d'une partie des lignes
 */
void sortv_index_imatrix_selection_max(int **key, long nrl,long nrh,long ncl, long nch, int *index, int nc);
void sortv_index_imatrix_selection_min(int **key, long nrl,long nrh,long ncl, long nch, int *index, int nc);
/*
 * trie de la colonne nc de la matrice key, nc[ncl..nch]
 * la matrice reste inchangee, seule l'index est modifie
 */

#ifdef __cplusplus
}
#endif

#endif /* _NRSORT2_H_ */
