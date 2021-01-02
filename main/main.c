/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "npiso.h"

extern DRAM_ATTR uint8_t output[4];
extern void start_app_cpu(void);

void app_main()
{
    printf("Bare metal CORE1 interrupt test\n");

    npiso_init();
    start_app_cpu();
    for (;;) {
        output[1]++;
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
