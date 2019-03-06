/* mbed Microcontroller Library
 * Copyright (c) 2006-2019 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT,
    PIN_INPUT_OUTPUT	//pin state can be set and read back
} PinDirection;

typedef enum {
    PA00  = 0,
    PA01  = 1,
    PA02  = 2,
    PA03  = 3,
    PA04  = 4,
    PA05  = 5,
    PA06  = 6,
    PA07  = 7,
    PA08  = 8,
    PA09  = 9,
    PA10  = 10,
    PA11  = 11,
    PA12  = 12,
    PA13  = 13,
    PA14  = 14,
    PA15  = 15,
    PA16  = 16,
    PA17  = 17,
    PA18  = 18,
    PA19  = 19,
    PA20  = 20,
    PA21  = 21,
    PA22  = 22,
    PA23  = 23,
    PA24  = 24,
    PA25  = 25,
    PA26  = 26,
    PA27  = 27,
    PA28  = 28,
    PA30  = 30,
    PA31  = 31,
    PB00  = 32,
    PB01  = 33,
    PB02  = 34,
    PB03  = 35,
    PB04  = 36,
    PB05  = 37,
    PB06  = 38,
    PB07  = 39,
    PB08  = 40,
    PB09  = 41,
    PB10  = 42,
    PB11  = 43,
    PB12  = 44,
    PB13  = 45,
    PB14  = 46,
    PB15  = 47,
    PB16  = 48,
    PB17  = 49,
    PB22  = 54,
    PB23  = 55,
    PB30  = 62,
    PB31  = 63,
    PC18  = 82,
    PC19  = 83,

    USBTX = PA04,
    USBRX = PA05,

    LED1 = PA19,
    LED2 = PA18,
    LED3 = PA19,
    LED4 = PA19,

    BUTTON1 = PA28,

    // LoRa
    LORA_RESET  = PB15,
    LORA_DIO0   = PB16,
    LORA_DIO1   = PA11,
    LORA_DIO2   = PA12,
    LORA_DIO3   = PB17,
    LORA_DIO4   = PA10,
    LORA_DIO5   = PB00,
    LORA_TCXO   = PA09,

    LORA_NSS    = PB31,
    LORA_SCK    = PC18,
    LORA_MISO   = PC19,
    LORA_MOSI   = PB30,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

typedef enum {
    PullNone = 0,
    PullUp = 1,
    PullDown = 2,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
