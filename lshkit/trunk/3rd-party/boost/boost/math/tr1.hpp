// Copyright John Maddock 2008.
// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MATH_TR1_HPP
#define BOOST_MATH_TR1_HPP

#ifdef _MSC_VER
#pragma once
#endif

#ifdef __cplusplus

#include <boost/config.hpp>
#include <boost/static_assert.hpp>

namespace boost{ namespace math{ namespace tr1{ extern "C"{

#endif // __cplusplus

#ifdef BOOST_HAS_DECLSPEC // defined in config system
// we need to import/export our code only if the user has specifically
// asked for it by defining either BOOST_ALL_DYN_LINK if they want all boost
// libraries to be dynamically linked, or BOOST_MATH_TR1_DYN_LINK
// if they want just this one to be dynamically liked:
#if defined(BOOST_ALL_DYN_LINK) || defined(BOOST_MATH_TR1_DYN_LINK)
// export if this is our own source, otherwise import:
#ifdef BOOST_MATH_TR1_SOURCE
# define BOOST_MATH_TR1_DECL __declspec(dllexport)
#else
# define BOOST_MATH_TR1_DECL __declspec(dllimport)
#endif  // BOOST_MATH_TR1_SOURCE
#endif  // DYN_LINK
#endif  // BOOST_HAS_DECLSPEC
//
// if BOOST_MATH_TR1_DECL isn't defined yet define it now:
#ifndef BOOST_MATH_TR1_DECL
#define BOOST_MATH_TR1_DECL
#endif

//
// Now set up the libraries to link against:
//
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus)
#  define BOOST_LIB_NAME boost_math_c99
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus)
#  define BOOST_LIB_NAME boost_math_c99f
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus) \
   && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
#  define BOOST_LIB_NAME boost_math_c99l
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus)
#  define BOOST_LIB_NAME boost_math_tr1
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus)
#  define BOOST_LIB_NAME boost_math_tr1f
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif
#if !defined(BOOST_MATH_TR1_NO_LIB) && !defined(BOOST_MATH_TR1_SOURCE) \
   && !defined(BOOST_ALL_NO_LIB) && defined(__cplusplus) \
   && !defined(BOOST_MATH_NO_LONG_DOUBLE_MATH_FUNCTIONS)
#  define BOOST_LIB_NAME boost_math_tr1l
#  if defined(BOOST_MATH_TR1_DYN_LINK) || defined(BOOST_ALL_DYN_LINK)
#     define BOOST_DYN_LINK
#  endif
#  include <boost/config/auto_link.hpp>
#endif

#ifndef FLT_EVAL_METHOD
typedef float float_t;
typedef double double_t;
#elif FLT_EVAL_METHOD == 0
typedef float float_t;
typedef double double_t;
#elif FLT_EVAL_METHOD == 1
typedef double float_t;
typedef double double_t;
#else
typedef long double float_t;
typedef long double double_t;
#endif

// C99 Functions:
double BOOST_MATH_TR1_DECL acosh BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL acoshf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL acoshl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL asinh BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL asinhf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL asinhl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL atanh BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL atanhf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL atanhl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL cbrt BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL cbrtf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL cbrtl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL copysign BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL copysignf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL copysignl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);

double BOOST_MATH_TR1_DECL erf BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL erff BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL erfl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL erfc BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL erfcf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL erfcl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#if 0
double BOOST_MATH_TR1_DECL exp2 BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL exp2f BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL exp2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
double BOOST_MATH_TR1_DECL boost_expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL boost_expm1f BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL boost_expm1l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#if 0
double BOOST_MATH_TR1_DECL fdim BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL fdimf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL fdiml BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
double BOOST_MATH_TR1_DECL fma BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y, double z);
float BOOST_MATH_TR1_DECL fmaf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y, float z);
long double BOOST_MATH_TR1_DECL fmal BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y, long double z);
#endif
double BOOST_MATH_TR1_DECL fmax BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL fmaxf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL fmaxl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);

double BOOST_MATH_TR1_DECL fmin BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL fminf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL fminl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);

