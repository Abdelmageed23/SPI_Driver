/*
 * APP.c
 *
 *  Created on: Jan 31, 2022
 *      Author: Abdelrahman Mohamed
 */

#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../MCAL/SPI/SPI_Interface.h"
#include "../HAL/LED/LED_Interface.h"
#include "APP.h"

void APP_Init()
{

	SPI_SlaveInit();
	LED_PORT_Init();
}

void APP_run()
{
	uint8_t Buffer=0;
	Buffer=SPI_SlaveReceive();
	if(Buffer=='a')
	{
		LED_PORT_Value(Buffer);

	}
	else
	{
		LED_PORT_Value(0);

	}

}

