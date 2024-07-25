#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
void SET_LED_OUTPUT();
void LED_ON();
void LDE_OFF();

void app_main(void)
{
   SET_LED_OUTPUT();
    while (1)
   {
    LED_ON();
    vTaskDelay(500 / portTICK_PERIOD_MS);
    LDE_OFF();
    vTaskDelay(500 / portTICK_PERIOD_MS);
   }
}