double BOOST_MATH_TR1_DECL hypot BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL hypotf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL hypotl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
#if 0
int BOOST_MATH_TR1_DECL ilogb BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
int BOOST_MATH_TR1_DECL ilogbf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
int BOOST_MATH_TR1_DECL ilogbl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
double BOOST_MATH_TR1_DECL lgamma BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL lgammaf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL lgammal BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#ifdef BOOST_HAS_LONG_LONG
#if 0
::boost::long_long_type BOOST_MATH_TR1_DECL llrint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
::boost::long_long_type BOOST_MATH_TR1_DECL llrintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
::boost::long_long_type BOOST_MATH_TR1_DECL llrintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
::boost::long_long_type BOOST_MATH_TR1_DECL llround BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
::boost::long_long_type BOOST_MATH_TR1_DECL llroundf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
::boost::long_long_type BOOST_MATH_TR1_DECL llroundl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
double BOOST_MATH_TR1_DECL boost_log1p BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL boost_log1pf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL boost_log1pl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#if 0
double BOOST_MATH_TR1_DECL log2 BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL log2f BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL log2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL logb BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL logbf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL logbl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
long BOOST_MATH_TR1_DECL lrint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
long BOOST_MATH_TR1_DECL lrintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long BOOST_MATH_TR1_DECL lrintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
long BOOST_MATH_TR1_DECL lround BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
long BOOST_MATH_TR1_DECL lroundf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long BOOST_MATH_TR1_DECL lroundl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#if 0
double BOOST_MATH_TR1_DECL nan BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
float BOOST_MATH_TR1_DECL nanf BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
long double BOOST_MATH_TR1_DECL nanl BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
double BOOST_MATH_TR1_DECL nearbyint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL nearbyintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL nearbyintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
double BOOST_MATH_TR1_DECL boost_nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL boost_nextafterf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL boost_nextafterl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);

double BOOST_MATH_TR1_DECL nexttoward BOOST_PREVENT_MACRO_SUBSTITUTION(double x, long double y);
float BOOST_MATH_TR1_DECL nexttowardf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, long double y);
long double BOOST_MATH_TR1_DECL nexttowardl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
#if 0
double BOOST_MATH_TR1_DECL remainder BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL remainderf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL remainderl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
double BOOST_MATH_TR1_DECL remquo BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y, int *pquo);
float BOOST_MATH_TR1_DECL remquof BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y, int *pquo);
long double BOOST_MATH_TR1_DECL remquol BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y, int *pquo);
double BOOST_MATH_TR1_DECL rint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL rintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL rintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
double BOOST_MATH_TR1_DECL round BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL roundf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL roundl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#if 0
double BOOST_MATH_TR1_DECL scalbln BOOST_PREVENT_MACRO_SUBSTITUTION(double x, long ex);
float BOOST_MATH_TR1_DECL scalblnf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, long ex);
long double BOOST_MATH_TR1_DECL scalblnl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long ex);
double BOOST_MATH_TR1_DECL scalbn BOOST_PREVENT_MACRO_SUBSTITUTION(double x, int ex);
float BOOST_MATH_TR1_DECL scalbnf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, int ex);
long double BOOST_MATH_TR1_DECL scalbnl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, int ex);
#endif
double BOOST_MATH_TR1_DECL tgamma BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL tgammaf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL tgammal BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double BOOST_MATH_TR1_DECL trunc BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL truncf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL truncl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

// [5.2.1.1] associated Laguerre polynomials:
double BOOST_MATH_TR1_DECL assoc_laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, double x);
float BOOST_MATH_TR1_DECL assoc_laguerref BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, float x);
long double BOOST_MATH_TR1_DECL assoc_laguerrel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, long double x);

// [5.2.1.2] associated Legendre functions:
double BOOST_MATH_TR1_DECL assoc_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, double x);
float BOOST_MATH_TR1_DECL assoc_legendref BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, float x);
long double BOOST_MATH_TR1_DECL assoc_legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, long double x);

// [5.2.1.3] beta function:
double BOOST_MATH_TR1_DECL beta BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float BOOST_MATH_TR1_DECL betaf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double BOOST_MATH_TR1_DECL betal BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);

// [5.2.1.4] (complete) elliptic integral of the first kind:
double BOOST_MATH_TR1_DECL comp_ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(double k);
float BOOST_MATH_TR1_DECL comp_ellint_1f BOOST_PREVENT_MACRO_SUBSTITUTION(float k);
long double BOOST_MATH_TR1_DECL comp_ellint_1l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k);

// [5.2.1.5] (complete) elliptic integral of the second kind:
double BOOST_MATH_TR1_DECL comp_ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(double k);
float BOOST_MATH_TR1_DECL comp_ellint_2f BOOST_PREVENT_MACRO_SUBSTITUTION(float k);
long double BOOST_MATH_TR1_DECL comp_ellint_2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k);

