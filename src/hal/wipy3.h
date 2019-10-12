// clang-format off
// upload_speed 921600
// board lopy4

#ifndef _WIPY3_H
#define _WIPY3_H

#include <stdint.h>

#define HAS_LED NOT_A_PIN
#define HAS_RGB_LED SmartLed rgb_led(LED_WS2812, 1, GPIO_NUM_0) // WS2812B RGB LED on GPIO0 (P2)

#define HAS_ANTENNA_SWITCH GPIO_NUM_21 // pin for switching wifi antenna
#define WIFI_ANTENNA 1                 // 0 = internal, 1 = external

#define HAS_SPI 1
#define SPI_CS   GPIO_NUM_15
#define SPI_MISO GPIO_NUM_12
#define SPI_MOSI GPIO_NUM_13
#define SPI_SCLK GPIO_NUM_22

#endif
