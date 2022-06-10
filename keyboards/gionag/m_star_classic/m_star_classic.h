#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array




#define LAYOUTMINIM( \
    K5A,      K5B, K5C, K5D, K5E,  K5F, K5G, K5H, K5I,  K5J, K5K, K5L, K5M,      K5N, K5O, K5P, \
    \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O,   K4P, K4Q, K4R, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,        K3O, K3P, K3Q, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,                  \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1O, K0P,            K1M,      \
    K0A, K0B, K0C,           K0D,                K0E, K0F, K0G, K0H,        K0I, K0J, K1N  \
) \
{ \
/* 00 */ { K4A,   K5A,   K4F,   K1O,   K5C,   K5D,   K5E,   K3K,   KC_NO, KC_NO, KC_NO, KC_NO, K0C,   K2N,   KC_NO, KC_NO, }, \
/* 01 */ { K2A,   K1B,   K3B,   KC_NO, KC_NO, KC_NO, KC_NO, K4G,   K5F,   KC_NO, KC_NO, KC_NO, KC_NO, K2M,   K0H,   K0P,   }, \
/* 02 */ { K2C,   K2D,   K5B,   K2E,   K2F,   K1C,   K1E,   KC_NO, K1D,   K1F,   K1G,   K2B,   K3A,   KC_NO, KC_NO, KC_NO, }, \
/* 03 */ { KC_NO, KC_NO, K4B,   KC_NO, KC_NO, KC_NO, KC_NO, K3G,   K5G,   KC_NO, KC_NO, K0B,   KC_NO, KC_NO, KC_NO, KC_NO, }, \
/* 04 */ { KC_NO, KC_NO, K4E,   KC_NO, KC_NO, KC_NO, KC_NO, K3J,   K5H,   KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, K0A,   K1A,  }, \
/* 05 */ { KC_NO, KC_NO, K3C,   KC_NO, KC_NO, KC_NO, KC_NO, K4H,   K5I,   K3L,   K0F,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
/* 06 */ { KC_NO, KC_NO, K4C,   KC_NO, KC_NO, KC_NO, KC_NO, K3H,   K5J,   K4M,   K5K,   K5L,   K4L,   K5N,   KC_NO, KC_NO, }, \
/* 07 */ { KC_NO, KC_NO, K4D,   KC_NO, KC_NO, KC_NO, KC_NO, K3I,   KC_NO, KC_NO, KC_NO, K5M,   K4N,   K5O,   KC_NO, KC_NO, }, \
/* 08 */ { KC_NO, KC_NO, K3F,   KC_NO, KC_NO, KC_NO, KC_NO, K4K,   KC_NO, K4O,   K1M,   K3P,   K4P,   KC_NO, KC_NO, KC_NO, }, \
/* 09 */ { KC_NO, KC_NO, K3E,   K0E,   K0I,   KC_NO, KC_NO, K4J,   KC_NO, K3N,   KC_NO, KC_NO, KC_NO, K4Q,   KC_NO, KC_NO, }, \
/* 0A */ { K0D,   KC_NO, K3D,   KC_NO, K0G, KC_NO, KC_NO, K4I,   KC_NO, K3M,   K1N,   K0J,   K4R,   K3Q,   KC_NO, KC_NO, }, \
/* 0B */ { K1I,   K1J,   KC_NO, K1K,   K1L,   K2G,   K2I,   KC_NO, K2H,   K2J,   K2K,   K1H,   K2L,   K3O,   KC_NO, K5P,  }, \
}
/*         0      1      2      3      4      5      6      7      8      9      A      B      C      D      E      F       */


/* As far as I know I'm th first to map the '7000 model M. The matrix has al ot of extra keys! -- Wendell */ 
#define LAYOUT122( \
                k09, k19, k1A, k29, k39, k3A, k49, k59, k5A, k69, k79, k7A,                                                  \
                k0A, k0B, k1B, k2A, k2B, k3B, k4A, k4B, k5B, k6A, k6B, k7B,                                                  \
    k31, k32,   k34, k24, k25, k26, k27, k37, k38, k28, k2C, k2D, k2E, k3E, k3C, k3F,   k3G, k3H, k2G,   k2F, k2H, k2I, k20, \
    k21, k41,   k42, k44, k45, k46, k47, k57, k58, k48, k4C, k4D, k4E, k5E, k5C, k6F,   k1G, k5G, k4G,   k4F, k4H, k4I, k40, \
    k51, k52,   k62, k14, k15, k16, k17, k07, k08, k18, k1C, k1D, k1E, k0E, k6E,             k0G,        k1F, k1H, k1I, k10, \
    k11, k12,   k73, k74, k64, k65, k66, k67, k77, k78, k68, k6C, k6D, k7E,      k63,   k60, k0J, k1J,   k61, k6H, k6I, k7J, \
    k02, k01,   k00,    k70,                k71,             k03,      k72,                  k0F,        k7H,      k7I       \
) \
{ \
    {   k00,   k01,   k02,   k03,   KC_NO, KC_NO, KC_NO, k07,   k08,   k09,   k0A,   k0B,   KC_NO, KC_NO, k0E,   k0F,   k0G,   KC_NO, KC_NO, k0J   }, \
    {   k10,   k11,   k12,   KC_NO, k14,   k15,   k16,   k17,   k18,   k19,   k1A,   k1B,   k1C,   k1D,   k1E,   k1F,   k1G,   k1H,   k1I,   k1J   }, \
    {   k20,   k21,   KC_NO, KC_NO, k24,   k25,   k26,   k27,   k28,   k29,   k2A,   k2B,   k2C,   k2D,   k2E,   k2F,   k2G,   k2H,   k2I,   KC_NO }, \
    {   KC_NO, k31,   k32,   KC_NO, k34,   KC_NO, KC_NO, k37,   k38,   k39,   k3A,   k3B,   k3C,   KC_NO, k3E,   k3F,   k3G,   k3H,   KC_NO, KC_NO }, \
    {   k40,   k41,   k42,   KC_NO, k44,   k45,   k46,   k47,   k48,   k49,   k4A,   k4B,   k4C,   k4D,   k4E,   k4F,   k4G,   k4H,   k4I,   KC_NO }, \
    {   KC_NO, k51,   k52,   KC_NO, KC_NO, KC_NO, KC_NO, k57,   k58,   k59,   k5A,   k5B,   k5C,   KC_NO, k5E,   KC_NO, k5G,   KC_NO, KC_NO, KC_NO }, \
    {   k60,   k61,   k62,   k63,   k64,   k65,   k66,   k67,   k68,   k69,   k6A,   k6B,   k6C,   k6D,   k6E,   k6F,   KC_NO, k6H,   k6I,   KC_NO }, \
    {   k70,   k71,   k72,   k73,   k74,   KC_NO, KC_NO, k77,   k78,   k79,   k7A,   k7B,   KC_NO, KC_NO, k7E,   KC_NO, KC_NO, k7H,   k7I,   k7J   }, \
}