// [5.2.1.6] (complete) elliptic integral of the third kind:
double BOOST_MATH_TR1_DECL comp_ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(double k, double nu);
float BOOST_MATH_TR1_DECL comp_ellint_3f BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float nu);
long double BOOST_MATH_TR1_DECL comp_ellint_3l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double nu);
#if 0
// [5.2.1.7] confluent hypergeometric functions:
double BOOST_MATH_TR1_DECL conf_hyperg BOOST_PREVENT_MACRO_SUBSTITUTION(double a, double c, double x);
float BOOST_MATH_TR1_DECL conf_hypergf BOOST_PREVENT_MACRO_SUBSTITUTION(float a, float c, float x);
long double BOOST_MATH_TR1_DECL conf_hypergl BOOST_PREVENT_MACRO_SUBSTITUTION(long double a, long double c, long double x);
#endif
// [5.2.1.8] regular modified cylindrical Bessel functions:
double BOOST_MATH_TR1_DECL cyl_bessel_i BOOST_PREVENT_MACRO_SUBSTITUTION(double nu, double x);
float BOOST_MATH_TR1_DECL cyl_bessel_if BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x);
long double BOOST_MATH_TR1_DECL cyl_bessel_il BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x);

// [5.2.1.9] cylindrical Bessel functions (of the first kind):
double BOOST_MATH_TR1_DECL cyl_bessel_j BOOST_PREVENT_MACRO_SUBSTITUTION(double nu, double x);
float BOOST_MATH_TR1_DECL cyl_bessel_jf BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x);
long double BOOST_MATH_TR1_DECL cyl_bessel_jl BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x);

// [5.2.1.10] irregular modified cylindrical Bessel functions:
double BOOST_MATH_TR1_DECL cyl_bessel_k BOOST_PREVENT_MACRO_SUBSTITUTION(double nu, double x);
float BOOST_MATH_TR1_DECL cyl_bessel_kf BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x);
long double BOOST_MATH_TR1_DECL cyl_bessel_kl BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x);

// [5.2.1.11] cylindrical Neumann functions;
// cylindrical Bessel functions (of the second kind):
double BOOST_MATH_TR1_DECL cyl_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(double nu, double x);
float BOOST_MATH_TR1_DECL cyl_neumannf BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x);
long double BOOST_MATH_TR1_DECL cyl_neumannl BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x);

// [5.2.1.12] (incomplete) elliptic integral of the first kind:
double BOOST_MATH_TR1_DECL ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(double k, double phi);
float BOOST_MATH_TR1_DECL ellint_1f BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float phi);
long double BOOST_MATH_TR1_DECL ellint_1l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double phi);

// [5.2.1.13] (incomplete) elliptic integral of the second kind:
double BOOST_MATH_TR1_DECL ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(double k, double phi);
float BOOST_MATH_TR1_DECL ellint_2f BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float phi);
long double BOOST_MATH_TR1_DECL ellint_2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double phi);

// [5.2.1.14] (incomplete) elliptic integral of the third kind:
double BOOST_MATH_TR1_DECL ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(double k, double nu, double phi);
float BOOST_MATH_TR1_DECL ellint_3f BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float nu, float phi);
long double BOOST_MATH_TR1_DECL ellint_3l BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double nu, long double phi);

// [5.2.1.15] exponential integral:
double BOOST_MATH_TR1_DECL expint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float BOOST_MATH_TR1_DECL expintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double BOOST_MATH_TR1_DECL expintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

// [5.2.1.16] Hermite polynomials:
double BOOST_MATH_TR1_DECL hermite BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, double x);
float BOOST_MATH_TR1_DECL hermitef BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x);
long double BOOST_MATH_TR1_DECL hermitel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x);

#if 0
// [5.2.1.17] hypergeometric functions:
double BOOST_MATH_TR1_DECL hyperg BOOST_PREVENT_MACRO_SUBSTITUTION(double a, double b, double c, double x);
float BOOST_MATH_TR1_DECL hypergf BOOST_PREVENT_MACRO_SUBSTITUTION(float a, float b, float c, float x);
long double BOOST_MATH_TR1_DECL hypergl BOOST_PREVENT_MACRO_SUBSTITUTION(long double a, long double b, long double c,
long double x);
#endif

// [5.2.1.18] Laguerre polynomials:
double BOOST_MATH_TR1_DECL laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, double x);
float BOOST_MATH_TR1_DECL laguerref BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x);
long double BOOST_MATH_TR1_DECL laguerrel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x);

