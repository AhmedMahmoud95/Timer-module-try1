/*
 */

//#include <avr/io.h>
#include "std_types.h"
#include "gpio.h"
#include "timers.h"
#include "led.h"
#include "registers.h"
int main(void)
{

    // Insert code
    gpioPortDirection(GPIOB, 0xFF);
    timer1SwPWM(70, 25);
    while(1)
    {

    }

    return 0;
}
