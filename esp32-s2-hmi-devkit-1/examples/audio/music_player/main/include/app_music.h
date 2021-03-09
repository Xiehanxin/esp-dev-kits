/**
 * @file app_music.h
 * @brief Music app header.
 * @version 0.1
 * @date 2021-03-07
 * 
 * @copyright Copyright 2021 Espressif Systems (Shanghai) Co. Ltd.
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *               http://www.apache.org/licenses/LICENSE-2.0
 * 
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */

#pragma once

#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"

#include "lvgl/lvgl.h"
#include "lvgl_port.h"
#include "audio_hal.h"
#include "fs_hal.h"
#include "bsp_sdcard.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Start music player app
 * 
 * @return esp_err_t 
 */
esp_err_t app_music_start(void);

#ifdef __cplusplus
}
#endif
