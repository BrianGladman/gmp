/* AMD K7 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4


/* 2083 MHz Athlon */

/* Generated by tuneup.c, 2005-03-18, gcc 3.3 */

#define MUL_KARATSUBA_THRESHOLD          26
#define MUL_TOOM3_THRESHOLD              98

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          52
#define SQR_TOOM3_THRESHOLD             113

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              84
#define MULLOW_MUL_N_THRESHOLD          357

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 84
#define POWM_THRESHOLD                  134

#define HGCD_THRESHOLD                  220
#define GCD_ACCEL_THRESHOLD               3
#define GCD_SCHOENHAGE_THRESHOLD        908
#define GCDEXT_SCHOENHAGE_THRESHOLD     683
#define JACOBI_BASE_METHOD                1

#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             25
#define GET_STR_PRECOMPUTE_THRESHOLD     39
#define SET_STR_THRESHOLD              4385

#define MUL_FFT_TABLE  { 624, 1184, 2432, 5632, 14336, 40960, 163840, 393216, 1572864, 6291456, 0 }
#define MUL_FFT_MODF_THRESHOLD          616
#define MUL_FFT_THRESHOLD              4864

#define SQR_FFT_TABLE  { 656, 1184, 2688, 5632, 14336, 40960, 163840, 393216, 1572864, 6291456, 0 }
#define SQR_FFT_MODF_THRESHOLD          672
#define SQR_FFT_THRESHOLD              4864

#define MUL_FFT_TABLE2 {{1, 4}, {401, 5}, {801, 6}, {817, 5}, {865, 6}, {1025, 5}, {1057, 6}, {1601, 7}, {1633, 6}, {1729, 7}, {1921, 6}, {2113, 7}, {2177, 6}, {2241, 7}, {2433, 6}, {2497, 7}, {2945, 6}, {3009, 7}, {3457, 8}, {3521, 7}, {4481, 8}, {4865, 7}, {5249, 8}, {5889, 7}, {6017, 8}, {7553, 9}, {7681, 8}, {9985, 9}, {11777, 8}, {13057, 9}, {13825, 8}, {14081, 9}, {15873, 8}, {16641, 9}, {16897, 8}, {17153, 9}, {19969, 8}, {20225, 9}, {20737, 8}, {20993, 9}, {24065, 8}, {24577, 9}, {25089, 8}, {25345, 9}, {27393, 10}, {27649, 9}, {28161, 10}, {31745, 9}, {38913, 10}, {39425, 9}, {40449, 10}, {48129, 9}, {48641, 11}, {63489, 10}, {98305, 11}, {99329, 10}, {100353, 11}, {101377, 10}, {103425, 11}, {104449, 10}, {110593, 11}, {112641, 10}, {113665, 11}, {129025, 10}, {162817, 11}, {194561, 10}, {195585, 12}, {258049, 11}, {391169, 12}, {520193, 11}, {718849, 12}, {782337, 11}, {849921, 13}, {1040385, 12}, {2879489, 13}, {3137537, 12}, {3928065, 13}, {4186113, 12}, {4976641, 13}, {5234689, 12}, {6025217, 13}, {6283265, 12}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 4}, {401, 5}, {417, 4}, {433, 5}, {881, 6}, {961, 5}, {993, 6}, {1857, 7}, {1921, 6}, {2049, 7}, {2177, 6}, {2241, 7}, {2433, 6}, {2497, 7}, {3457, 8}, {3841, 7}, {4481, 8}, {4609, 7}, {4737, 8}, {4865, 7}, {5249, 8}, {5889, 7}, {6273, 8}, {7041, 9}, {7681, 8}, {9985, 9}, {10241, 8}, {10497, 9}, {11777, 8}, {13057, 9}, {15873, 8}, {16385, 9}, {16897, 8}, {17153, 9}, {19969, 8}, {20225, 9}, {20737, 8}, {20993, 9}, {24065, 8}, {24321, 9}, {24577, 10}, {24833, 9}, {25601, 10}, {27137, 9}, {27649, 10}, {31745, 9}, {38401, 10}, {38913, 9}, {40449, 10}, {48129, 9}, {48641, 11}, {63489, 10}, {99329, 11}, {101377, 10}, {103425, 11}, {104449, 10}, {107521, 11}, {110593, 10}, {113665, 11}, {129025, 10}, {154625, 11}, {155649, 10}, {162817, 11}, {194561, 12}, {258049, 11}, {391169, 12}, {520193, 11}, {718849, 12}, {727041, 11}, {729089, 12}, {782337, 11}, {849921, 13}, {1040385, 12}, {2879489, 13}, {3137537, 12}, {3928065, 13}, {4186113, 12}, {4714497, 13}, {5234689, 12}, {6025217, 13}, {6283265, 12}, {7073793, 13}, {7331841, 12}, {MP_SIZE_T_MAX,0}}
