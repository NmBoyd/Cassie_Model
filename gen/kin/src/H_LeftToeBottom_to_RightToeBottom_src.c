/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:17:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t400;
  double t500;
  double t414;
  double t417;
  double t519;
  double t622;
  double t466;
  double t564;
  double t568;
  double t389;
  double t636;
  double t674;
  double t676;
  double t755;
  double t577;
  double t682;
  double t684;
  double t374;
  double t761;
  double t764;
  double t769;
  double t802;
  double t742;
  double t774;
  double t794;
  double t363;
  double t807;
  double t825;
  double t843;
  double t1172;
  double t1111;
  double t1121;
  double t1139;
  double t1207;
  double t1210;
  double t1234;
  double t1240;
  double t1253;
  double t1227;
  double t1272;
  double t1292;
  double t1355;
  double t1403;
  double t1431;
  double t1324;
  double t1453;
  double t1464;
  double t1517;
  double t1524;
  double t1525;
  double t1477;
  double t1534;
  double t1539;
  double t1549;
  double t1552;
  double t1558;
  double t801;
  double t892;
  double t918;
  double t987;
  double t1032;
  double t1036;
  double t1546;
  double t1559;
  double t1612;
  double t1659;
  double t1662;
  double t1673;
  double t1832;
  double t1833;
  double t1845;
  double t1907;
  double t1912;
  double t1913;
  double t1888;
  double t1999;
  double t2006;
  double t2071;
  double t2149;
  double t2150;
  double t2058;
  double t2164;
  double t2167;
  double t2197;
  double t2206;
  double t2212;
  double t2168;
  double t2240;
  double t2273;
  double t2290;
  double t2317;
  double t2355;
  double t1731;
  double t1781;
  double t1788;
  double t1616;
  double t1708;
  double t1713;
  double t2274;
  double t2360;
  double t2374;
  double t2385;
  double t2386;
  double t2416;
  double t952;
  double t1079;
  double t1095;
  double t1792;
  double t1811;
  double t1815;
  double t1717;
  double t1830;
  double t238;
  double t2573;
  double t2591;
  double t2603;
  double t2381;
  double t2425;
  double t2437;
  double t2499;
  double t2505;
  double t2532;
  double t2561;
  double t2633;
  double t2643;
  double t2685;
  double t2689;
  double t2697;
  double t2700;
  double t2705;
  double t2752;
  double t326;
  double t2948;
  double t2794;
  double t3738;
  double t3755;
  double t3729;
  double t3792;
  double t3814;
  double t3825;
  double t3748;
  double t3764;
  double t3769;
  double t3844;
  double t3721;
  double t3903;
  double t3917;
  double t3922;
  double t3789;
  double t3860;
  double t3876;
  double t3938;
  double t3720;
  double t3990;
  double t4001;
  double t4016;
  double t3895;
  double t3952;
  double t3954;
  double t4125;
  double t3700;
  double t4243;
  double t4263;
  double t4293;
  double t3970;
  double t4131;
  double t4164;
  double t4322;
  double t1831;
  double t4531;
  double t4548;
  double t4550;
  double t4475;
  double t4486;
  double t4494;
  double t4605;
  double t4620;
  double t4635;
  double t4503;
  double t4597;
  double t4603;
  double t4672;
  double t4678;
  double t4680;
  double t4604;
  double t4643;
  double t4645;
  double t4755;
  double t4784;
  double t4803;
  double t4670;
  double t4690;
  double t4703;
  double t2867;
  double t2868;
  double t2894;
  double t4995;
  double t4997;
  double t5006;
  double t4956;
  double t4975;
  double t4978;
  double t5030;
  double t5041;
  double t5068;
  double t4983;
  double t5013;
  double t5020;
  double t5091;
  double t5092;
  double t5120;
  double t5025;
  double t5073;
  double t5085;
  double t2957;
  double t3063;
  double t3079;
  double t4176;
  double t4328;
  double t4378;
  double t4384;
  double t4421;
  double t4422;
  double t4425;
  double t4440;
  double t4453;
  double t3203;
  double t3210;
  double t3213;
  double t5086;
  double t5123;
  double t5124;
  double t5129;
  double t5136;
  double t5149;
  double t5152;
  double t5166;
  double t5180;
  double t3234;
  double t3257;
  double t3270;
  double t4747;
  double t4813;
  double t4844;
  double t4845;
  double t4847;
  double t4865;
  double t4881;
  double t4890;
  double t4901;
  double t3333;
  double t3411;
  double t3419;
  double t3516;
  double t3543;
  double t3557;
  double t3559;
  double t3583;
  double t3591;
  double t3622;
  double t5237;
  double t5242;
  double t5243;
  double t5303;
  double t5305;
  double t5306;
  double t5270;
  double t5272;
  double t5279;
  double t5526;
  double t5548;
  double t5629;
  double t5630;
  double t5693;
  double t5694;
  double t5848;
  double t5854;
  double t5933;
  double t5939;
  double t5468;
  double t5477;
  double t5481;
  double t5485;
  double t5487;
  double t5559;
  double t5567;
  double t5568;
  double t5598;
  double t5604;
  double t5608;
  double t5634;
  double t5636;
  double t5642;
  double t5652;
  double t5670;
  double t5673;
  double t5698;
  double t5699;
  double t5733;
  double t5742;
  double t5751;
  double t5762;
  double t5859;
  double t5878;
  double t5880;
  double t5896;
  double t5910;
  double t5930;
  double t5942;
  double t5952;
  double t5957;
  double t5977;
  double t6011;
  double t6013;
  double t6611;
  double t6631;
  double t6694;
  double t6695;
  double t6774;
  double t6778;
  double t6821;
  double t6832;
  double t6886;
  double t6915;
  double t6550;
  double t6559;
  double t6705;
  double t6706;
  double t6714;
  double t6637;
  double t6663;
  double t6671;
  double t6730;
  double t6733;
  double t6748;
  double t6780;
  double t6781;
  double t6783;
  double t6788;
  double t6803;
  double t6809;
  double t6836;
  double t6844;
  double t6850;
  double t6859;
  double t6871;
  double t6875;
  double t6917;
  double t6928;
  double t6932;
  double t6934;
  double t6936;
  double t6941;
  double t6449;
  double t6463;
  double t6465;
  double t6498;
  double t6562;
  double t6575;
  double t6590;
  double t6609;
  double t6675;
  double t6678;
  double t6684;
  double t6687;
  double t6689;
  double t6729;
  double t6750;
  double t6786;
  double t6813;
  double t6856;
  double t6880;
  double t6933;
  double t6958;
  double t6973;
  double t6974;
  double t6977;
  double t6985;
  double t6986;
  double t6994;
  double t7006;
  double t7018;
  double t7027;
  double t7031;
  double t7038;
  double t7047;
  double t7052;
  double t7053;
  double t7056;
  double t7058;
  double t7061;
  double t5435;
  double t5447;
  double t5501;
  double t5587;
  double t5625;
  double t5647;
  double t5687;
  double t5736;
  double t5806;
  double t5883;
  double t5931;
  double t5963;
  double t6030;
  double t6038;
  double t6044;
  double t6053;
  double t6317;
  double t6333;
  double t6335;
  double t6353;
  double t6370;
  double t6374;
  double t6377;
  double t6391;
  double t6420;
  double t6430;
  double t6433;
  double t6436;
  double t6440;
  double t6444;
  double t6064;
  double t6066;
  double t6067;
  double t6088;
  double t6145;
  double t6164;
  double t6196;
  double t6201;
  double t6217;
  double t6218;
  double t6231;
  double t6254;
  double t6269;
  double t6275;
  double t6281;
  double t6293;
  double t6299;
  double t6304;
  double t7136;
  double t7137;
  double t7139;
  double t7141;
  double t7147;
  double t7159;
  double t7167;
  double t7169;
  double t7172;
  double t7179;
  double t7180;
  double t7182;
  double t7190;
  double t7193;
  double t7217;
  double t7219;
  double t6983;
  double t7074;
  double t7084;
  double t7281;
  double t7286;
  double t7289;
  double t7110;
  double t7113;
  double t7120;
  t400 = Cos(var1[1]);
  t500 = Cos(var1[3]);
  t414 = Cos(var1[2]);
  t417 = Sin(var1[3]);
  t519 = Sin(var1[2]);
  t622 = Cos(var1[4]);
  t466 = -1.*t400*t414*t417;
  t564 = -1.*t500*t400*t519;
  t568 = t466 + t564;
  t389 = Sin(var1[4]);
  t636 = t500*t400*t414;
  t674 = -1.*t400*t417*t519;
  t676 = t636 + t674;
  t755 = Cos(var1[5]);
  t577 = t389*t568;
  t682 = t622*t676;
  t684 = t577 + t682;
  t374 = Sin(var1[5]);
  t761 = t622*t568;
  t764 = -1.*t389*t676;
  t769 = t761 + t764;
  t802 = Cos(var1[6]);
  t742 = -1.*t374*t684;
  t774 = t755*t769;
  t794 = t742 + t774;
  t363 = Sin(var1[6]);
  t807 = t755*t684;
  t825 = t374*t769;
  t843 = t807 + t825;
  t1172 = Sin(var1[0]);
  t1111 = Cos(var1[0]);
  t1121 = Sin(var1[1]);
  t1139 = t1111*t414*t1121;
  t1207 = -1.*t1172*t519;
  t1210 = t1139 + t1207;
  t1234 = -1.*t414*t1172;
  t1240 = -1.*t1111*t1121*t519;
  t1253 = t1234 + t1240;
  t1227 = -1.*t417*t1210;
  t1272 = t500*t1253;
  t1292 = t1227 + t1272;
  t1355 = t500*t1210;
  t1403 = t417*t1253;
  t1431 = t1355 + t1403;
  t1324 = t389*t1292;
  t1453 = t622*t1431;
  t1464 = t1324 + t1453;
  t1517 = t622*t1292;
  t1524 = -1.*t389*t1431;
  t1525 = t1517 + t1524;
  t1477 = -1.*t374*t1464;
  t1534 = t755*t1525;
  t1539 = t1477 + t1534;
  t1549 = t755*t1464;
  t1552 = t374*t1525;
  t1558 = t1549 + t1552;
  t801 = t363*t794;
  t892 = t802*t843;
  t918 = t801 + t892;
  t987 = t802*t794;
  t1032 = -1.*t363*t843;
  t1036 = t987 + t1032;
  t1546 = t363*t1539;
  t1559 = t802*t1558;
  t1612 = t1546 + t1559;
  t1659 = t802*t1539;
  t1662 = -1.*t363*t1558;
  t1673 = t1659 + t1662;
  t1832 = t414*t1172*t1121;
  t1833 = t1111*t519;
  t1845 = t1832 + t1833;
  t1907 = t1111*t414;
  t1912 = -1.*t1172*t1121*t519;
  t1913 = t1907 + t1912;
  t1888 = -1.*t417*t1845;
  t1999 = t500*t1913;
  t2006 = t1888 + t1999;
  t2071 = t500*t1845;
  t2149 = t417*t1913;
  t2150 = t2071 + t2149;
  t2058 = t389*t2006;
  t2164 = t622*t2150;
  t2167 = t2058 + t2164;
  t2197 = t622*t2006;
  t2206 = -1.*t389*t2150;
  t2212 = t2197 + t2206;
  t2168 = -1.*t374*t2167;
  t2240 = t755*t2212;
  t2273 = t2168 + t2240;
  t2290 = t755*t2167;
  t2317 = t374*t2212;
  t2355 = t2290 + t2317;
  t1731 = -0.766044*t918;
  t1781 = 0.642788*t1036;
  t1788 = t1731 + t1781;
  t1616 = -0.766044*t1612;
  t1708 = 0.642788*t1673;
  t1713 = t1616 + t1708;
  t2274 = t363*t2273;
  t2360 = t802*t2355;
  t2374 = t2274 + t2360;
  t2385 = t802*t2273;
  t2386 = -1.*t363*t2355;
  t2416 = t2385 + t2386;
  t952 = 0.642788*t918;
  t1079 = 0.766044*t1036;
  t1095 = t952 + t1079;
  t1792 = 0.642788*t1612;
  t1811 = 0.766044*t1673;
  t1815 = t1792 + t1811;
  t1717 = t1095*t1713;
  t1830 = -1.*t1788*t1815;
  t238 = Cos(var1[8]);
  t2573 = -0.766044*t2374;
  t2591 = 0.642788*t2416;
  t2603 = t2573 + t2591;
  t2381 = 0.642788*t2374;
  t2425 = 0.766044*t2416;
  t2437 = t2381 + t2425;
  t2499 = t1111*t400*t1788;
  t2505 = t1121*t1713;
  t2532 = t2499 + t2505;
  t2561 = -1.*t2437*t2532;
  t2633 = t1111*t400*t1095;
  t2643 = t1121*t1815;
  t2685 = t2633 + t2643;
  t2689 = t2603*t2685;
  t2697 = t1717 + t1830;
  t2700 = -1.*t400*t1172*t2697;
  t2705 = 0. + t2561 + t2689 + t2700;
  t2752 = 1/t2705;
  t326 = Sin(var1[7]);
  t2948 = Sin(var1[8]);
  t2794 = Cos(var1[7]);
  t3738 = Cos(var1[9]);
  t3755 = Sin(var1[9]);
  t3729 = Cos(var1[10]);
  t3792 = t2794*t3738;
  t3814 = -1.*t326*t2948*t3755;
  t3825 = t3792 + t3814;
  t3748 = t3738*t326*t2948;
  t3764 = t2794*t3755;
  t3769 = t3748 + t3764;
  t3844 = Sin(var1[10]);
  t3721 = Cos(var1[11]);
  t3903 = t3729*t3825;
  t3917 = -1.*t3769*t3844;
  t3922 = t3903 + t3917;
  t3789 = t3729*t3769;
  t3860 = t3825*t3844;
  t3876 = t3789 + t3860;
  t3938 = Sin(var1[11]);
  t3720 = Cos(var1[12]);
  t3990 = t3721*t3922;
  t4001 = -1.*t3876*t3938;
  t4016 = t3990 + t4001;
  t3895 = t3721*t3876;
  t3952 = t3922*t3938;
  t3954 = t3895 + t3952;
  t4125 = Sin(var1[12]);
  t3700 = Cos(var1[13]);
  t4243 = t3720*t4016;
  t4263 = -1.*t3954*t4125;
  t4293 = t4243 + t4263;
  t3970 = t3720*t3954;
  t4131 = t4016*t4125;
  t4164 = t3970 + t4131;
  t4322 = Sin(var1[13]);
  t1831 = 0. + t1717 + t1830;
  t4531 = -1.*t3738*t326;
  t4548 = -1.*t2794*t2948*t3755;
  t4550 = t4531 + t4548;
  t4475 = t2794*t3738*t2948;
  t4486 = -1.*t326*t3755;
  t4494 = t4475 + t4486;
  t4605 = t3729*t4550;
  t4620 = -1.*t4494*t3844;
  t4635 = t4605 + t4620;
  t4503 = t3729*t4494;
  t4597 = t4550*t3844;
  t4603 = t4503 + t4597;
  t4672 = t3721*t4635;
  t4678 = -1.*t4603*t3938;
  t4680 = t4672 + t4678;
  t4604 = t3721*t4603;
  t4643 = t4635*t3938;
  t4645 = t4604 + t4643;
  t4755 = t3720*t4680;
  t4784 = -1.*t4645*t4125;
  t4803 = t4755 + t4784;
  t4670 = t3720*t4645;
  t4690 = t4680*t4125;
  t4703 = t4670 + t4690;
  t2867 = -1.*t1095*t2603;
  t2868 = t1788*t2437;
  t2894 = 0. + t2867 + t2868;
  t4995 = -1.*t238*t3729*t3755;
  t4997 = -1.*t238*t3738*t3844;
  t5006 = t4995 + t4997;
  t4956 = t238*t3738*t3729;
  t4975 = -1.*t238*t3755*t3844;
  t4978 = t4956 + t4975;
  t5030 = t3721*t5006;
  t5041 = -1.*t4978*t3938;
  t5068 = t5030 + t5041;
  t4983 = t3721*t4978;
  t5013 = t5006*t3938;
  t5020 = t4983 + t5013;
  t5091 = t3720*t5068;
  t5092 = -1.*t5020*t4125;
  t5120 = t5091 + t5092;
  t5025 = t3720*t5020;
  t5073 = t5068*t4125;
  t5085 = t5025 + t5073;
  t2957 = t1815*t2603;
  t3063 = -1.*t1713*t2437;
  t3079 = 0. + t2957 + t3063;
  t4176 = t3700*t4164;
  t4328 = t4293*t4322;
  t4378 = t4176 + t4328;
  t4384 = 0.642788*t4378;
  t4421 = t3700*t4293;
  t4422 = -1.*t4164*t4322;
  t4425 = t4421 + t4422;
  t4440 = 0.766044*t4425;
  t4453 = t4384 + t4440;
  t3203 = -1.*t1111*t400*t1788;
  t3210 = -1.*t1121*t1713;
  t3213 = 0. + t3203 + t3210;
  t5086 = t3700*t5085;
  t5123 = t5120*t4322;
  t5124 = t5086 + t5123;
  t5129 = 0.642788*t5124;
  t5136 = t3700*t5120;
  t5149 = -1.*t5085*t4322;
  t5152 = t5136 + t5149;
  t5166 = 0.766044*t5152;
  t5180 = t5129 + t5166;
  t3234 = -1.*t400*t1172*t1713;
  t3257 = t1111*t400*t2603;
  t3270 = 0. + t3234 + t3257;
  t4747 = t3700*t4703;
  t4813 = t4803*t4322;
  t4844 = t4747 + t4813;
  t4845 = 0.642788*t4844;
  t4847 = t3700*t4803;
  t4865 = -1.*t4703*t4322;
  t4881 = t4847 + t4865;
  t4890 = 0.766044*t4881;
  t4901 = t4845 + t4890;
  t3333 = t400*t1172*t1788;
  t3411 = t1121*t2603;
  t3419 = 0. + t3333 + t3411;
  t3516 = 0. + t2633 + t2643;
  t3543 = t400*t1172*t1815;
  t3557 = -1.*t1111*t400*t2437;
  t3559 = 0. + t3543 + t3557;
  t3583 = -1.*t400*t1172*t1095;
  t3591 = -1.*t1121*t2437;
  t3622 = 0. + t3583 + t3591;
  t5237 = -0.766044*t4378;
  t5242 = 0.642788*t4425;
  t5243 = t5237 + t5242;
  t5303 = -0.766044*t5124;
  t5305 = 0.642788*t5152;
  t5306 = t5303 + t5305;
  t5270 = -0.766044*t4844;
  t5272 = 0.642788*t4881;
  t5279 = t5270 + t5272;
  t5526 = -1.*t3738;
  t5548 = 1. + t5526;
  t5629 = -1.*t3729;
  t5630 = 1. + t5629;
  t5693 = -1.*t3721;
  t5694 = 1. + t5693;
  t5848 = -1.*t3720;
  t5854 = 1. + t5848;
  t5933 = -1.*t3700;
  t5939 = 1. + t5933;
  t5468 = -1.*t238;
  t5477 = 1. + t5468;
  t5481 = -0.135*t5477;
  t5485 = 0.049*t2948;
  t5487 = 0. + t5481 + t5485;
  t5559 = -0.049*t5548;
  t5567 = -0.09*t3755;
  t5568 = 0. + t5559 + t5567;
  t5598 = -0.09*t5548;
  t5604 = 0.049*t3755;
  t5608 = 0. + t5598 + t5604;
  t5634 = -0.049*t5630;
  t5636 = -0.21*t3844;
  t5642 = 0. + t5634 + t5636;
  t5652 = -0.21*t5630;
  t5670 = 0.049*t3844;
  t5673 = 0. + t5652 + t5670;
  t5698 = -0.0016*t5694;
  t5699 = -0.2707*t3938;
  t5733 = 0. + t5698 + t5699;
  t5742 = -0.2707*t5694;
  t5751 = 0.0016*t3938;
  t5762 = 0. + t5742 + t5751;
  t5859 = 0.0184*t5854;
  t5878 = -0.7055*t4125;
  t5880 = 0. + t5859 + t5878;
  t5896 = -0.7055*t5854;
  t5910 = -0.0184*t4125;
  t5930 = 0. + t5896 + t5910;
  t5942 = -0.0216*t5939;
  t5952 = -1.1135*t4322;
  t5957 = 0. + t5942 + t5952;
  t5977 = -1.1135*t5939;
  t6011 = 0.0216*t4322;
  t6013 = 0. + t5977 + t6011;
  t6611 = -1.*t414;
  t6631 = 1. + t6611;
  t6694 = -1.*t500;
  t6695 = 1. + t6694;
  t6774 = -1.*t622;
  t6778 = 1. + t6774;
  t6821 = -1.*t755;
  t6832 = 1. + t6821;
  t6886 = -1.*t802;
  t6915 = 1. + t6886;
  t6550 = -1.*t400;
  t6559 = 1. + t6550;
  t6705 = -0.049*t6695;
  t6706 = -0.21*t417;
  t6714 = 0. + t6705 + t6706;
  t6637 = -0.049*t6631;
  t6663 = -0.09*t519;
  t6671 = 0. + t6637 + t6663;
  t6730 = -0.21*t6695;
  t6733 = 0.049*t417;
  t6748 = 0. + t6730 + t6733;
  t6780 = -0.2707*t6778;
  t6781 = 0.0016*t389;
  t6783 = 0. + t6780 + t6781;
  t6788 = -0.0016*t6778;
  t6803 = -0.2707*t389;
  t6809 = 0. + t6788 + t6803;
  t6836 = 0.0184*t6832;
  t6844 = -0.7055*t374;
  t6850 = 0. + t6836 + t6844;
  t6859 = -0.7055*t6832;
  t6871 = -0.0184*t374;
  t6875 = 0. + t6859 + t6871;
  t6917 = -1.1135*t6915;
  t6928 = 0.0216*t363;
  t6932 = 0. + t6917 + t6928;
  t6934 = -0.0216*t6915;
  t6936 = -1.1135*t363;
  t6941 = 0. + t6934 + t6936;
  t6449 = -1.*t1111;
  t6463 = 1. + t6449;
  t6465 = 0.135*t6463;
  t6498 = 0.1305*t1111*t400;
  t6562 = 0.135*t6559;
  t6575 = 0.049*t1121;
  t6590 = 0. + t6562 + t6575;
  t6609 = t1111*t6590;
  t6675 = t1111*t1121*t6671;
  t6678 = -0.09*t6631;
  t6684 = 0.049*t519;
  t6687 = 0. + t6678 + t6684;
  t6689 = -1.*t1172*t6687;
  t6729 = t6714*t1210;
  t6750 = t6748*t1253;
  t6786 = t6783*t1292;
  t6813 = t6809*t1431;
  t6856 = t6850*t1464;
  t6880 = t6875*t1525;
  t6933 = t6932*t1539;
  t6958 = t6941*t1558;
  t6973 = 0.0306*t1612;
  t6974 = -1.1312*t1673;
  t6977 = 0. + t6465 + t6498 + t6609 + t6675 + t6689 + t6729 + t6750 + t6786 + t6813 + t6856 + t6880 + t6933 + t6958 + t6973 + t6974;
  t6985 = -0.049*t6559;
  t6986 = t400*t414*t6714;
  t6994 = 0.004500000000000004*t1121;
  t7006 = t400*t6671;
  t7018 = -1.*t400*t6748*t519;
  t7027 = t6783*t568;
  t7031 = t6809*t676;
  t7038 = t6850*t684;
  t7047 = t6875*t769;
  t7052 = t6932*t794;
  t7053 = t6941*t843;
  t7056 = 0.0306*t918;
  t7058 = -1.1312*t1036;
  t7061 = 0. + t6985 + t6986 + t6994 + t7006 + t7018 + t7027 + t7031 + t7038 + t7047 + t7052 + t7053 + t7056 + t7058;
  t5435 = 0.135*t326;
  t5447 = -0.1305*t238*t326;
  t5501 = t326*t5487;
  t5587 = t326*t2948*t5568;
  t5625 = t2794*t5608;
  t5647 = t3769*t5642;
  t5687 = t3825*t5673;
  t5736 = t3876*t5733;
  t5806 = t3922*t5762;
  t5883 = t3954*t5880;
  t5931 = t4016*t5930;
  t5963 = t4164*t5957;
  t6030 = t4293*t6013;
  t6038 = 0.0306*t4378;
  t6044 = -1.1312*t4425;
  t6053 = 0. + t5435 + t5447 + t5501 + t5587 + t5625 + t5647 + t5687 + t5736 + t5806 + t5883 + t5931 + t5963 + t6030 + t6038 + t6044;
  t6317 = -0.049*t5477;
  t6333 = -0.004500000000000004*t2948;
  t6335 = t238*t5568;
  t6353 = t238*t3738*t5642;
  t6370 = -1.*t238*t3755*t5673;
  t6374 = t4978*t5733;
  t6377 = t5006*t5762;
  t6391 = t5020*t5880;
  t6420 = t5068*t5930;
  t6430 = t5085*t5957;
  t6433 = t5120*t6013;
  t6436 = 0.0306*t5124;
  t6440 = -1.1312*t5152;
  t6444 = 0. + t6317 + t6333 + t6335 + t6353 + t6370 + t6374 + t6377 + t6391 + t6420 + t6430 + t6433 + t6436 + t6440;
  t6064 = -1.*t2794;
  t6066 = 1. + t6064;
  t6067 = -0.135*t6066;
  t6088 = -0.1305*t2794*t238;
  t6145 = t2794*t5487;
  t6164 = t2794*t2948*t5568;
  t6196 = -1.*t326*t5608;
  t6201 = t4494*t5642;
  t6217 = t4550*t5673;
  t6218 = t4603*t5733;
  t6231 = t4635*t5762;
  t6254 = t4645*t5880;
  t6269 = t4680*t5930;
  t6275 = t4703*t5957;
  t6281 = t4803*t6013;
  t6293 = 0.0306*t4844;
  t6299 = -1.1312*t4881;
  t6304 = 0. + t6067 + t6088 + t6145 + t6164 + t6196 + t6201 + t6217 + t6218 + t6231 + t6254 + t6269 + t6275 + t6281 + t6293 + t6299;
  t7136 = -0.135*t1172;
  t7137 = 0.1305*t400*t1172;
  t7139 = t1172*t6590;
  t7141 = t1172*t1121*t6671;
  t7147 = t1111*t6687;
  t7159 = t6714*t1845;
  t7167 = t6748*t1913;
  t7169 = t6783*t2006;
  t7172 = t6809*t2150;
  t7179 = t6850*t2167;
  t7180 = t6875*t2212;
  t7182 = t6932*t2273;
  t7190 = t6941*t2355;
  t7193 = 0.0306*t2374;
  t7217 = -1.1312*t2416;
  t7219 = 0. + t7136 + t7137 + t7139 + t7141 + t7147 + t7159 + t7167 + t7169 + t7172 + t7179 + t7180 + t7182 + t7190 + t7193 + t7217;
  t6983 = t1788*t6977;
  t7074 = -1.*t7061*t1713;
  t7084 = t6983 + t7074;
  t7281 = t1111*t400*t7061;
  t7286 = t1121*t6977;
  t7289 = t7281 + t7286;
  t7110 = t1095*t6977;
  t7113 = -1.*t7061*t1815;
  t7120 = t7110 + t7113;
  p_output1[0]=0. - 1.*t238*t2752*t2794*t2894 + t2752*t2948*t3079 - 1.*t1831*t238*t2752*t326;
  p_output1[1]=0. - 1.*t238*t2752*t3213*t326 + t2752*t2948*t3270 - 1.*t238*t2752*t2794*t3419;
  p_output1[2]=0. - 1.*t238*t2752*t326*t3516 + t2752*t2948*t3559 - 1.*t238*t2752*t2794*t3622;
  p_output1[3]=0.;
  p_output1[4]=0. + t1831*t2752*t4453 + t2752*t2894*t4901 + t2752*t3079*t5180;
  p_output1[5]=0. + t2752*t3213*t4453 + t2752*t3419*t4901 + t2752*t3270*t5180;
  p_output1[6]=0. + t2752*t3516*t4453 + t2752*t3622*t4901 + t2752*t3559*t5180;
  p_output1[7]=0.;
  p_output1[8]=0. + t1831*t2752*t5243 + t2752*t2894*t5279 + t2752*t3079*t5306;
  p_output1[9]=0. + t2752*t3213*t5243 + t2752*t3419*t5279 + t2752*t3270*t5306;
  p_output1[10]=0. + t2752*t3516*t5243 + t2752*t3622*t5279 + t2752*t3559*t5306;
  p_output1[11]=0.;
  p_output1[12]=t1831*t2752*t6053 + t2752*t2894*t6304 + t2752*t3079*t6444 + t2752*(-1.*t2437*t7084 + t2603*t7120 - 1.*t2697*t7219);
  p_output1[13]=t2752*t3213*t6053 + t2752*t3419*t6304 + t2752*t3270*t6444 + t2752*(-1.*t1172*t400*t7084 + t2532*t7219 - 1.*t2603*t7289);
  p_output1[14]=t2752*t3516*t6053 + t2752*t3622*t6304 + t2752*t3559*t6444 + t2752*(t1172*t400*t7120 - 1.*t2685*t7219 + t2437*t7289);
  p_output1[15]=0. + (t2561 + t2689 + t2700)*t2752;
}



void H_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
