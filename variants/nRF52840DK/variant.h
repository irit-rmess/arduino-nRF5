/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2023 IRIT RMESS All right reserved.
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

#ifndef _VARIANT_NRF52840DK_
#define _VARIANT_NRF52840DK_

/** Master clock frequency */
#ifdef NRF52
#define VARIANT_MCK       (64000000ul)
#else
#define VARIANT_MCK       (16000000ul)
#endif

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus


// Number of pins defined in PinDescription array
#define PINS_COUNT           (49u)
#define NUM_DIGITAL_PINS     (49u)
#define NUM_ANALOG_INPUTS    (6u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED_1       (29)
#define PIN_LED_2       (30)
#define PIN_LED_3       (31)
#define PIN_LED_4       (32)

static const uint8_t LED_1 = PIN_LED_1;
static const uint8_t LED_2 = PIN_LED_2;
static const uint8_t LED_3 = PIN_LED_3;
static const uint8_t LED_4 = PIN_LED_4;
#define LED_BUILTIN   PIN_LED_1


 // Analog pins
#define PIN_ANALOG_0               (17)
#define PIN_ANALOG_1               (18)
#define PIN_ANALOG_2               (19)
#define PIN_ANALOG_3               (20)
#define PIN_ANALOG_4               (21)
#define PIN_ANALOG_5               (22)

static const uint8_t A0  = PIN_ANALOG_0 ;
static const uint8_t A1  = PIN_ANALOG_1 ;
static const uint8_t A2  = PIN_ANALOG_2 ;
static const uint8_t A3  = PIN_ANALOG_3 ;
static const uint8_t A4  = PIN_ANALOG_4 ;
static const uint8_t A5  = PIN_ANALOG_5 ;

#ifdef NRF52
#define ADC_RESOLUTION    14
#else
#define ADC_RESOLUTION    10
#endif


// Digital pins
#define PIN_DIGITAL_0               (0)
#define PIN_DIGITAL_1               (1)
#define PIN_DIGITAL_2               (2)
#define PIN_DIGITAL_3               (3)
#define PIN_DIGITAL_4               (4)
#define PIN_DIGITAL_5               (5)
#define PIN_DIGITAL_6               (6)
#define PIN_DIGITAL_7               (7)
#define PIN_DIGITAL_8               (8)
#define PIN_DIGITAL_9               (9)
#define PIN_DIGITAL_10              (10)
#define PIN_DIGITAL_11              (11)
#define PIN_DIGITAL_12              (12)
#define PIN_DIGITAL_13              (13)

static const uint8_t D0  = PIN_DIGITAL_0 ;
static const uint8_t D1  = PIN_DIGITAL_1 ;
static const uint8_t D2  = PIN_DIGITAL_2 ;
static const uint8_t D3  = PIN_DIGITAL_3 ;
static const uint8_t D4  = PIN_DIGITAL_4 ;
static const uint8_t D5  = PIN_DIGITAL_5 ;
static const uint8_t D6  = PIN_DIGITAL_6 ;
static const uint8_t D7  = PIN_DIGITAL_7 ;
static const uint8_t D8  = PIN_DIGITAL_8 ;
static const uint8_t D9  = PIN_DIGITAL_9 ;
static const uint8_t D10  = PIN_DIGITAL_10 ;
static const uint8_t D11  = PIN_DIGITAL_11 ;
static const uint8_t D12  = PIN_DIGITAL_12 ;
static const uint8_t D13  = PIN_DIGITAL_13 ;

// User buttons
#define PIN_BUTTON_1      (39)
#define PIN_BUTTON_2      (40)
#define PIN_BUTTON_3      (41)
#define PIN_BUTTON_4      (42)

static const uint8_t BUTTON_1  = PIN_BUTTON_1 ;
static const uint8_t BUTTON_2  = PIN_BUTTON_2 ;
static const uint8_t BUTTON_3  = PIN_BUTTON_3 ;
static const uint8_t BUTTON_4  = PIN_BUTTON_4 ;


// Serial UART
#define PIN_SERIAL_RX       (25)
#define PIN_SERIAL_TX       (27)
#define PIN_SERIAL_CTS      (26)
#define PIN_SERIAL_RTS      (28)


// SPI interface
#define SPI_INTERFACES_COUNT 1

// Fist standard SPI (Arduino compatible)
#define PIN_SPI_MISO         (12) // P1.14
#define PIN_SPI_MOSI         (11) // P1.13
#define PIN_SPI_SCK          (13) // P1.15
#define PIN_SPI_CS           (10) // P1.12

static const uint8_t SS   = PIN_SPI_CS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

// Second SPI interface for external memory (Quad SPI)
#define PIN_QSPI_SCK            (34) // P0.19
#define PIN_QSPI_CS             (33) // P0.17
#define PIN_QSPI_DIO0           (35) // P0.20
#define PIN_QSPI_DIO1           (36) // P0.21
#define PIN_QSPI_DIO2           (37) // P0.22
#define PIN_QSPI_DIO3           (38) // P0.23

static const uint8_t QSS   = PIN_QSPI_CS ;
static const uint8_t QSCK  = PIN_QSPI_SCK ;
static const uint8_t QDI0 = PIN_QSPI_DIO0 ;
static const uint8_t QDI1 = PIN_QSPI_DIO1 ;
static const uint8_t QDI2 = PIN_QSPI_DIO2 ;
static const uint8_t QDI3 = PIN_QSPI_DIO3 ;

// Wires interface
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (14) // P0.20
#define PIN_WIRE_SCL         (15) // P0.21

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

// NFC intefaces
#define PIN_NFC_1         (23)
#define PIN_NFC_2         (24)

static const uint8_t NFC1 = PIN_NFC_1;
static const uint8_t NFC2 = PIN_NFC_2;


#ifdef __cplusplus
}
#endif

#endif // _VARIANT_NRF52840DK_
