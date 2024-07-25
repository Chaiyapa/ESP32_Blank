#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void SET_LED_OUTPUT()
{
    gpio_set_direction(5, GPIO_MODE_OUTPUT);
}
void LED_ON()
{
    gpio_set_level(5,1);
}
void LDE_OFF()
{
    gpio_set_level(5,0);
}