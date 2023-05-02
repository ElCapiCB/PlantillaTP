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


/// @brief Estructura que contiene variables para el manejo de contadores de tiempo o para hacer diferencias
typedef struct DifferentialPairsU8{
    u8 A;
    u8 B;
} DPU8;


/// @brief Estructura que contiene variables para el manejo de contadores de tiempo o para hacer diferencias
typedef struct DifferentialPairsU16{
    u16 A;
    u16 B;
} DPU16;


/// @brief Estructura que contiene variables para el manejo de contadores de tiempo o para hacer diferencias
typedef struct DifferentialPairsU32{
    u32 A;
    u32 B;
} DPU32;


/// @brief Estructura que contiene variables para el manejo de contadores de tiempo o para hacer diferencias
typedef struct DifferentialPairsU64{
    u64 A;
    u64 B;
} DPU64;

/**
 * @brief Esta funcion establece los pines del puerto en entrada
 * 
 * @param PXX Pines a establecer EJ(PX1 | PX2 | PX3)
 * @param PORT_X Puerto a utilizar
 * @param PULL_UP Habilita la pull-up
 */
void establishPortIn(u8 PXX, u8 PORT_X, bit PULL_UP);

/**
 * @brief Esta funcion establece los pines del puerto en salida
 * 
 * @param PXX Pines a establecer EJ(PX1 | PX2 | PX3)
 * @param PORT_X Puerto a utilizar
 */
void establishPortOut(u8 PXX, u8 PORT_X);

/**
 * @brief Configura el timer
 * 
 * @param TIMER_X Que timer se va a utilizar
 * @param PRESCALER Selecciona el prescaler del timer
 * @param CMR Establece el numero en el que el contador resetea y ejecuta la interrupcion
 */
void configTimerCMR(u8 TIMER_X, u8 PRESCALER, u16 CMR);

#endif