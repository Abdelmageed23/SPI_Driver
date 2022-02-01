/*
 * SPI_Config.h
 *
 *  Created on: Jan 25, 2022
 *      Author: Abdelrahman Mohamed
 */

#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

/*
 * FCPU_2
 * FCPU_4
 * FCPU_8
 * FCPU_16
 * FCPU_32
 * FCPU_64
 * FCPU_128
 */
#define SPI_CLK		FCPU_4

/*
 * LEADING_RISING_EDGE
 * LEADING_FALLING_EDGE
 */
#define CLK_POLARITY	LEADING_RISING_EDGE

/*
 * SAMPLE_RISING_LEADING_EDGE
 * SETUP_RISING_LEADING_EDGE
 * SAMPLE_FALLING_LEADING_EDGE
 * SETUP_FALLING_LEADING_EDGE
 */
#define DATA_MODE	SAMPLE_RISING_LEADING_EDGE

/*
 * INTERRPUT_ENABLE
 * INTERRPUT_DISABLE
 */
#define SPI_INTERRUPT	INTERRPUT_DISABLE


/*
 * LSB_FIRST
 * MSB_FIRST
 */
#define  DATA_ORDER		MSB_FIRST


#endif /* MCAL_SPI_SPI_CONFIG_H_ */