// [5.2.1.19] Legendre polynomials:
double BOOST_MATH_TR1_DECL legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, double x);
float BOOST_MATH_TR1_DECL legendref BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, float x);
long double BOOST_MATH_TR1_DECL legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, long double x);

// [5.2.1.20] Riemann zeta function:
double BOOST_MATH_TR1_DECL riemann_zeta BOOST_PREVENT_MACRO_SUBSTITUTION(double);
float BOOST_MATH_TR1_DECL riemann_zetaf BOOST_PREVENT_MACRO_SUBSTITUTION(float);
long double BOOST_MATH_TR1_DECL riemann_zetal BOOST_PREVENT_MACRO_SUBSTITUTION(long double);

// [5.2.1.21] spherical Bessel functions (of the first kind):
double BOOST_MATH_TR1_DECL sph_bessel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, double x);
float BOOST_MATH_TR1_DECL sph_besself BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x);
long double BOOST_MATH_TR1_DECL sph_bessell BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x);

// [5.2.1.22] spherical associated Legendre functions:
double BOOST_MATH_TR1_DECL sph_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, double theta);
float BOOST_MATH_TR1_DECL sph_legendref BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, float theta);
long double BOOST_MATH_TR1_DECL sph_legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, long double theta);

// [5.2.1.23] spherical Neumann functions;
// spherical Bessel functions (of the second kind):
double BOOST_MATH_TR1_DECL sph_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, double x);
float BOOST_MATH_TR1_DECL sph_neumannf BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x);
long double BOOST_MATH_TR1_DECL sph_neumannl BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x);

#ifdef __cplusplus

}}}}  // namespaces

#include <boost/math/tools/promotion.hpp>

namespace boost{ namespace math{ namespace tr1{
//
// Declare overload of the functions which forward to the
// C interfaces:
//
// C99 Functions:
inline float acosh BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::acoshf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double acosh BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::acoshl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type acosh BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::acosh BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float asinh BOOST_PREVENT_MACRO_SUBSTITUTION(float x){ return boost::math::tr1::asinhf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double asinh BOOST_PREVENT_MACRO_SUBSTITUTION(long double x){ return boost::math::tr1::asinhl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type asinh BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::asinh BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float atanh BOOST_PREVENT_MACRO_SUBSTITUTION(float x){ return boost::math::tr1::atanhf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double atanh BOOST_PREVENT_MACRO_SUBSTITUTION(long double x){ return boost::math::tr1::atanhl(x); }
template <class T>
inline typename tools::promote_args<T>::type atanh BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::atanh BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float cbrt BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::cbrtf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double cbrt BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::cbrtl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type cbrt BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::cbrt BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float copysign BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::copysignf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double copysign BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::copysignl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type copysign BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::copysign BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }

inline float erf BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::erff BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double erf BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::erfl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type erf BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::erf BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float erfc BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::erfcf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double erfc BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::erfcl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type erfc BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::erfc BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }
#if 0
double exp2 BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float exp2f BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double exp2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline float expm1f BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::boost_expm1f BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline double expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(double x)
{ return boost::math::tr1::boost_expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double expm1l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::boost_expm1l BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline float expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::expm1f BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::expm1l BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::expm1 BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }
#if 0
double fdim BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float fdimf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double fdiml BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
double fma BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y, double z);
float fmaf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y, float z);
long double fmal BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y, long double z);
#endif
inline float fmax BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::fmaxf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double fmax BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::fmaxl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type fmax BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::fmax BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }

inline float fmin BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::fminf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double fmin BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::fminl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type fmin BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::fmin BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }

inline float hypot BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::hypotf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double hypot BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::hypotl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type hypot BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::hypot BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }
#if 0
int ilogb BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
int ilogbf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
int ilogbl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline float lgamma BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::lgammaf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double lgamma BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::lgammal BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type lgamma BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::lgamma BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }
#ifdef BOOST_HAS_LONG_LONG
#if 0
::boost::long_long_type llrint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
::boost::long_long_type llrintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
::boost::long_long_type llrintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline ::boost::long_long_type llround BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::llroundf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline ::boost::long_long_type llround BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::llroundl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline ::boost::long_long_type llround BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return llround BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<double>(x)); }
#endif
inline float log1pf BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::boost_log1pf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline double log1p BOOST_PREVENT_MACRO_SUBSTITUTION(double x)
{ return boost::math::tr1::boost_log1p BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double log1pl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::boost_log1pl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline float log1p BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::log1pf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double log1p BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::log1pl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type log1p BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::log1p BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }
#if 0
double log2 BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float log2f BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double log2l BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);

