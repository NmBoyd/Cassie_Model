/*
 * Automatically Generated from Mathematica.
 * Thu 9 Nov 2017 12:21:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_Multisense_src.h"

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
  double t636;
  double t701;
  double t1284;
  double t1117;
  double t1140;
  double t1322;
  t636 = Cos(var1[3]);
  t701 = Cos(var1[4]);
  t1284 = Sin(var1[3]);
  t1117 = Cos(var1[5]);
  t1140 = Sin(var1[4]);
  t1322 = Sin(var1[5]);
  p_output1[0]=0.2784*(t1284*t1322 + t1117*t1140*t636) + 0.0507*t636*t701 + var1[0];
  p_output1[1]=0.2784*(t1117*t1140*t1284 - 1.*t1322*t636) + 0.0507*t1284*t701 + var1[1];
  p_output1[2]=-0.0507*t1140 + 0.2784*t1117*t701 + var1[2];
}



void p_Multisense_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}