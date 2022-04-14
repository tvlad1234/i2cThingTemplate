#include "main.h"

int main(void)
{
    //Initialize thing
    thingInit();

    //Infinite loop
    while (1)
    {
        clearDisplay();
        setCursor(0,0);
        if(readButton())
            printf("Button pressed!\n");
        flushDisplay();
        HAL_Delay(100);
    }
}