double logb BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float logbf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double logbl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
long lrint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
long lrintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long lrintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline long lround BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::lroundf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long lround BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::lroundl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
long lround BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::lround BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<double>(x)); }
#if 0
double nan BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
float nanf BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
long double nanl BOOST_PREVENT_MACRO_SUBSTITUTION(const char *str);
double nearbyint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float nearbyintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double nearbyintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline float nextafterf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::boost_nextafterf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline double nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y)
{ return boost::math::tr1::boost_nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double nextafterl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::boost_nextafterl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline float nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::nextafterf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::nextafterl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::nextafter BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }

inline float nexttoward BOOST_PREVENT_MACRO_SUBSTITUTION(float x, long double y)
{ return boost::math::tr1::nexttowardf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double nexttoward BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::nexttowardl BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type nexttoward BOOST_PREVENT_MACRO_SUBSTITUTION(T1 x, T2 y)
{ return boost::math::tr1::nexttoward BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<long double>(y)); }
#if 0
double remainder BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y);
float remainderf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y);
long double remainderl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y);
double remquo BOOST_PREVENT_MACRO_SUBSTITUTION(double x, double y, int *pquo);
float remquof BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y, int *pquo);
long double remquol BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y, int *pquo);
double rint BOOST_PREVENT_MACRO_SUBSTITUTION(double x);
float rintf BOOST_PREVENT_MACRO_SUBSTITUTION(float x);
long double rintl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x);
#endif
inline float round BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::roundf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double round BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::roundl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type round BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::round BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }
#if 0
double scalbln BOOST_PREVENT_MACRO_SUBSTITUTION(double x, long ex);
float scalblnf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, long ex);
long double scalblnl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long ex);
double scalbn BOOST_PREVENT_MACRO_SUBSTITUTION(double x, int ex);
float scalbnf BOOST_PREVENT_MACRO_SUBSTITUTION(float x, int ex);
long double scalbnl BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, int ex);
#endif
inline float tgamma BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::tgammaf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double tgamma BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::tgammal BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type tgamma BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::tgamma BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

inline float trunc BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::truncf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double trunc BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::truncl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type trunc BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::trunc BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

# define NO_MACRO_EXPAND /**/
// C99 macros defined as C++ templates
template<class T> bool signbit NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> bool BOOST_MATH_TR1_DECL signbit<float> NO_MACRO_EXPAND(float x);
template<> bool BOOST_MATH_TR1_DECL signbit<double> NO_MACRO_EXPAND(double x);
template<> bool BOOST_MATH_TR1_DECL signbit<long double> NO_MACRO_EXPAND(long double x);

template<class T> int fpclassify NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> int BOOST_MATH_TR1_DECL fpclassify<float> NO_MACRO_EXPAND(float x);
template<> int BOOST_MATH_TR1_DECL fpclassify<double> NO_MACRO_EXPAND(double x);
template<> int BOOST_MATH_TR1_DECL fpclassify<long double> NO_MACRO_EXPAND(long double x);

template<class T> bool isfinite NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> bool BOOST_MATH_TR1_DECL isfinite<float> NO_MACRO_EXPAND(float x);
template<> bool BOOST_MATH_TR1_DECL isfinite<double> NO_MACRO_EXPAND(double x);
template<> bool BOOST_MATH_TR1_DECL isfinite<long double> NO_MACRO_EXPAND(long double x);

template<class T> bool isinf NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> bool BOOST_MATH_TR1_DECL isinf<float> NO_MACRO_EXPAND(float x);
template<> bool BOOST_MATH_TR1_DECL isinf<double> NO_MACRO_EXPAND(double x);
template<> bool BOOST_MATH_TR1_DECL isinf<long double> NO_MACRO_EXPAND(long double x);

template<class T> bool isnan NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> bool BOOST_MATH_TR1_DECL isnan<float> NO_MACRO_EXPAND(float x);
template<> bool BOOST_MATH_TR1_DECL isnan<double> NO_MACRO_EXPAND(double x);
template<> bool BOOST_MATH_TR1_DECL isnan<long double> NO_MACRO_EXPAND(long double x);

