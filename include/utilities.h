#ifndef UTILITIES_H
#define UTILITIES_H
#include <Arduino.h>

#define PORT_D (uint8_t)0
#define PORT_B (uint8_t)1
#define PORT_C (uint8_t)2

#define PX0 (uint8_t)0b00000001
#define PX1 (uint8_t)0b00000010
#define PX2 (uint8_t)0b00000100
#define PX3 (uint8_t)0b00001000
#define PX4 (uint8_t)0b00010000
#define PX5 (uint8_t)0b00100000
#define PX6 (uint8_t)0b01000000
#define PX7 (uint8_t)0b10000000

#define SET_PIN(PORT,PIN) (PORT|= 1<<PIN)
#define CLEAR_PIN(PORT,PIN) (PORT&=~(1<<PIN))

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t i8;
typedef int16_t i16; 
typedef int32_t i32;
typedef int64_t i64;
typedef boolean bit;

typedef struct DifferentialPairsU8{
    u8 A;
    u8 B;
} DPU8;

typedef struct DifferentialPairsU16{
    u16 A;
    u16 B;
} DPU16;

typedef struct DifferentialPairsU32{
    u32 A;
    u32 B;
} DPU32;

typedef struct DifferentialPairsU64{
    u64 A;
    u64 B;
} DPU64;

void establishPortIn(u8 PXX, u8 PORT_X, bit PULL_UP);
void establishPortOut(u8 PXX, u8 PORT_X);
void configTimerCMR(u8 TIMER_X, u8 PRESCALER, u16 CMR);

#endif