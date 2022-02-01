/*
 * APP.c
 *
 *  Created on: Jan 31, 2022
 *      Author: Abdelrahman Mohamed
 */

#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include "../MCAL/SPI/SPI_Interface.h"
#include "../HAL/PUSHBOTTON/PUSHBT_interface.h"
#include "APP.h"

void APP_Init()
{
	PushBt_init(BTN0);
	SPI_MasterInit();
}

void APP_run()
{
	uint8_t BUTTON=0;
	PushBt_GetState(BTN0,&BUTTON);

			if(BUTTON==1)
			{
				SPI_MasterTransmit('a');
			}
			else
			{
				SPI_MasterTransmit(0);
			}

		}

