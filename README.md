# i2cThingTemplate
The I2C Thing is a small STM32G031J6-powered board, with an OLED display, a pushbutton and an I2C expansion port. \
The OLED and expansion header are connected to I2C2. The pushbutton is attached to PC14. \
This is a template app for the Thing. The main function is located in App/app.c \
Additional drivers can be placed in the AppDrivers subdirectory and added to the 15th line of the Makefile. \
This template uses the STM32 HAL libraries.
![20220414_190245](https://user-images.githubusercontent.com/60291077/163429449-5acaaee6-8d0c-4e67-8ee5-4377ddfb948f.jpg)
