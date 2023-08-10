#ifndef TYPES_H
#define TYPES_H

// NOTE(Toufiq): Basic Types
#include <stdint.h>
typedef int8_t      i8;
typedef int16_t     i16;
typedef int32_t     i32;
typedef int64_t     i64;
typedef uint8_t     i8u;
typedef uint16_t    i16u;
typedef uint32_t    i32u;
typedef uint64_t    i64u;
typedef i8          b8;
typedef i16         b16;
typedef i32         b32;
typedef i64         b64;
typedef float       f32;
typedef double      f64;

typedef void VoidFunc(void);

// NOTE(Toufiq): Basic Constants
static i8   i8_MIN = (i8)  0x80;
static i16 i16_MIN = (i16) 0x8000;
static i32 i32_MIN = (i32) 0x80000000;
static i64 i64_MIN = (i64) 0x8000000000000000llu;

static i8   i8_MAX = (i8)  0x7f;
static i16 i16_MAX = (i16) 0x7fff;
static i32 i32_MAX = (i32) 0x7fffffff;
static i64 i64_MAX = (i64) 0x7fffffffffffffffllu;

static i8u   i8u_MAX = (i8u)  0xff;
static i16u i16u_MAX = (i16u) 0xffff;
static i32u i32u_MAX = (i32u) 0xffffffff;
static i64u i64u_MAX = (i64u) 0xffffffffffffffffllu;

static f32 f32_MACHINE_EPSILON  = 1.1920929e-7f;
static f32 f32_PI               = 3.14159265359f;
static f32 f32_TAU              = 6.28318530718f;
static f32 f32_GOLD_BIG         = 1.61803398875f;
static f32 f32_GOLD_SMALL       = 0.61803398875f;

static f64 f64_MACHINE_EPSILON  = 2.220446e-7f;
static f64 f64_PI               = 3.14159265359;
static f64 f64_TAU              = 6.28318530718;
static f64 f64_GOLD_BIG         = 1.61803398875;
static f64 f64_GOLD_SMALL       = 0.61803398875;

// NOTE(Toufiq): Float Constant Functions
static f32 inf_f32(void);
static f32 ninf_f32(void);
static f64 inf_f64(void);
static f64 ninf_f64(void);

#endif // TYPES_H