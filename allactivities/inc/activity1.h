#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_
/**
 * @file activity1.h
 * @author Megha M
 * @version 0.1
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Including files
 */ 
#include <avr/io.h>
#include <util/delay.h>
#define _AVR_ATmega328_


/**< LED state HIGH */
#define LED_ON 	(0x01)

/**< LED state LOW */
#define LED_OFF	(0x00)			

/**< LED ON time in milli seconds  */
#define LED_ON_TIME     (500)  

/**< LED OFF time in milli seconds */
#define LED_OFF_TIME    (500)   

/**< Clock Frequency of MCU is 16 MHz */
#define F_CPU 16000000UL 	

/**< LED Port Number */
#define LED_PORT (PORTB) 

/**< LED Pin number  */
#define LED_PIN  (PORTB0)   

/**< Switch port */
#define SWITCH_PORT (PORTD) 

/**< Pin register to read INPUT */
#define SWITCH_PIN (PIND) 

/**< Switch 1 for button sensor */
#define BUTTON_SENSOR_SWITCH (PD0)  

/**< Switch 2 for heater */
#define HEATER_SWITCH (PD1)  

/**< Output data register */
#define LED_OUTPUT (DDRB)  

/**< ouput pin */
#define LED_OUTPUT_PIN (DDB0)  

/**< input data register */
#define SWITCH_INPUT (DDRD)  



/**
 * Function Definitions
 */

/**
 * @brief Initialize all the input and output pin configurations
 * 
 */
void peripheral_init(void);
/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 */
void change_led_state(uint8_t state);

/**
 * @brief  Check the state of the switches and returns INT value
 * 
 * @return INT
 */

int check_switch_state(void); 
/**
 * @brief Function to generate delay in micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);
/**
 * @brief function where the code execution starts
 */
void activity1(void);


#endif /** __ACTIVITY1_H_ */