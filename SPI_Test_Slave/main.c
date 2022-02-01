/*
 * main.c
 *
 *  Created on: Jan 26, 2022
 *      Author: Abdelrahman Mohamed
 */


#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "MCAL/SPI/SPI_Interface.h"
#include "HAL/LED/LED_Interface.h"

#include "APP/APP.h"

/* Slave*/
void main()
{
	 APP_Init();

	while(1)
	{
		 APP_run();
	}
}

