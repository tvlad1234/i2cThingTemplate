# Reference guide
This template uses the STM32 HAL libraries. HAL functions can be readily used.
The main function is located in App/Src/app.c 

## Compiling the app
This template is built with make, using the ARM GNU Toolchain.

## Bringing up the Thing
The Thing must be initialized by calling `thingInit()` in main. 

## Interacting with the outside world
`readButton()` returns the state of the pushbutton (1 if pressed, 0 otherwise). \
`thingPort()` returns a pointer to the I2C handler corresponding to the Thing's expansion port. 

### Using the display
The functions used to draw to the display are similar to the ones used in [Adafruit-SSD1306](https://github.com/adafruit/Adafruit_SSD1306) and [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library) and are quite self-explanatory. \
`flushDisplay()` updates the display with framebuffer contents in memory.\
`clearDisplay()` clears the framebuffer without flushing it to the display.\
Graphics functions: \
`drawPixel(int16_t x, int16_t y, uint16_t color)`\
`drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color)`\
`drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)`\
`drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)`\
`drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)`\
`drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color)`\
`fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color)`\
`drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size_x, uint8_t size_y)`\
`setCursor(int16_t x, int16_t y)`\
`setTextColor(uint16_t c, uint16_t bg)`\
`setTextSize(uint16_t s)`\
`writeChar(char c)` takes a single character and prints it at the current cursor position\
`printString(char s[])` takes a string and prints it at the current cursor position

### Printing text to the screen
`printf` output is redirected to the screen, at the current cursor position.\
Printing float and double values with `printf` is disabled, as it uses a significant ammount of flash memory.\
The workaround is to use `printFloat(float v, int decimalDigits, char s[])` to write the number into a string, which can then be passed to `printf` or `printString`.

### Using custom drivers and libraries
Additional drivers should be placed in separate folders, in the AppDrivers subdirectory. The names of the folders must then be added to the 15th line of the Makefile. \
Inside each driver folder, there should be two subdirectories: Src, which contains the C source files and Inc, which contains the headers.
