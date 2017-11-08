/*
 * Automatically Generated from Mathematica.
 * Mon 6 Nov 2017 23:10:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_BaseRotX_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t178;
  double t194;
  double t167;
  double t199;
  t178 = Cos(var1[4]);
  t194 = Sin(var1[3]);
  t167 = Cos(var1[3]);
  t199 = Sin(var1[4]);
  p_output1[0]=t167*t178;
  p_output1[1]=t178*t194;
  p_output1[2]=-1.*t199;
  p_output1[3]=-1.*t194;
  p_output1[4]=t167;
  p_output1[5]=0;
  p_output1[6]=t167*t199;
  p_output1[7]=t194*t199;
  p_output1[8]=t178;
}



void R_BaseRotX_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
