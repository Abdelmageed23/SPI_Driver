/*********************************************************/
/* Author  : Abdelrahman Mohamed              			 */
/* Date     : 4 Jan	2022                   				 */
/* Version  : V01                            			 */
/*********************************************************/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/* PIN Values*/
#define HIGH 1
#define LOW  0

/* GPIO MODE*/
#define INPUT 	0
#define OUTPUT	1
#define INPUT_PULLUP	2

/* GPIO PORTs*/

#define DIO_PORTA 1
#define DIO_PORTB 2
#define DIO_PORTC 3
#define DIO_PORTD 4



/* GPIO PINs  */
#define DIO_PIN0   0
#define DIO_PIN1   1
#define DIO_PIN2   2
#define DIO_PIN3   3
#define DIO_PIN4   4
#define DIO_PIN5   5
#define DIO_PIN6   6
#define DIO_PIN7   7


sint8_t DIO_SetPinDircection(uint8_t PORT , uint8_t PIN , uint8_t Mode);
sint8_t DIO_SetPortDirection(uint8_t PORT, uint8_t Mode);
sint8_t DIO_SetPinValue(uint8_t PORT , uint8_t PIN , uint8_t value);
sint8_t DIO_SetPortValue(uint8_t PORT , uint8_t value);
sint8_t DIO_GetPinVal(uint8_t PORT , uint8_t PIN , uint8_t * val);
sint8_t DIO_TogglePin(uint8_t PORT , uint8_t PIN );


#endif
