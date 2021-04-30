#ifndef __ACTIVITY4_H_
#define __ACTIVITY4_H_
/**
 * @file activity4.h
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

/* set baud rate for lower bit register*/
 #define BAUD_RATE_REG_L (UBRR0L)

/* set baud rate for higher bit register*/
 #define BAUD_RATE_REG_H (UBRR0H)

/*USART status register flag C*/
 #define USART_STATUS_C (UCSR0C)

/*USART status register flag A*/
 #define USART_STATUS_A (UCSR0A)

/*USART status register flag B*/
 #define USART_STATUS_B (UCSR0B)

/* SEL00 for synchronous USART */
 #define USART_MODE_SELECT (UMSEL00)

/* Z01,Z00 are set For 8 bit */
 #define USART_CH_SIZE_01 (UCSZ01)

/* character size */
 #define USART_CH_SIZE_00 (UCSZ00)

/* enable the receiver */
 #define RECEIVER_ENABLE (RXEN0) 

 /* enable the transmitter*/
 #define TRANSMITTER_ENABLE (TXEN0) 

/* enables interrupt after receiving completes */
 #define RX_COMPLETE_INTERRUPT (RXCIE0) 

 /* enables interrupt after transmitting completes */
 #define TX_COMPLETE_INTERRUPT (TXCIE0) 

/* checks if register is empty */
 #define REG_EMPTY (UDRE0) 

/* stores temporarily data */
 #define BUFFER (UDR0) 





/**
 * @brief initializes the USART, sets the baud rate, enables  the receiver and transmitter
 * 
 */
 void USARTInit(uint16_t ubrr_value);
 /**
 * @brief writes character from buffer to parralel bus
 */
 void USARTWriteChar(uint16_t temperature_value);
 /**
 * @brief  to display message
 * 
 */
 void message();
 /**
 * @brief  calls all the functions
 */
 void activity4(volatile uint16_t digital_value);
 #endif /** __ACTIVITY4_H_ */