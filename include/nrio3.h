/* --------------- */
/* --- nrio3.h --- */
/* --------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/
/* -------------------- */
/* --- display_cube --- */
/* -------------------- */
void display_i8cube  (int8    ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_i16cube (int16   ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui16cube(uint16  ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_i32cube (int32   ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_ui32cube(uint32  ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_i64cube (int64   ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);
void display_f32cube (float32 ***c,long ndl, long ndh, long nrl,long nrh,long ncl, long nch, const char *format, const char *name);

/* ---------------- */
/* -- write_cube -- */
/* ---------------- */
void write_i8cube  (int8    ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_i16cube (int16   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_ui16cube(uint16  ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_i32cube (int32   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_ui32cube(uint32  ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_i64cube (int64   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);
void write_f32cube (float32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *format, const char *filename);

void fread_i8cube  (const char *filename, int8    ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_i16cube (const char *filename, int16   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_ui16cube(const char *filename, uint16  ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_i32cube (const char *filename, int32   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_ui32cube(const char *filename, uint32  ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_i64cube (const char *filename, int64   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);
void fread_f32cube (const char *filename, float32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch);

/* ----------------- */
/* -- fwrite_cube -- */
/* ----------------- */
void fwrite_i8cube(int8     ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
void fwrite_i16cube(int16   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
void fwrite_ui16cube(uint16 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
void fwrite_i32cube(int32   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
void fwrite_ui32cube(uint32 ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
void fwrite_i64cube(int64   ***c, long ndl, long ndh, long nrl, long nrh, long ncl, long nch, const char *filename);
