#ifndef _SSD1306_H
#define _SSD1306_H

#include "main.h"

// Uncomment this to enable DMA
//#define OLED_DMA

// Commands
#define BLACK SSD1306_BLACK		///< Draw 'off' pixels
#define WHITE SSD1306_WHITE		///< Draw 'on' pixels
#define INVERSE SSD1306_INVERSE ///< Invert pixels

/// fit into the SSD1306_ naming scheme
#define SSD1306_BLACK 0	  ///< Draw 'off' pixels
#define SSD1306_WHITE 1	  ///< Draw 'on' pixels
#define SSD1306_INVERSE 2 ///< Invert pixels

#define SSD1306_EXTERNALVCC 0x01  ///< External display voltage source
#define SSD1306_SWITCHCAPVCC 0x02 ///< Gen. display voltage from 3.3V

// Init function
void ssd1306Begin(uint8_t vccstate, I2C_HandleTypeDef *i2cdev, uint16_t w, uint16_t h);

// Command functions
void invertDisplay(uint8_t i);

// Graphics Functions
void flushDisplay(void);
void clearDisplay(void);

void drawPixel(int16_t x, int16_t y, uint16_t color);
void drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
				int16_t h, uint16_t color);
void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);

uint8_t getWidth(void);
uint8_t getHight(void);
uint8_t getRotation(void);

#endif /* _SSD1306_H */
