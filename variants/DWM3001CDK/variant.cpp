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

#include "variant.h"

#define   NRF_GPIO_PIN_MAP(port, pin)   ((port << 5) | (pin & 0x1F))

const uint32_t g_ADigitalPinMap[] = {
  // D9 - D12 (LEDS)
  NRF_GPIO_PIN_MAP(0,4),      // D9
  NRF_GPIO_PIN_MAP(0,5),      // D10 
  NRF_GPIO_PIN_MAP(0,22),     // D11
  NRF_GPIO_PIN_MAP(0,14),     // D12

  // User button
  NRF_GPIO_PIN_MAP(0,2),      // Button 2

  // RX TX
  NRF_GPIO_PIN_MAP(0,15),     // RX
  NRF_GPIO_PIN_MAP(0,19),     // TX

  // SPI
  NRF_GPIO_PIN_MAP(1,6),      // CS
  NRF_GPIO_PIN_MAP(0,3),      // CLK
  NRF_GPIO_PIN_MAP(0,8),      // MOSI
  NRF_GPIO_PIN_MAP(0,29),     // MISO

  // Others
  NRF_GPIO_PIN_MAP(0,25),     // DW RESET
  NRF_GPIO_PIN_MAP(1,2),      // DW IRQ
  NRF_GPIO_PIN_MAP(1,19),     // DW WAKEUP

};
