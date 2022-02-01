/*
 * main.c
 *
 *  Created on: Jan 26, 2022
 *      Author: Abdelrahman Mohamed
 */


#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"
#include "util/delay.h"
#include "MCAL/SPI/SPI_Interface.h"
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/PUSHBOTTON/PUSHBT_interface.h"
#include "MCAL/UART/UART_Interface.h"

#include "APP/APP.h"
/* Master*/

void main()
{
	 APP_Init();

	while(1)
	{
		 APP_run();
	}
}