template<class T> bool isnormal NO_MACRO_EXPAND(T x)
{ BOOST_STATIC_ASSERT(sizeof(T) == 0); return false; } // must not be instantiated
template<> bool BOOST_MATH_TR1_DECL isnormal<float> NO_MACRO_EXPAND(float x);
template<> bool BOOST_MATH_TR1_DECL isnormal<double> NO_MACRO_EXPAND(double x);
template<> bool BOOST_MATH_TR1_DECL isnormal<long double> NO_MACRO_EXPAND(long double x);

#undef NO_MACRO_EXPAND   
   
// [5.2.1.1] associated Laguerre polynomials:
inline float assoc_laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, float x)
{ return boost::math::tr1::assoc_laguerref BOOST_PREVENT_MACRO_SUBSTITUTION(n, m, x); }
inline long double assoc_laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, long double x)
{ return boost::math::tr1::assoc_laguerrel BOOST_PREVENT_MACRO_SUBSTITUTION(n, m, x); }
template <class T> 
inline typename tools::promote_args<T>::type assoc_laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, unsigned m, T x)
{ return boost::math::tr1::assoc_laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(n, m, static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.2] associated Legendre functions:
inline float assoc_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, float x)
{ return boost::math::tr1::assoc_legendref BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, x); }
inline long double assoc_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, long double x)
{ return boost::math::tr1::assoc_legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, x); }
template <class T>
inline typename tools::promote_args<T>::type assoc_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, T x)
{ return boost::math::tr1::assoc_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.3] beta function:
inline float beta BOOST_PREVENT_MACRO_SUBSTITUTION(float x, float y)
{ return boost::math::tr1::betaf BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
inline long double beta BOOST_PREVENT_MACRO_SUBSTITUTION(long double x, long double y)
{ return boost::math::tr1::betal BOOST_PREVENT_MACRO_SUBSTITUTION(x, y); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type beta BOOST_PREVENT_MACRO_SUBSTITUTION(T2 x, T1 y)
{ return boost::math::tr1::beta BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(x), static_cast<typename tools::promote_args<T1, T2>::type>(y)); }

// [5.2.1.4] (complete) elliptic integral of the first kind:
inline float comp_ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(float k)
{ return boost::math::tr1::comp_ellint_1f BOOST_PREVENT_MACRO_SUBSTITUTION(k); }
inline long double comp_ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(long double k)
{ return boost::math::tr1::comp_ellint_1l BOOST_PREVENT_MACRO_SUBSTITUTION(k); }
template <class T>
inline typename tools::promote_args<T>::type comp_ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(T k)
{ return boost::math::tr1::comp_ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(k)); }

// [5.2.1.5]  BOOST_PREVENT_MACRO_SUBSTITUTION(complete) elliptic integral of the second kind:
inline float comp_ellint_2(float k)
{ return boost::math::tr1::comp_ellint_2f(k); }
inline long double comp_ellint_2(long double k)
{ return boost::math::tr1::comp_ellint_2l(k); }
template <class T>
inline typename tools::promote_args<T>::type comp_ellint_2(T k)
{ return boost::math::tr1::comp_ellint_2(static_cast<typename tools::promote_args<T>::type> BOOST_PREVENT_MACRO_SUBSTITUTION(k)); }

// [5.2.1.6]  BOOST_PREVENT_MACRO_SUBSTITUTION(complete) elliptic integral of the third kind:
inline float comp_ellint_3(float k, float nu)
{ return boost::math::tr1::comp_ellint_3f(k, nu); }
inline long double comp_ellint_3(long double k, long double nu)
{ return boost::math::tr1::comp_ellint_3l(k, nu); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type comp_ellint_3(T1 k, T2 nu)
{ return boost::math::tr1::comp_ellint_3(static_cast<typename tools::promote_args<T1, T2>::type> BOOST_PREVENT_MACRO_SUBSTITUTION(k), static_cast<typename tools::promote_args<T1, T2>::type> BOOST_PREVENT_MACRO_SUBSTITUTION(nu)); }

#if 0
// [5.2.1.7] confluent hypergeometric functions:
double conf_hyperg BOOST_PREVENT_MACRO_SUBSTITUTION(double a, double c, double x);
float conf_hypergf BOOST_PREVENT_MACRO_SUBSTITUTION(float a, float c, float x);
long double conf_hypergl BOOST_PREVENT_MACRO_SUBSTITUTION(long double a, long double c, long double x);
#endif

// [5.2.1.8] regular modified cylindrical Bessel functions:
inline float cyl_bessel_i BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x)
{ return boost::math::tr1::cyl_bessel_if BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
inline long double cyl_bessel_i BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x)
{ return boost::math::tr1::cyl_bessel_il BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type cyl_bessel_i BOOST_PREVENT_MACRO_SUBSTITUTION(T1 nu, T2 x)
{ return boost::math::tr1::cyl_bessel_i BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(nu), static_cast<typename tools::promote_args<T1, T2>::type>(x)); }

