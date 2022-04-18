#include "main.h"

float c;
char s[10];

int main(void)
{
    // Initialize thing
    thingInit();

    // Infinite loop
    while (1)
    {
        clearDisplay();
        setCursor(0, 0);

        printFloat(c += 0.1, 1, s);
        printf("%s\n", s);

        if (readButton())
            printf("Button pressed!\n");

        flushDisplay();
        HAL_Delay(100);
    }
}