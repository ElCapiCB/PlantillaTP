#ifndef UTILITIES_H
#define UTILITIES_H
#include <Arduino.h>

#define PORT_D 0
#define PORT_B 1
#define PORT_C 2

#define PX0 0b00000001
#define PX1 0b00000010
#define PX2 0b00000100
#define PX3 0b00001000
#define PX4 0b00010000
#define PX5 0b00100000
#define PX6 0b01000000
#define PX7 0b10000000

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

void establishPortIn(u8 PXX, u8 PORT_X, bit PULL_UP);
void establishPortOut(u8 PXX, u8 PORT_X);

#endif