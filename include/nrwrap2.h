/* ----------------- */
/* --- nrwrap2.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
 * 
*/

#ifndef _NR_WRAP2_H_
#define _NR_WRAP2_H_

#ifdef __cplusplus
#ifdef PRAGMA_VERBOSE
#pragma message ("C++")
#endif
extern "C" {
#endif

// ------------------ //
// --- matrix_map --- //
// ------------------ //

sint8**   si8matrix_map(long nrl, long nrh, long ncl, long nch);
uint8**   ui8matrix_map(long nrl, long nrh, long ncl, long nch);
sint16** si16matrix_map(long nrl, long nrh, long ncl, long nch);
uint16** ui16matrix_map(long nrl, long nrh, long ncl, long nch);
sint32** si32matrix_map(long nrl, long nrh, long ncl, long nch);
uint32** ui32matrix_map(long nrl, long nrh, long ncl, long nch);
sint64** si64matrix_map(long nrl, long nrh, long ncl, long nch);
uint64** ui64matrix_map(long nrl, long nrh, long ncl, long nch);

float32** f32matrix_map(long nrl, long nrh, long ncl, long nch);
float64** f64matrix_map(long nrl, long nrh, long ncl, long nch);

rgb8**   rgb8matrix_map(long nrl, long nrh, long ncl, long nch);
rgbx8** rgbx8matrix_map(long nrl, long nrh, long ncl, long nch);

sint8**   si8matrix_map_1D_pitch(sint8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint8**   ui8matrix_map_1D_pitch(uint8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint16**  si16matrix_map_1D_pitch(sint16  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint16**  ui16matrix_map_1D_pitch(uint16  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint32**  si32matrix_map_1D_pitch(sint32  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint32**  ui32matrix_map_1D_pitch(uint32  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint64**  si64matrix_map_1D_pitch(sint64  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint64**  ui64matrix_map_1D_pitch(uint64  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
float32**  f32matrix_map_1D_pitch(float32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
float64**  f64matrix_map_1D_pitch(float64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
rgb8**    rgb8matrix_map_1D_pitch(rgb8    **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
rgbx8**  rgbx8matrix_map_1D_pitch(rgbx8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);

sint8**   si8matrix_remap_1D_pitch(sint8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint8**   ui8matrix_remap_1D_pitch(uint8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint16**  si16matrix_remap_1D_pitch(sint16  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint16**  ui16matrix_remap_1D_pitch(uint16  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint32**  si32matrix_remap_1D_pitch(sint32  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint32**  ui32matrix_remap_1D_pitch(uint32  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
sint64**  si64matrix_remap_1D_pitch(sint64  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
uint64**  ui64matrix_remap_1D_pitch(uint64  **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
float32**  f32matrix_remap_1D_pitch(float32 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
float64**  f64matrix_remap_1D_pitch(float64 **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
rgb8**    rgb8matrix_remap_1D_pitch(rgb8    **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);
rgbx8**  rgbx8matrix_remap_1D_pitch(rgbx8   **m, long nrl, long nrh, long ncl, long nch, void *data_1D, long pitch);

/*
 * ---------------
 * free_matrix_map
 * ---------------
 */

void free_si8matrix_map  (sint8   **m, long nrl, long nrh, long ncl, long nch);
void free_ui8matrix_map  (uint8   **m, long nrl, long nrh, long ncl, long nch);
void free_si16matrix_map (sint16  **m, long nrl, long nrh, long ncl, long nch);
void free_ui16matrix_map (uint16  **m, long nrl, long nrh, long ncl, long nch);
void free_si32matrix_map (sint32  **m, long nrl, long nrh, long ncl, long nch);
void free_ui32matrix_map (uint32  **m, long nrl, long nrh, long ncl, long nch);
void free_si64matrix_map (sint64  **m, long nrl, long nrh, long ncl, long nch);
void free_ui64matrix_map (uint64  **m, long nrl, long nrh, long ncl, long nch);

void free_f32matrix_map  (float32 **m, long nrl, long nrh, long ncl, long nch);
void free_f64matrix_map  (float64 **m, long nrl, long nrh, long ncl, long nch);

void free_rgb8matrix_map (rgb8    **m, long nrl, long nrh, long ncl, long nch);
void free_rgbx8matrix_map(rgbx8   **m, long nrl, long nrh, long ncl, long nch);

#ifdef __cplusplus
}
#endif

#else
//#pragma message(" Warning : attemp to re-include nrwrap2.h")
#endif /* _NR_WRAP2_H_ */