/* K4E             */
#define LAYOUTAT122( \
                k09, k19, k18, k29, k39, k38, k49, k59, k58, k69, k79, k78,                                                  \
                k08, k0A, k1A, k28, k2A, k3A, k48, k4A, k5A, k68, k6A, k7A,                                                  \
    \
    k31, k4E,   k32, k22, k23, k24, k26, k36, k37, k27, k2D, k2B, k2C, k3C, k3D, k2E,   k3G, k3I, k3J,   k6H, k6G, k6J, k7J, \
    k33, k41,   k52, k42, k43, k44, k46, k56, k57, k47, k4D, k4B, k4C, k5C, k5D, k2G,   k3H, k2I, k2J,   k4H, k4G, k4J, k4I, \
    \
    k51, k5E,   k53, k12, k13, k14, k16, k06, k07, k17, k1D, k1B, k1C, k0C, k6C, k2H,        k2F,        k5G, k5H, k5J, k5I, \
    k11, k1E,   k55, k03, k62, k63, K64, k66, k76, k77, k67, k6D, K6B, k7C, k7D, k65,   k7I, k0I, k7G,   k1H, k1G, k1J, k1I, \
    k0E, k01,   k40,    k0F,                k71,             k7F,      k60,                  k7H,        k0G,      k0J, k1F  \
) \
{ \
/* 00 */     {   KC_NO, k01,   KC_NO, k03,   KC_NO, KC_NO, k06,   k07,   k08,   k09,   k0A,   KC_NO, k0C,   KC_NO, k0E,   k0F,   k0G,   KC_NO, KC_NO, k0J   }, \
/* 01 */     {   KC_NO, k11,   k12,   k13,   k14,   KC_NO, k16,   k17,   k18,   k19,   k1A,   k1B,   k1C,   k1D,   k1E,   k1F,   k1G,   k1H,   k1I,   k1J   }, \
/* 02 */     {   KC_NO, KC_NO, k22,   k23,   k24,   KC_NO, k26,   k27,   k28,   k29,   k2A,   k2B,   k2C,   k2D,   k2E,   k2F,   k2G,   k2H,   k2I,   k2J }, \
/* 03 */     {   KC_NO, k31,   k32,   k33,   KC_NO, KC_NO, k36,   k37,   k38,   k39,   k3A,   KC_NO, k3C,   k3D,   KC_NO, KC_NO, k3G,   k3H,   k3I,   k3J }, \
/* 04 */     {   k40,   k41,   k42,   k43,   k44,   KC_NO, k46,   k47,   k48,   k49,   k4A,   k4B,   k4C,   k4D,   k4E,   KC_NO, k4G,   k4H,   k4I,   KC_NO }, \
/* 05 */     {   KC_NO, k51,   k52,   k53,   KC_NO, k55,   k56,   k57,   k58,   k59,   k5A,   KC_NO, k5C,   k5D,   k5E,   KC_NO, k5G,   k5H,   KC_NO, k5J }, \
/* 06 */     {   k60,   KC_NO, k62,   k63,   KC_NO, k65,   k66,   k67,   k68,   k69,   k6A,   KC_NO, k6C,   k6D,   KC_NO, KC_NO, k6G,   k6H,   KC_NO, k6J }, \
/* 07 */     {   KC_NO, k71,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k77,   k78,   k79,   k7A,   KC_NO, KC_NO, KC_NO, KC_NO, k7F,   k7G,   k7H,   k7I,   k7J   }, \
}
/*                0      1      2      3      4      5      6      7      8      9      A      B      C       D     E      F       G     H       I     J       */


