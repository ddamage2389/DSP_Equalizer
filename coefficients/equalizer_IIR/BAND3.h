/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 20:21:53
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 7
 * Denominator Length  : 7
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 7;
const real64_T NUM[7] = {
  6.493234938406e-05,-0.0002450269518063,0.0002952569836899,                 0,
  -0.0002952569836899,0.0002450269518063,-6.493234938406e-05
};
const int DL = 7;
const real64_T DEN[7] = {
                   1,   -5.933634243282,    14.67455976439,   -19.36167566628,
      14.37401995419,   -5.693080615989,   0.9398108099061
};