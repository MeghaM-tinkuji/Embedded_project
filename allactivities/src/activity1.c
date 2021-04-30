#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif


#include "activity1.h"
#include <avr/io.h>
/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */


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


void peripheral_init(void)
{
    DDRC
    /* Configure LED Pin as output */
    LED_OUTPUT |= (1 <<LED_OUTPUT_PIN);
    /* Configure switch pins as input */
    SWITCH_INPUT &=~(1<<BUTTON_SENSOR_SWITCH);
    SWITCH_PORT |=(1<<BUTTON_SENSOR_SWITCH);

    SWITCH_INPUT&=~(1<<HEATER_SWITCH);
    SWITCH_PORT|=(1<<HEATER_SWITCH);
}
/**
 * @brief Function to change state of the LED
 * 
 */
void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
/**
 * @brief checks the state of the switches
 * 
 * @return int
 */
int check_switch_state(void)
{   
    return ((!(SWITCH_PIN&(1<<BUTTON_SENSOR_SWITCH))) && (!(SWITCH_PIN&(1<<HEATER_SWITCH))));
}
/**
 * @brief Function to generate delay in micro seconds
 * 
 */
void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
/**
 * @brief function where the code execution starts
 * 
 */
void activity1(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1)
	{   
        if(check_switch_state()) /* if both switches are closed LED will turn ON */
        {
        change_led_state(LED_ON);
		delay_ms(LED_ON_TIME);
        }
        else
        {
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);
        }	
	}
}