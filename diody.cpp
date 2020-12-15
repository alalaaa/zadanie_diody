#include "mbed.h"

BusOut myleds(LED1, LED2, LED3, LED4, p5, p6 ,p7, p8);

int main() {
    myleds = 1;
    wait(0.25);
    int diody;
    while(1) 
{

            diody = myleds;
            diody <<= 1; 
            myleds = diody;

            wait(0.1);
            if (myleds == 0b10000000)
{
            while(myleds != 0b00000001)
{
			wait(0.1);
            diody = myleds;
            diody >>= 1;
            myleds = diody;
            wait(0.1);
}
}
}
}
