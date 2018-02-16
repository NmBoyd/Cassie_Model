/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_knee_joint_left_src.h"

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
  double t1400;
  double t1403;
  double t1419;
  double t1399;
  double t1421;
  double t1351;
  double t1402;
  double t1423;
  double t1424;
  double t1428;
  double t1436;
  double t1437;
  double t1439;
  double t1465;
  double t1466;
  double t1468;
  double t1470;
  double t1459;
  double t1463;
  double t1464;
  double t1481;
  double t1508;
  double t1509;
  double t1510;
  double t1512;
  double t1503;
  double t1504;
  double t1507;
  double t1518;
  double t1519;
  double t1521;
  double t1527;
  double t1532;
  double t1534;
  double t1537;
  double t1545;
  double t1546;
  double t1548;
  double t1556;
  double t1557;
  double t1558;
  double t1382;
  double t1385;
  double t1388;
  double t1397;
  double t1441;
  double t1444;
  double t1569;
  double t1570;
  double t1571;
  double t1574;
  double t1576;
  double t1577;
  double t1469;
  double t1472;
  double t1473;
  double t1482;
  double t1484;
  double t1486;
  double t1580;
  double t1581;
  double t1582;
  double t1511;
  double t1513;
  double t1515;
  double t1522;
  double t1523;
  double t1525;
  double t1535;
  double t1539;
  double t1544;
  double t1592;
  double t1593;
  double t1594;
  double t1596;
  double t1597;
  double t1598;
  double t1552;
  double t1554;
  double t1555;
  double t1600;
  double t1601;
  double t1602;
  double t1604;
  double t1605;
  double t1606;
  double t1625;
  double t1626;
  double t1627;
  double t1634;
  double t1635;
  double t1638;
  double t1640;
  double t1641;
  double t1642;
  double t1644;
  double t1646;
  double t1648;
  double t1651;
  double t1652;
  double t1653;
  double t1669;
  double t1670;
  double t1671;
  double t1680;
  double t1682;
  double t1683;
  double t1685;
  double t1687;
  double t1688;
  double t1692;
  double t1693;
  double t1694;
  double t1696;
  double t1697;
  double t1698;
  double t1715;
  double t1716;
  double t1718;
  double t1727;
  double t1728;
  double t1729;
  double t1731;
  double t1732;
  double t1733;
  double t1742;
  double t1744;
  double t1745;
  double t1750;
  double t1753;
  double t1754;
  double t1769;
  double t1770;
  double t1772;
  double t1776;
  double t1777;
  double t1781;
  double t1782;
  double t1783;
  double t1785;
  double t1786;
  double t1787;
  double t1790;
  double t1793;
  double t1794;
  double t1809;
  double t1810;
  double t1811;
  double t1814;
  double t1815;
  double t1816;
  double t1820;
  double t1822;
  double t1824;
  double t1825;
  double t1826;
  double t1828;
  double t1829;
  double t1830;
  double t1843;
  double t1844;
  double t1846;
  double t1852;
  double t1853;
  double t1854;
  double t1856;
  double t1857;
  double t1858;
  double t1860;
  double t1861;
  double t1862;
  double t1880;
  double t1881;
  double t1883;
  double t1884;
  double t1885;
  double t1887;
  double t1888;
  double t1889;
  double t1903;
  double t1904;
  double t1906;
  double t1908;
  double t1909;
  double t1916;
  double t1917;
  double t1921;
  double t1922;
  double t1924;
  double t1926;
  double t1928;
  double t1929;
  double t1847;
  double t1850;
  double t1851;
  double t1855;
  double t1859;
  double t1863;
  double t1864;
  double t1865;
  double t1866;
  double t1867;
  double t1869;
  double t1870;
  double t1871;
  double t1873;
  double t1588;
  double t1589;
  double t1590;
  double t1951;
  double t1952;
  double t1953;
  double t1955;
  double t1956;
  double t1976;
  double t1977;
  double t1978;
  double t1981;
  double t1982;
  double t1983;
  double t2001;
  double t2002;
  double t2003;
  double t2005;
  double t2006;
  double t2007;
  double t2031;
  double t2032;
  double t2033;
  double t1610;
  double t2024;
  double t2025;
  double t2027;
  double t2028;
  double t2029;
  double t2045;
  double t2046;
  double t2047;
  double t2049;
  double t2050;
  double t2051;
  double t2053;
  double t2054;
  double t2055;
  double t2067;
  double t2068;
  double t2069;
  double t2071;
  double t2072;
  double t2073;
  double t2075;
  double t2076;
  double t2077;
  double t1608;
  double t1612;
  double t2040;
  double t2088;
  double t2089;
  double t2090;
  double t2092;
  double t2093;
  double t2100;
  double t2101;
  double t2102;
  double t2058;
  double t2062;
  double t2112;
  double t2113;
  double t2114;
  double t2080;
  double t2084;
  t1400 = Cos(var1[5]);
  t1403 = Sin(var1[3]);
  t1419 = Sin(var1[4]);
  t1399 = Cos(var1[3]);
  t1421 = Sin(var1[5]);
  t1351 = Cos(var1[6]);
  t1402 = -1.*t1399*t1400;
  t1423 = -1.*t1403*t1419*t1421;
  t1424 = t1402 + t1423;
  t1428 = -1.*t1400*t1403*t1419;
  t1436 = t1399*t1421;
  t1437 = t1428 + t1436;
  t1439 = Sin(var1[6]);
  t1465 = Cos(var1[7]);
  t1466 = -1.*t1465;
  t1468 = 1. + t1466;
  t1470 = Sin(var1[7]);
  t1459 = t1351*t1424;
  t1463 = t1437*t1439;
  t1464 = t1459 + t1463;
  t1481 = Cos(var1[4]);
  t1508 = Cos(var1[8]);
  t1509 = -1.*t1508;
  t1510 = 1. + t1509;
  t1512 = Sin(var1[8]);
  t1503 = -1.*t1481*t1465*t1403;
  t1504 = t1464*t1470;
  t1507 = t1503 + t1504;
  t1518 = t1351*t1437;
  t1519 = -1.*t1424*t1439;
  t1521 = t1518 + t1519;
  t1527 = Cos(var1[9]);
  t1532 = -1.*t1527;
  t1534 = 1. + t1532;
  t1537 = Sin(var1[9]);
  t1545 = t1508*t1507;
  t1546 = t1521*t1512;
  t1548 = t1545 + t1546;
  t1556 = t1508*t1521;
  t1557 = -1.*t1507*t1512;
  t1558 = t1556 + t1557;
  t1382 = -1.*t1351;
  t1385 = 1. + t1382;
  t1388 = 0.135*t1385;
  t1397 = 0. + t1388;
  t1441 = -0.135*t1439;
  t1444 = 0. + t1441;
  t1569 = -1.*t1400*t1403;
  t1570 = t1399*t1419*t1421;
  t1571 = t1569 + t1570;
  t1574 = t1399*t1400*t1419;
  t1576 = t1403*t1421;
  t1577 = t1574 + t1576;
  t1469 = 0.135*t1468;
  t1472 = 0.049*t1470;
  t1473 = 0. + t1469 + t1472;
  t1482 = -0.049*t1468;
  t1484 = 0.135*t1470;
  t1486 = 0. + t1482 + t1484;
  t1580 = t1351*t1571;
  t1581 = t1577*t1439;
  t1582 = t1580 + t1581;
  t1511 = -0.049*t1510;
  t1513 = -0.09*t1512;
  t1515 = 0. + t1511 + t1513;
  t1522 = -0.09*t1510;
  t1523 = 0.049*t1512;
  t1525 = 0. + t1522 + t1523;
  t1535 = -0.049*t1534;
  t1539 = -0.21*t1537;
  t1544 = 0. + t1535 + t1539;
  t1592 = t1399*t1481*t1465;
  t1593 = t1582*t1470;
  t1594 = t1592 + t1593;
  t1596 = t1351*t1577;
  t1597 = -1.*t1571*t1439;
  t1598 = t1596 + t1597;
  t1552 = -0.21*t1534;
  t1554 = 0.049*t1537;
  t1555 = 0. + t1552 + t1554;
  t1600 = t1508*t1594;
  t1601 = t1598*t1512;
  t1602 = t1600 + t1601;
  t1604 = t1508*t1598;
  t1605 = -1.*t1594*t1512;
  t1606 = t1604 + t1605;
  t1625 = t1399*t1481*t1351*t1421;
  t1626 = t1399*t1481*t1400*t1439;
  t1627 = t1625 + t1626;
  t1634 = -1.*t1399*t1465*t1419;
  t1635 = t1627*t1470;
  t1638 = t1634 + t1635;
  t1640 = t1399*t1481*t1400*t1351;
  t1641 = -1.*t1399*t1481*t1421*t1439;
  t1642 = t1640 + t1641;
  t1644 = t1508*t1638;
  t1646 = t1642*t1512;
  t1648 = t1644 + t1646;
  t1651 = t1508*t1642;
  t1652 = -1.*t1638*t1512;
  t1653 = t1651 + t1652;
  t1669 = t1481*t1351*t1403*t1421;
  t1670 = t1481*t1400*t1403*t1439;
  t1671 = t1669 + t1670;
  t1680 = -1.*t1465*t1403*t1419;
  t1682 = t1671*t1470;
  t1683 = t1680 + t1682;
  t1685 = t1481*t1400*t1351*t1403;
  t1687 = -1.*t1481*t1403*t1421*t1439;
  t1688 = t1685 + t1687;
  t1692 = t1508*t1683;
  t1693 = t1688*t1512;
  t1694 = t1692 + t1693;
  t1696 = t1508*t1688;
  t1697 = -1.*t1683*t1512;
  t1698 = t1696 + t1697;
  t1715 = -1.*t1351*t1419*t1421;
  t1716 = -1.*t1400*t1419*t1439;
  t1718 = t1715 + t1716;
  t1727 = -1.*t1481*t1465;
  t1728 = t1718*t1470;
  t1729 = t1727 + t1728;
  t1731 = -1.*t1400*t1351*t1419;
  t1732 = t1419*t1421*t1439;
  t1733 = t1731 + t1732;
  t1742 = t1508*t1729;
  t1744 = t1733*t1512;
  t1745 = t1742 + t1744;
  t1750 = t1508*t1733;
  t1753 = -1.*t1729*t1512;
  t1754 = t1750 + t1753;
  t1769 = t1400*t1403;
  t1770 = -1.*t1399*t1419*t1421;
  t1772 = t1769 + t1770;
  t1776 = t1772*t1439;
  t1777 = t1596 + t1776;
  t1781 = t1351*t1772;
  t1782 = -1.*t1577*t1439;
  t1783 = t1781 + t1782;
  t1785 = t1508*t1777*t1470;
  t1786 = t1783*t1512;
  t1787 = t1785 + t1786;
  t1790 = t1508*t1783;
  t1793 = -1.*t1777*t1470*t1512;
  t1794 = t1790 + t1793;
  t1809 = t1400*t1403*t1419;
  t1810 = -1.*t1399*t1421;
  t1811 = t1809 + t1810;
  t1814 = t1351*t1811;
  t1815 = t1424*t1439;
  t1816 = t1814 + t1815;
  t1820 = -1.*t1811*t1439;
  t1822 = t1459 + t1820;
  t1824 = t1508*t1816*t1470;
  t1825 = t1822*t1512;
  t1826 = t1824 + t1825;
  t1828 = t1508*t1822;
  t1829 = -1.*t1816*t1470*t1512;
  t1830 = t1828 + t1829;
  t1843 = t1481*t1400*t1351;
  t1844 = -1.*t1481*t1421*t1439;
  t1846 = t1843 + t1844;
  t1852 = -1.*t1481*t1351*t1421;
  t1853 = -1.*t1481*t1400*t1439;
  t1854 = t1852 + t1853;
  t1856 = t1508*t1846*t1470;
  t1857 = t1854*t1512;
  t1858 = t1856 + t1857;
  t1860 = t1508*t1854;
  t1861 = -1.*t1846*t1470*t1512;
  t1862 = t1860 + t1861;
  t1880 = -1.*t1351*t1571;
  t1881 = t1880 + t1782;
  t1883 = t1508*t1598*t1470;
  t1884 = t1881*t1512;
  t1885 = t1883 + t1884;
  t1887 = t1508*t1881;
  t1888 = -1.*t1598*t1470*t1512;
  t1889 = t1887 + t1888;
  t1903 = t1399*t1400;
  t1904 = t1403*t1419*t1421;
  t1906 = t1903 + t1904;
  t1908 = -1.*t1906*t1439;
  t1909 = t1814 + t1908;
  t1916 = -1.*t1351*t1906;
  t1917 = t1916 + t1820;
  t1921 = t1508*t1909*t1470;
  t1922 = t1917*t1512;
  t1924 = t1921 + t1922;
  t1926 = t1508*t1917;
  t1928 = -1.*t1909*t1470*t1512;
  t1929 = t1926 + t1928;
  t1847 = 0.1305*t1465*t1846;
  t1850 = t1846*t1473;
  t1851 = t1846*t1470*t1515;
  t1855 = t1854*t1525;
  t1859 = t1544*t1858;
  t1863 = t1555*t1862;
  t1864 = -1.*t1537*t1858;
  t1865 = t1527*t1862;
  t1866 = t1864 + t1865;
  t1867 = -0.21*t1866;
  t1869 = t1527*t1858;
  t1870 = t1537*t1862;
  t1871 = t1869 + t1870;
  t1873 = -0.049*t1871;
  t1588 = t1465*t1582;
  t1589 = -1.*t1399*t1481*t1470;
  t1590 = t1588 + t1589;
  t1951 = 0.135*t1465;
  t1952 = -0.049*t1470;
  t1953 = t1951 + t1952;
  t1955 = 0.049*t1465;
  t1956 = t1955 + t1484;
  t1976 = t1351*t1906;
  t1977 = t1811*t1439;
  t1978 = t1976 + t1977;
  t1981 = t1465*t1978;
  t1982 = -1.*t1481*t1403*t1470;
  t1983 = t1981 + t1982;
  t2001 = t1481*t1351*t1421;
  t2002 = t1481*t1400*t1439;
  t2003 = t2001 + t2002;
  t2005 = t1465*t2003;
  t2006 = t1419*t1470;
  t2007 = t2005 + t2006;
  t2031 = -1.*t1508*t1594;
  t2032 = -1.*t1598*t1512;
  t2033 = t2031 + t2032;
  t1610 = t1527*t1606;
  t2024 = 0.049*t1508;
  t2025 = t2024 + t1513;
  t2027 = -0.09*t1508;
  t2028 = -0.049*t1512;
  t2029 = t2027 + t2028;
  t2045 = t1481*t1465*t1403;
  t2046 = t1978*t1470;
  t2047 = t2045 + t2046;
  t2049 = -1.*t1508*t2047;
  t2050 = -1.*t1909*t1512;
  t2051 = t2049 + t2050;
  t2053 = t1508*t1909;
  t2054 = -1.*t2047*t1512;
  t2055 = t2053 + t2054;
  t2067 = -1.*t1465*t1419;
  t2068 = t2003*t1470;
  t2069 = t2067 + t2068;
  t2071 = -1.*t1508*t2069;
  t2072 = -1.*t1846*t1512;
  t2073 = t2071 + t2072;
  t2075 = t1508*t1846;
  t2076 = -1.*t2069*t1512;
  t2077 = t2075 + t2076;
  t1608 = -1.*t1537*t1602;
  t1612 = t1608 + t1610;
  t2040 = -1.*t1537*t1606;
  t2088 = -0.21*t1527;
  t2089 = -0.049*t1537;
  t2090 = t2088 + t2089;
  t2092 = 0.049*t1527;
  t2093 = t2092 + t1539;
  t2100 = t1508*t2047;
  t2101 = t1909*t1512;
  t2102 = t2100 + t2101;
  t2058 = t1527*t2055;
  t2062 = -1.*t1537*t2055;
  t2112 = t1508*t2069;
  t2113 = t1846*t1512;
  t2114 = t2112 + t2113;
  t2080 = t1527*t2077;
  t2084 = -1.*t1537*t2077;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1397*t1424 + t1437*t1444 + t1464*t1473 + 0.1305*(t1464*t1465 + t1403*t1470*t1481) - 1.*t1403*t1481*t1486 + t1507*t1515 + t1521*t1525 + t1544*t1548 + t1555*t1558 - 0.21*(-1.*t1537*t1548 + t1527*t1558) - 0.049*(t1527*t1548 + t1537*t1558);
  p_output1[10]=t1399*t1481*t1486 + t1397*t1571 + t1444*t1577 + t1473*t1582 + 0.1305*t1590 + t1515*t1594 + t1525*t1598 + t1544*t1602 + t1555*t1606 - 0.049*(t1527*t1602 + t1537*t1606) - 0.21*t1612;
  p_output1[11]=0;
  p_output1[12]=t1397*t1399*t1421*t1481 + t1399*t1400*t1444*t1481 - 1.*t1399*t1419*t1486 + t1473*t1627 + 0.1305*(t1399*t1419*t1470 + t1465*t1627) + t1515*t1638 + t1525*t1642 + t1544*t1648 + t1555*t1653 - 0.21*(-1.*t1537*t1648 + t1527*t1653) - 0.049*(t1527*t1648 + t1537*t1653);
  p_output1[13]=t1397*t1403*t1421*t1481 + t1400*t1403*t1444*t1481 - 1.*t1403*t1419*t1486 + t1473*t1671 + 0.1305*(t1403*t1419*t1470 + t1465*t1671) + t1515*t1683 + t1525*t1688 + t1544*t1694 + t1555*t1698 - 0.21*(-1.*t1537*t1694 + t1527*t1698) - 0.049*(t1527*t1694 + t1537*t1698);
  p_output1[14]=-1.*t1397*t1419*t1421 - 1.*t1400*t1419*t1444 - 1.*t1481*t1486 + t1473*t1718 + 0.1305*(t1470*t1481 + t1465*t1718) + t1515*t1729 + t1525*t1733 + t1544*t1745 + t1555*t1754 - 0.21*(-1.*t1537*t1745 + t1527*t1754) - 0.049*(t1527*t1745 + t1537*t1754);
  p_output1[15]=t1397*t1577 + t1444*t1772 + 0.1305*t1465*t1777 + t1473*t1777 + t1470*t1515*t1777 + t1525*t1783 + t1544*t1787 + t1555*t1794 - 0.21*(-1.*t1537*t1787 + t1527*t1794) - 0.049*(t1527*t1787 + t1537*t1794);
  p_output1[16]=t1424*t1444 + t1397*t1811 + 0.1305*t1465*t1816 + t1473*t1816 + t1470*t1515*t1816 + t1525*t1822 + t1544*t1826 + t1555*t1830 - 0.21*(-1.*t1537*t1826 + t1527*t1830) - 0.049*(t1527*t1826 + t1537*t1830);
  p_output1[17]=t1397*t1400*t1481 - 1.*t1421*t1444*t1481 + t1847 + t1850 + t1851 + t1855 + t1859 + t1863 + t1867 + t1873;
  p_output1[18]=0.135*t1439*t1571 - 0.135*t1351*t1577 + 0.1305*t1465*t1598 + t1473*t1598 + t1470*t1515*t1598 + t1525*t1881 + t1544*t1885 + t1555*t1889 - 0.21*(-1.*t1537*t1885 + t1527*t1889) - 0.049*(t1527*t1885 + t1537*t1889);
  p_output1[19]=-0.135*t1351*t1811 + 0.135*t1439*t1906 + 0.1305*t1465*t1909 + t1473*t1909 + t1470*t1515*t1909 + t1525*t1917 + t1544*t1924 + t1555*t1929 - 0.21*(-1.*t1537*t1924 + t1527*t1929) - 0.049*(t1527*t1924 + t1537*t1929);
  p_output1[20]=-0.135*t1351*t1400*t1481 + 0.135*t1421*t1439*t1481 + t1847 + t1850 + t1851 + t1855 + t1859 + t1863 + t1867 + t1873;
  p_output1[21]=0.1305*(-1.*t1399*t1465*t1481 - 1.*t1470*t1582) + t1515*t1590 + t1508*t1544*t1590 - 1.*t1512*t1555*t1590 - 0.21*(-1.*t1512*t1527*t1590 - 1.*t1508*t1537*t1590) - 0.049*(t1508*t1527*t1590 - 1.*t1512*t1537*t1590) + t1399*t1481*t1953 + t1582*t1956;
  p_output1[22]=t1403*t1481*t1953 + t1956*t1978 + 0.1305*(t1503 - 1.*t1470*t1978) + t1515*t1983 + t1508*t1544*t1983 - 1.*t1512*t1555*t1983 - 0.21*(-1.*t1512*t1527*t1983 - 1.*t1508*t1537*t1983) - 0.049*(t1508*t1527*t1983 - 1.*t1512*t1537*t1983);
  p_output1[23]=-1.*t1419*t1953 + t1956*t2003 + 0.1305*(t1419*t1465 - 1.*t1470*t2003) + t1515*t2007 + t1508*t1544*t2007 - 1.*t1512*t1555*t2007 - 0.21*(-1.*t1512*t1527*t2007 - 1.*t1508*t1537*t2007) - 0.049*(t1508*t1527*t2007 - 1.*t1512*t1537*t2007);
  p_output1[24]=t1544*t1606 + t1598*t2025 + t1594*t2029 + t1555*t2033 - 0.049*(t1610 + t1537*t2033) - 0.21*(t1527*t2033 + t2040);
  p_output1[25]=t1909*t2025 + t2029*t2047 + t1555*t2051 + t1544*t2055 - 0.049*(t1537*t2051 + t2058) - 0.21*(t1527*t2051 + t2062);
  p_output1[26]=t1846*t2025 + t2029*t2069 + t1555*t2073 + t1544*t2077 - 0.049*(t1537*t2073 + t2080) - 0.21*(t1527*t2073 + t2084);
  p_output1[27]=-0.049*t1612 - 0.21*(-1.*t1527*t1602 + t2040) + t1602*t2090 + t1606*t2093;
  p_output1[28]=t2055*t2093 + t2090*t2102 - 0.21*(t2062 - 1.*t1527*t2102) - 0.049*(t2058 - 1.*t1537*t2102);
  p_output1[29]=t2077*t2093 + t2090*t2114 - 0.21*(t2084 - 1.*t1527*t2114) - 0.049*(t2080 - 1.*t1537*t2114);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void J_knee_joint_left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
