/** 
* Lab 1 - GPIO Blinky
* - Drive an LED by GPIO
* - Developer - 
* - Date - 
* 
*/
#include "gpio.h"

// Write a function that will delay for n loops
// to satisfy timing constraints given in lab. 
// ....beware compiler optimization....
void delay(uint32_t volatile count)
{
	while  (count>0)
    {
        count--;
    }
}

int main()
{
	gpio[GPFSEL1] = 0x40000;
        
    while (1)
    {       
        gpio[GPSET0] = 0x10000;
        delay(3000000);
        gpio[GPCLR0] = 0x10000;
        delay(3000000);

    }
    
    return 0;
}