// [5.2.1.9] cylindrical Bessel functions (of the first kind):
inline float cyl_bessel_j BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x)
{ return boost::math::tr1::cyl_bessel_jf BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
inline long double cyl_bessel_j BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x)
{ return boost::math::tr1::cyl_bessel_jl BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type cyl_bessel_j BOOST_PREVENT_MACRO_SUBSTITUTION(T1 nu, T2 x)
{ return boost::math::tr1::cyl_bessel_j BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(nu), static_cast<typename tools::promote_args<T1, T2>::type>(x)); }

// [5.2.1.10] irregular modified cylindrical Bessel functions:
inline float cyl_bessel_k BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x)
{ return boost::math::tr1::cyl_bessel_kf BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
inline long double cyl_bessel_k BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x)
{ return boost::math::tr1::cyl_bessel_kl BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type cyl_bessel_k BOOST_PREVENT_MACRO_SUBSTITUTION(T1 nu, T2 x)
{ return boost::math::tr1::cyl_bessel_k BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type> BOOST_PREVENT_MACRO_SUBSTITUTION(nu), static_cast<typename tools::promote_args<T1, T2>::type>(x)); }

// [5.2.1.11] cylindrical Neumann functions;
// cylindrical Bessel functions (of the second kind):
inline float cyl_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(float nu, float x)
{ return boost::math::tr1::cyl_neumannf BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
inline long double cyl_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(long double nu, long double x)
{ return boost::math::tr1::cyl_neumannl BOOST_PREVENT_MACRO_SUBSTITUTION(nu, x); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type cyl_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(T1 nu, T2 x)
{ return boost::math::tr1::cyl_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(nu), static_cast<typename tools::promote_args<T1, T2>::type>(x)); }

// [5.2.1.12] (incomplete) elliptic integral of the first kind:
inline float ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float phi)
{ return boost::math::tr1::ellint_1f BOOST_PREVENT_MACRO_SUBSTITUTION(k, phi); }
inline long double ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double phi)
{ return boost::math::tr1::ellint_1l BOOST_PREVENT_MACRO_SUBSTITUTION(k, phi); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(T1 k, T2 phi)
{ return boost::math::tr1::ellint_1 BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(k), static_cast<typename tools::promote_args<T1, T2>::type>(phi)); }

// [5.2.1.13] (incomplete) elliptic integral of the second kind:
inline float ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float phi)
{ return boost::math::tr1::ellint_2f BOOST_PREVENT_MACRO_SUBSTITUTION(k, phi); }
inline long double ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double phi)
{ return boost::math::tr1::ellint_2l BOOST_PREVENT_MACRO_SUBSTITUTION(k, phi); }
template <class T1, class T2>
inline typename tools::promote_args<T1, T2>::type ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(T1 k, T2 phi)
{ return boost::math::tr1::ellint_2 BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2>::type>(k), static_cast<typename tools::promote_args<T1, T2>::type>(phi)); }

// [5.2.1.14] (incomplete) elliptic integral of the third kind:
inline float ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(float k, float nu, float phi)
{ return boost::math::tr1::ellint_3f BOOST_PREVENT_MACRO_SUBSTITUTION(k, nu, phi); }
inline long double ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(long double k, long double nu, long double phi)
{ return boost::math::tr1::ellint_3l BOOST_PREVENT_MACRO_SUBSTITUTION(k, nu, phi); }
template <class T1, class T2, class T3>
inline typename tools::promote_args<T1, T2, T3>::type ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(T1 k, T2 nu, T3 phi)
{ return boost::math::tr1::ellint_3 BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T1, T2, T3>::type>(k), static_cast<typename tools::promote_args<T1, T2, T3>::type>(nu), static_cast<typename tools::promote_args<T1, T2, T3>::type>(phi)); }

