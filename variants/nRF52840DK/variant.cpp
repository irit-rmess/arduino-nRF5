

#include "variant.h"

#define   NRF_GPIO_PIN_MAP(port, pin)   ((port << 5) | (pin & 0x1F))

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7 (P3)
  NRF_GPIO_PIN_MAP(1,1),   // D0
  NRF_GPIO_PIN_MAP(1,2),   // D1 
  NRF_GPIO_PIN_MAP(1,3),   // D2 
  NRF_GPIO_PIN_MAP(1,4),   // D3
  NRF_GPIO_PIN_MAP(1,5),   // D4
  NRF_GPIO_PIN_MAP(1,6),   // D5
  NRF_GPIO_PIN_MAP(1,7),   // D6
  NRF_GPIO_PIN_MAP(1,8),   // D7
 
  // D8 - D13 (P4)
  NRF_GPIO_PIN_MAP(1,10),   // D8
  NRF_GPIO_PIN_MAP(1,11),   // D9
  NRF_GPIO_PIN_MAP(1,12),   // D10
  NRF_GPIO_PIN_MAP(1,13),   // D11
  NRF_GPIO_PIN_MAP(1,14),   // D12
  NRF_GPIO_PIN_MAP(1,15),   // D13

  // SDA - SCL (P4)
  NRF_GPIO_PIN_MAP(0,26),   // SDA
  NRF_GPIO_PIN_MAP(0,27),   // SCL

  // AREF (P4)
  NRF_GPIO_PIN_MAP(0,2),   // AREF

  // A0 - A5  (P2)
  NRF_GPIO_PIN_MAP(0,3),    // A0
  NRF_GPIO_PIN_MAP(0,4),    // A1
  NRF_GPIO_PIN_MAP(0,28),   // A2
  NRF_GPIO_PIN_MAP(0,29),   // A3
  NRF_GPIO_PIN_MAP(0,30),   // A4
  NRF_GPIO_PIN_MAP(0,31),   // A5

  // NFC Ports  (P6)
  NRF_GPIO_PIN_MAP(0,9),   // NFC1
  NRF_GPIO_PIN_MAP(0,10),  // NFC2

  // UART Ports (P6)
  NRF_GPIO_PIN_MAP(0,8),   // RXD
  NRF_GPIO_PIN_MAP(0,7),   // CTS
  NRF_GPIO_PIN_MAP(0,6),   // TXD
  NRF_GPIO_PIN_MAP(0,5),   // RTS

  // 37.768kHz crystal oscillator (NOT AVAILABLE ON CONNECTORS just FYI) (P6)
  //NRF_GPIO_PIN_MAP(0,0),
  //NRF_GPIO_PIN_MAP(0,1),

  // LEDS port (P24)
  NRF_GPIO_PIN_MAP(0,13),  // LED1
  NRF_GPIO_PIN_MAP(0,14),  // LED2
  NRF_GPIO_PIN_MAP(0,15),  // LED3
  NRF_GPIO_PIN_MAP(0,16),  // LED4

  // External memory (P24)
  NRF_GPIO_PIN_MAP(0,17),  // QSPI_CS
  NRF_GPIO_PIN_MAP(0,19),  // QSPI_CLK
  NRF_GPIO_PIN_MAP(0,20),  // QSPI_DIO0
  NRF_GPIO_PIN_MAP(0,21),  // QSPI_DIO1
  NRF_GPIO_PIN_MAP(0,22),  // QSPI_DIO2
  NRF_GPIO_PIN_MAP(0,23),  // QSPI_DIO3

  // Buttons (P24)
  NRF_GPIO_PIN_MAP(0,11),  // Button 1 | TRACE DATA 2
  NRF_GPIO_PIN_MAP(0,12),  // Button 2 | TRACE DATA 1
  NRF_GPIO_PIN_MAP(0,24),  // Button 3
  NRF_GPIO_PIN_MAP(0,25),  // Button 4

  // Misc Pins (P24)
  NRF_GPIO_PIN_MAP(0,18),  // RESET
  NRF_GPIO_PIN_MAP(1,0),   // TRACE DATA 0
  NRF_GPIO_PIN_MAP(1,9),   // TRACE DATA 3

  // Misc Pins (P5)
  NRF_GPIO_PIN_MAP(1,14),   // PIN 1
  NRF_GPIO_PIN_MAP(1,15),   // PIN 3
  NRF_GPIO_PIN_MAP(1,13)   // PIN 4 


// 49 usable pins
};
