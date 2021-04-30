#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_
/**
 * @file activity1.h
 * @author Megha M
 * @version 0.1
 * 
 * @copyright Copyright (c) 2021
 * 
 */


//For Aref=AVcc
#define voltage_ref_value (REFS0)

//for enabling ADC
#define ADC_enable (ADEN) 

//for channel selection
#define ADC_channel_select (ADMUX)

//These bits determine the division factor between the system clock frequency and the input clock to the ADC.
#define ADC_prescalar (ADPS0)

//ADC Control and Status Register A
#define ADC_status (ADCSRA)

// enable to start ADC conversion
#define ADC_start_conversion (ADSC) 

//enables interrupt flag when conversion is completed
#define ADC_conversion_finish (ADIF) 

// initial value from which conversion start
#define initial_read_value (0) 

//11111000 for analog channel selection
#define ADC_channel_select_value (0xf8)

//ADC Channel must be 0-7
#define ADC_channel_value (0b00000111)  

/**
 * Including files
 */ 
#include "activity1.h"

/**
 * Function Definitions
 */

/**
 * @brief Initialize ADC and set prescalar for voltage reference value
 * 
 */
void InitADC(void);
/**
 * @brief Read analog value and starts to convert to corresponding digital value from the specified ADC channel
 */
uint16_t ReadADC(uint8_t ADC_channel);
/**
 * @brief function where the code execution starts
 */
void activity2(void);

/** __ACTIVITY2_H_ */
#endif 