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

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D8
  12, // Arduino pin #0  LED_GREEN
  27, // Arduino pin #1 
  23, // Arduino pin #2 
  13, // Arduino pin #3  LED_BLUE
  15, // Arduino pin #4  (LoRa shield IRQ)
  8,  // Arduino pin #5  LED_RED
  26, // Arduino pin #6  
  6,  // Arduino pin #7  EXTERNAL SPI MOSI
  7,  // Arduino pin #8  EXTERNAL SPI MISO
  4,  // Arduino pin #9  EXTERNAL SPI SCK, A0, AIN2, 
  3,  // Arduino pin #10 EXTERNAL SPI SS, A1, AIN1, 
  29, // Arduino pin #11 I2C SDA
  28, // Arduino pin #12 I2C SCL
  11, // Arduino pin #13 Serial RX
  5,  // Arduino pin #14 Serial TX
  17, // Arduino pin #15 DWM1000 SPI SS1 
  18, // Arduino pin #16 DWM1000 SPI MISO1
  20, // Arduino pin #17 DWM1000 SPI MOSI1
  16, // Arduino pin #18 DWM1000 SPI SCK1 
  24, // Arduino pin #19 DWM1000 RESET
  19, // Arduino pin #20 DWM1000 IRQ
  25, // Arduino pin #21 ACCEL IRQ
  9,  // Arduino pin #22
  10, // Arduino pin #23
  2   // Arduino pin #24
};
