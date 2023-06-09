/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 19:56:39
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 25
 * Denominator Length  : 25
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 25;
const real64_T NUM[25] = {
  0.0007511799441471,-0.005772518353595,  0.02185917409131, -0.05589422354638,
     0.1106013906634,  -0.1804149471147,   0.2497280997509,  -0.2998370357559,
     0.3192053989237,  -0.3074529283083,   0.2765188048459,  -0.2468545229165,
     0.2351246878213,  -0.2468545229165,   0.2765188048459,  -0.3074529283083,
     0.3192053989237,  -0.2998370357559,   0.2497280997509,  -0.1804149471147,
     0.1106013906634, -0.05589422354638,  0.02185917409131,-0.005772518353595,
  0.0007511799441471
};
const int DL = 25;
const real64_T DEN[25] = {
                   1,   -10.47808592374,     56.5323854721,   -206.9520965157,
      573.7596575276,    -1276.69298684,     2361.48192712,   -3715.004489598,
       5048.49401353,   -5990.347205982,    6251.854920156,   -5766.133647971,
      4712.055480565,   -3414.312234121,    2191.301067676,   -1242.041850584,
      618.6192169347,   -268.7021515023,    100.6781321872,   -32.03523221267,
      8.461764878942,   -1.792171583176,   0.2875009611834, -0.03136707451956,
   0.001775590148354
};
