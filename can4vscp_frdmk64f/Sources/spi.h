/*
 * spi.h
 *
 *  Created on: Jun 18, 2015
 *      Author: Angus
 */

#ifndef SOURCES_SPI_AL_H_
#define SOURCES_SPI_AL_H_

#include <stdio.h>
#include "main.h"
#include "fsl_dspi_master_driver.h"

#define WRITE 	0x02
#define WREN 	0x06


uint8_t spi_eeprom_read(uint8_t addr1, uint8_t addr2);

/*******************************************************************************
 * Definitions for SPI
 ******************************************************************************/
#define DSPI_INSTANCE               (0)       /*! User change define to choose DSPI instance */
#define TRANSFER_SIZE               (8)      /*! Transfer size */
#define TRANSFER_BAUDRATE           (1000000U) /*! Transfer baudrate - 1M */
#define MASTER_TRANSFER_TIMEOUT     (5000U)   /*! Transfer timeout of master - 5s */




#endif /* SOURCES_SPI_AL_H_ */
