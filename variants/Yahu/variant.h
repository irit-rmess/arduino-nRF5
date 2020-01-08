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

#ifndef _VARIANT_YAHU_
#define _VARIANT_YAHU_
#include "../DWM1001/variant.h"

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
#define PINS_COUNT           (27u)
#define NUM_DIGITAL_PINS     (11u)
#define NUM_ANALOG_INPUTS    (2u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LEDR            (5)
#define PIN_LEDG            (0)
#define PIN_LEDB            (3)
#define LED_BUILTIN         PIN_LEDB
static const uint8_t LED_RED     = PIN_LEDR ;
static const uint8_t LED_GREEN   = PIN_LEDG ;
static const uint8_t LED_BLUE    = PIN_LEDB ;

/*
 * Analog pins
 */
#define PIN_A0               (9)
#define PIN_A1               (10)

static const uint8_t A0  = PIN_A0 ; // AIN2
static const uint8_t A1  = PIN_A1 ; // AIN1
#define ADC_RESOLUTION    14

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
