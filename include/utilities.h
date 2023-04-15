#ifndef UTILITIES_H
#define UTILITIES_H
#include <Arduino.h>

#define PORT_D (uint8_t)0
#define PORT_B (uint8_t)1
#define PORT_C (uint8_t)2
#define TIMER0 (uint8_t)0
#define TIMER1 (uint8_t)1
#define TIMER_2 (uint8_t)2

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

void establishPortIn(u8 PXX, u8 PORT_X, bit PULL_UP); // Establece los pines de un puerto en entrada (tanto te cuesta el ingles que leiste esto 😕?)
void establishPortOut(u8 PXX, u8 PORT_X); // Establece los pines de un puerto en salida (tanto te cuesta el ingles que leiste esto 😕?)

void configTimerCMR(u8 TIMER_X, u8 PRESCALER, u16 CMR); // Una funcion que configura el timer de forma mas amable a la vista 😉


#endif