// [5.2.1.15] exponential integral:
inline float expint BOOST_PREVENT_MACRO_SUBSTITUTION(float x)
{ return boost::math::tr1::expintf BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
inline long double expint BOOST_PREVENT_MACRO_SUBSTITUTION(long double x)
{ return boost::math::tr1::expintl BOOST_PREVENT_MACRO_SUBSTITUTION(x); }
template <class T>
inline typename tools::promote_args<T>::type expint BOOST_PREVENT_MACRO_SUBSTITUTION(T x)
{ return boost::math::tr1::expint BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.16] Hermite polynomials:
inline float hermite BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x)
{ return boost::math::tr1::hermitef BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
inline long double hermite BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x)
{ return boost::math::tr1::hermitel BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
template <class T>
inline typename tools::promote_args<T>::type hermite BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, T x)
{ return boost::math::tr1::hermite BOOST_PREVENT_MACRO_SUBSTITUTION(n, static_cast<typename tools::promote_args<T>::type>(x)); }

#if 0
// [5.2.1.17] hypergeometric functions:
double hyperg BOOST_PREVENT_MACRO_SUBSTITUTION(double a, double b, double c, double x);
float hypergf BOOST_PREVENT_MACRO_SUBSTITUTION(float a, float b, float c, float x);
long double hypergl BOOST_PREVENT_MACRO_SUBSTITUTION(long double a, long double b, long double c,
long double x);
#endif

// [5.2.1.18] Laguerre polynomials:
inline float laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x)
{ return boost::math::tr1::laguerref BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
inline long double laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x)
{ return boost::math::tr1::laguerrel BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
template <class T>
inline typename tools::promote_args<T>::type laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, T x)
{ return boost::math::tr1::laguerre BOOST_PREVENT_MACRO_SUBSTITUTION(n, static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.19] Legendre polynomials:
inline float legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, float x)
{ return boost::math::tr1::legendref BOOST_PREVENT_MACRO_SUBSTITUTION(l, x); }
inline long double legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, long double x)
{ return boost::math::tr1::legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(l, x); }
template <class T>
inline typename tools::promote_args<T>::type legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, T x)
{ return boost::math::tr1::legendre BOOST_PREVENT_MACRO_SUBSTITUTION(l, static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.20] Riemann zeta function:
inline float riemann_zeta BOOST_PREVENT_MACRO_SUBSTITUTION(float z)
{ return boost::math::tr1::riemann_zetaf BOOST_PREVENT_MACRO_SUBSTITUTION(z); }
inline long double riemann_zeta BOOST_PREVENT_MACRO_SUBSTITUTION(long double z)
{ return boost::math::tr1::riemann_zetal BOOST_PREVENT_MACRO_SUBSTITUTION(z); }
template <class T>
inline typename tools::promote_args<T>::type riemann_zeta BOOST_PREVENT_MACRO_SUBSTITUTION(T z)
{ return boost::math::tr1::riemann_zeta BOOST_PREVENT_MACRO_SUBSTITUTION(static_cast<typename tools::promote_args<T>::type>(z)); }

// [5.2.1.21] spherical Bessel functions (of the first kind):
inline float sph_bessel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x)
{ return boost::math::tr1::sph_besself BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
inline long double sph_bessel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x)
{ return boost::math::tr1::sph_bessell BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
template <class T>
inline typename tools::promote_args<T>::type sph_bessel BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, T x)
{ return boost::math::tr1::sph_bessel BOOST_PREVENT_MACRO_SUBSTITUTION(n, static_cast<typename tools::promote_args<T>::type>(x)); }

// [5.2.1.22] spherical associated Legendre functions:
inline float sph_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, float theta)
{ return boost::math::tr1::sph_legendref BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, theta); }
inline long double sph_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, long double theta)
{ return boost::math::tr1::sph_legendrel BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, theta); }
template <class T>
inline typename tools::promote_args<T>::type sph_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned l, unsigned m, T theta)
{ return boost::math::tr1::sph_legendre BOOST_PREVENT_MACRO_SUBSTITUTION(l, m, static_cast<typename tools::promote_args<T>::type>(theta)); }

// [5.2.1.23] spherical Neumann functions;
// spherical Bessel functions (of the second kind):
inline float sph_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, float x)
{ return boost::math::tr1::sph_neumannf BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
inline long double sph_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, long double x)
{ return boost::math::tr1::sph_neumannl BOOST_PREVENT_MACRO_SUBSTITUTION(n, x); }
template <class T>
inline typename tools::promote_args<T>::type sph_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(unsigned n, T x)
{ return boost::math::tr1::sph_neumann BOOST_PREVENT_MACRO_SUBSTITUTION(n, static_cast<typename tools::promote_args<T>::type>(x)); }

}}} // namespaces

#endif // __cplusplus

#endif // BOOST_MATH_TR1_HPP

