

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