#define LAYOUT( \
    K5A,      K5B, K5C, K5D, K5E, K5F, K5G, K5H, K5I, K5J, K5K, K5L, K5M,   K5N, K5O, K5P, \
    \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N,   K4O, K4P, K4Q,   K4R, K4S, K4T, K4U, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,   K3O, K3P, K3Q,   K3R, K3S, K3T, K3U, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,                    K2O, K2P, K2Q, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L,      K1M,        K1N,        K1O, K1P, K1Q, K1R, \
    K0A,      K0B,                K0C,                     K0D,      K0E,   K0F, K0G, K0H,   K0I,      K0J \
) \
{ \
/* 00 */ { KC_NO, KC_NO, K5A,   K1B,   K5E,   K2F, K5F,   K2G, K5G,   KC_NO, K2L,   KC_NO, K0I, K0J, K1N,   K0B   }, \
/* 01 */ { KC_NO, K1A,   K3A,   K2A,   K5D,   K3F, K4N,   K3G, K3M,   K5H,   K3L,   K2O,   K2P, K2Q, KC_NO, KC_NO }, \
/* 02 */ { K0A,   KC_NO, K4A,   K5B,   K5C,   K4F, K5J,   K4G, K4M,   K5I,   K4L,   K3O,   K4O, K4Q, K4P,   KC_NO }, \
/* 03 */ { KC_NO, KC_NO, K4B,   K4C,   K4D,   K4E, K5K,   K4H, K4I,   K4J,   K4K,   K5L,   K5M, K3Q, K3P,   K5N   }, \
/* 04 */ { KC_NO, KC_NO, K3B,   K3C,   K3D,   K3E, KC_NO, K3H, K3I,   K3J,   K3K,   K3R,   K3S, K3T, K3U,   K5O   }, \
/* 05 */ { KC_NO, KC_NO, K2B,   K2C,   K2D,   K2E, K3N,   K2H, K2I,   K2J,   K2K,   K1O,   K1P, K1Q, K1R,   KC_NO }, \
/* 06 */ { K0E,   K1M,   K1C,   K1D,   K1E,   K1F, K2N,   K1I, K1J,   K1K,   K2M,   K4R,   K4S, K4T, K5P,   KC_NO }, \
/* 07 */ { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K1G, K0C,   K1H, KC_NO, KC_NO, K1L,   K0G,   K0H, K4U, K0F,   K0D   }, \
}
/*         0      1      2      3      4      5      6      7      8      9      A      B      C    D    E      F       */

