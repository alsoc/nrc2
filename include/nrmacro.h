/* ----------------- */
/* --- nrmacro.h --- */
/* ----------------- */

/*
 * Copyright (c) 2000-2014, Lionel Lacassagne, All rights reserved
 * Univ Paris Sud XI, CNRS
*/

#ifndef __NRMACRO_H__
#define __NRMACRO_H__

#ifdef __cplusplus
extern "C" {
#endif

#define RGB32CAST8(s,d) d.r=(uint8)s.r; d.g=(uint8)s.g; d.b=(uint8)s.b 
#define RGBX32CAST8(s,d) d.r=(uint8)s.r; d.g=(uint8)s.g; d.b=(uint8)s.b; d.x=(uint8)s.x  

#define RGB32_RGB8(s,d) d.r=(uint8)s.r; d.g=(uint8)s.g; d.b=(uint8)s.b 
#define RGBX32_RGBX8(s,d) d.r=(uint8)s.r; d.g=(uint8)s.g; d.b=(uint8)s.b; d.x=(uint8)s.x  

#define RGB8_NOT(s,d)      d.r=!s.r;       d.g=!s.g;       d.b=!s.b
#define RGB8_OR(s1,s2,d)   d.r=s1.r|s2.r;  d.g=s1.g|s2.g;  d.b=s1.b|s2.b
#define RGB8_XOR(s1,s2,d)  d.r=s1.r^s2.r;  d.g=s1.g^s2.g;  d.b=s1.b^s2.b
#define RGB8_AND(s1,s2,d)  d.r=s1.r&s2.r;  d.g=s1.g&s2.g;  d.b=s1.b&s2.b
#define RGB8_NAND(s1,s2,d) d.r=!(s1.r&s2.r); d.g=!(s1.g&s2.g); d.b=!(s1.b&s2.b)

#define RGBX8_NOT(s,d)      d.r=~s.r;       d.g=~s.g;       d.b=~s.b;       d.x=~s.x
#define RGBX8_OR(s1,s2,d)   d.r=s1.r|s2.r;  d.g=s1.g|s2.g;  d.b=s1.b|s2.b;   d.x=s1.x|s2.x
#define RGBX8_XOR(s1,s2,d)  d.r=s1.r^s2.r;  d.g=s1.g^s2.g;  d.b=s1.b^s2.b;   d.x=s1.x^s2.x
#define RGBX8_AND(s1,s2,d)  d.r=s1.r&s2.r;  d.g=s1.g&s2.g;  d.b=s1.b&s2.b;   d.x=s1.x&s2.x
#define RGBX8_NAND(s1,s2,d) d.r=!(s1.r&s2.r); d.g=!(s1.g&s2.g); d.b=!(s1.b&s2.b);  d.x=!(s1.x&s2.x)

#define RGB8_ZERO(s) s.r=0; s.g=0; s.b=0
#define RGBX8_ZERO(s) s.r=0; s.g=0; s.b=0; s.x=0

#define RGB8_NEG(s,d) d.r=-s.r; d.g=-s.g; d.b=-s.b
#define RGBX8_NEG(s,d) d.r=-s.r; d.g=-s.g; d.b=-s.b; d.x=-s.x

#define RGB8_ABS(s,d) d.r=abs(s.r); d.g=abs(s.g); d.b=abs(s.b)
#define RGBX8_ABS(s,d) d.r=abs(s.r); d.g=abs(s.g); d.b=abs(s.b); d.x=abs(s.x)

#define RGB8_SAT(s, sat, d)  if(s.r>sat.r) d.r=sat.r; if(s.g>sat.g) d.g=sat.g; if(s.b>sat.b) d.b=sat.b 
#define RGB8_SATK(s, sat, d) if(s.r>sat)   d.r=sat;   if(s.g>sat)   d.g=sat;   if(s.b>sat)   d.b=sat; 

#define RGBX8_SAT(s, sat, d)  if(s.r>sat.r) d.r=sat.r; if(s.g>sat.g) d.g=sat.g; if(s.b>sat.b) d.b=sat.b; if(s.x>sat.x) s.x=sat.x
#define RGBX8_SATK(s, sat, d) if(s.r>sat)   d.r=sat;   if(s.g>sat)   d.g=sat;   if(s.b>sat)   d.b=sat;   if(s.x>sat)     s.x=sat

#define RGB8_ADD(s1,s2,d) d.r=s1.r+s2.r; d.g=s1.g+s2.g; d.b=s1.b+s2.b
#define RGB8_SUB(s1,s2,d) d.r=s1.r-s2.r; d.g=s1.g-s2.g; d.b=s1.b-s2.b
#define RGB8_MUL(s1,s2,d) d.r=s1.r*s2.r; d.g=s1.g*s2.g; d.b=s1.b*s2.b
#define RGB8_DIV(s1,s2,d) d.r=s1.r/s2.r; d.g=s1.g/s2.g; d.b=s1.b/s2.b

#define RGBX8_ADD(s1,s2,d) d.r=s1.r+s2.r; d.g=s1.g+s2.g; d.b=s1.b+s2.b; d.x=s1.x+s2.x
#define RGBX8_SUB(s1,s2,d) d.r=s1.r-s2.r; d.g=s1.g-s2.g; d.b=s1.b-s2.b; d.x=s1.x-s2.x
#define RGBX8_MUL(s1,s2,d) d.r=s1.r*s2.r; d.g=s1.g*s2.g; d.b=s1.b*s2.b; d.x=s1.x*s2.x
#define RGBX8_DIV(s1,s2,d) d.r=s1.r/s2.r; d.g=s1.g/s2.g; d.b=s1.b/s2.b; d.x=s1.x/s2.x

#define RGB8_ADDK(s,c,d) d.r=s.r+c; d.g=s.g+c; d.b=s.b+c
#define RGB8_SUBK(s,c,d) d.r=s.r-c; d.g=s.g-c; d.b=s.b-c
#define RGB8_MULK(s,c,d) d.r=s.r*c; d.g=s.g*c; d.b=s.b*c
#define RGB8_DIVK(s,c,d) d.r=s.r/c; d.g=s.g/c; d.b=s.b/c

#define RGB8_DUP(s,d) d.r=s.r; d.g=s.g; d.b=s.b 
#define RGB8_SET(s,d) d.r=s.r; d.g=s.g; d.b=s.b 
#define RGB8_SETNEG(s,d) d.r=-s.r; d.g=-s.g; d.b=-s.b 

#define RGB8_ACC(s,d) d.r+=s.r; d.g+=s.g; d.b+=s.b
#define RGB8_SCC(s,d) d.r-=s.r; d.g-=s.g; d.b-=s.b

#define RGB8_MUL2(s, d) d.r=s.r<<1; d.g=s.g<<1; d.b=s.b<<1
#define RGB8_MUL4(s, d) d.r=s.r<<2; d.g=s.g<<2; d.b=s.b<<2
#define RGB8_MUL6(s, d) d.r=6*s.r;  d.g=6*s.g;  d.b=6*s.b

#define RGB8_MAC(s,c,d) d.r+=c*s.r; d.g+=c*s.g;d.b+=c*s.b

#define RGB8_MAC2(s, d) d.r+=s.r<<1; d.g+=s.g<<1; d.b+=s.b<<1
#define RGB8_MAC4(s, d) d.r+=s.r<<2; d.g+=s.g<<2; d.b+=s.b<<2
#define RGB8_MAC6(s, d) d.r+=6*s.r;  d.g+=6*s.g;  d.b+=6*s.b

#define RGB8_MSC(s,c,d) d.r-=c*s.r; d.g-=c*s.g;d.b-=c*s.b

#define RGB8_MSC2(s, d) d.r-=s.r<<1; d.g-=s.g<<1; d.b-=s.b<<1
#define RGB8_MSC4(s, d) d.r-=s.r<<2; d.g-=s.g<<2; d.b-=s.b<<2
#define RGB8_MSC6(s, d) d.r-=6*s.r;  d.g-=6*s.g;  d.b-=6*s.b

#define RGB8_DIV2(s, d) d.r=s.r>>1; d.g=s.g>>1; d.b=s.b>>1
#define RGB8_DIV4(s, d) d.r=s.r>>2; d.g=s.g>>2; d.b=s.b>>2

#define RGB8_MULFRAC(s, a, b, d) d.r=(a.r*s.r)/b.r; d.g=(a.g*s.g)/b.g; d.b=(a.b*s.b)/b.b
#define RGB8_MULFRACK(s, a, b, d) d.r=(a*s.r)/b; d.g=(a*s.g)/b; d.b=(a*s.b)/b

#define RGBX8_MULFRAC(s, a, b, d) d.r=(a.r*s.r)/b.r; d.g=(a.g*s.g)/b.g; d.b=(a.b*s.b)/b.b;  d.x=(a.x*s.x)/b.x
#define RGBX8_MULFRACK(s, a, b, d) d.r=(a*s.r)/b; d.g=(a*s.g)/b; d.b=(a*s.b)/b;  d.x=(a*s.x)/b

#define RGB8_MULSHIFT(s, a, n, d) d.r=(a.r*s.r)>>n.r; d.g=(a.g*s.g)>>n.g; d.b=(a.b*s.b)>>n.b
#define RGBX8_MULSHIFT(s, a, n, d) d.r=(a.r*s.r)>>n.r; d.g=(a.g*s.g)>>n.g; d.b=(a.b*s.b)>>n.b;  d.x=(a.x*s.x)>>n.x

#define RGB8_MULSHIFTK(s, a, n, d) d.r=(a*s.r)>>n; d.g=(a*s.g)>>n; d.b=(a*s.b)>>n
#define RGBX8_MULSHIFTK(s, a, n, d) d.r=(a*s.r)>>n; d.g=(a*s.g)>>n; d.b=(a*s.b)>>n;  d.x=(a*s.x)>>n


#define RGB8_LSHIFT(s, n, d) d.r=s.r<<n; d.g=s.g<<n; d.b=s.b<<n
#define RGB8_RSHIFT(s, n, d) d.r=s.r>>n; d.g=s.g>>n; d.b=s.b>>n

#define RGB8_RR5(x0, x1, x2, x3, x4) x0=x1; x1=x2; x2=x3; x3=x4

#define RGB8_monoLUT(s, lut, d)  d.r=lut[s.r];   d.g=lut[s.g];   d.b=lut[s.b]; 
#define RGB8_colorLUT(s, lut, d) d.r=lut[s.r].r; d.g=lut[s.g].g; d.b=lut[s.b].b; 

#ifdef __cplusplus
}
#endif

#endif // __NRMACRO_H__
