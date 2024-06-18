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

#ifndef _VARIANT_DWM3001CDK_
#define _VARIANT_DWM3001CDK_

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


// Number of pins defined in PinDescription array
#define PINS_COUNT           (14u)
#define NUM_DIGITAL_PINS     (14u)
#define NUM_ANALOG_INPUTS    (0u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED_GREEN         (0)
#define PIN_LED_BLUE          (1)
#define PIN_LED_RED_TOP       (2)
#define PIN_LED_RED_BOT       (3)

static const uint8_t GREEN_LED = PIN_LED_GREEN;
static const uint8_t BLUE_LED = PIN_LED_BLUE;
static const uint8_t RED_LED_BOT = PIN_LED_RED_TOP;
static const uint8_t RED_LED_TOP = PIN_LED_RED_BOT;
static const uint8_t RED_LED = PIN_LED_RED_BOT;

#define LED_BUILTIN   PIN_LED_GREEN


// User buttons
#define PIN_BUTTON      (4)

static const uint8_t USER_BUTTON  = PIN_BUTTON ;


// Serial UART
#define PIN_SERIAL_RX       (5)
#define PIN_SERIAL_TX       (6)



// SPI interface
#define SPI_INTERFACES_COUNT 1

// SPI to DW
#define PIN_SPI_MISO         (10)
#define PIN_SPI_MOSI         (9) 
#define PIN_SPI_SCK          (8) 
#define PIN_SPI_CS           (7)

static const uint8_t SS   = PIN_SPI_CS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

// Other (DW module I/O)
#define PIN_DWM_RESET     (11)
#define PIN_DWM_IRQ       (12)
#define PIN_DWM_WAKEUP    (13)


#ifdef __cplusplus
}
#endif

#endif // _VARIANT_NRF52840DK_
