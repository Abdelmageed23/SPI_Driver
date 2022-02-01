/*
 * SPI_Interface.h
 *
 *  Created on: Jan 25, 2022
 *      Author: Abdelrahman Mohamed
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI_MasterInit(void);
void SPI_MasterTransmit(uint8_t Data);

void SPI_SlaveInit(void);
uint8_t SPI_SlaveReceive(void);

#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
