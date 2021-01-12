/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_DWM1001_
#define _VARIANT_DWM1001_
#define UWB_MODULE_DWM1001

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (13)
#define PIN_SERIAL_TX       (14)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 2

#define PIN_SPI_MISO         (8)
#define PIN_SPI_MOSI         (7)
#define PIN_SPI_SCK          (9)
#define PIN_SPI_SS           (10)

static const uint8_t SS   = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI1_SS          (15)
#define PIN_SPI1_MISO        (16)
#define PIN_SPI1_MOSI        (17)
#define PIN_SPI1_SCK         (18)

static const uint8_t SS1   = PIN_SPI1_SS ;
static const uint8_t MOSI1 = PIN_SPI1_MOSI ;
static const uint8_t MISO1 = PIN_SPI1_MISO ;
static const uint8_t SCK1  = PIN_SPI1_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (11)
#define PIN_WIRE_SCL         (12)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

/*
 * Reset Button at P0.21
 */
#define RESET_PIN            21

/*
 * Other DWM1001 internal IOs
 */
#define PIN_DW_RST           (19)
#define PIN_DW_IRQ           (20)

static const uint8_t DW_RST = PIN_DW_RST;
static const uint8_t DW_IRQ = PIN_DW_IRQ;

#define PIN_ACC_IRQ          (21)

static const uint8_t ACC_IRQ = PIN_ACC_IRQ;

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
