#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_
/**
 * @file activity3.h
 * @author Megha M
 * @version 0.1
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 /**
 * Including files
 */ 
#include "activity1.h"
#include "activity2.h"

/**
 * @brief defining macros
 * 
 */
//control register A with timer 1
#define CONTROL_REG_A (TCCR1A)

//control register B with timer 1
#define CONTROL_REG_B (TCCR1B)

//output wave form from oscilloscope
#define WAVEFORM_OUTPUT (DDRB)

//output wave form from osciloscope to pin B1
#define WAVEFORM_OUTPUT_PIN (PB1)

//comparing the output of ADC with tick clock
#define COMPARE_OUTPUT_A (COM1A1)

//wave form mode 10
#define WAVEFORM_MODE_10 (WGM10)

//wave form mode 11
#define WAVEFORM_MODE_11 (WGM11)

//wave form mode 12
#define WAVEFORM_MODE_12 (WGM12)

//clock select 10
#define CLK_SELECT_10 (CS10)

//clock select 11
#define CLK_SELECT_11 (CS11)

//output compare register
#define OUTPUT_COMPARE_REG (OCR1A)


/**
 * @brief configure all timer/counter registers and set non-inverting mode, fast PWM 10 bit 
 */
void pwm_config(void);
/**
 * @brief  generates waveform for each value with delay specified
 * 
 */
void activity3(volatile uint16_t ADC_value);
 #endif /** __ACTIVITY3_H_ */