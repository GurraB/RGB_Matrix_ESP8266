#ifndef rgb_matrix_h
#define rgb_matrix_h
#include <inttypes.h>

// Display width and height
#define WIDTH 64
#define HEIGHT 32

/*
 * The length of the buffer, each pixel takes one bit and using uint32_t buffer
 * results in a buffer size:
 * (number of pixels / pixels per element in array) * height
 * This might not work for other displays
*/
#define BUFFER_LENGTH (WIDTH / 32) * HEIGHT

// The time the pixels are ON in microseconds
#define LED_ON_TIME 70

// The pins used to send the pixel data
#define r_pin 5
#define g_pin 4
//#define b_pin 0

// The pins used to select which row to send data to and show
#define A_pin 14
#define B_pin 12
#define C_pin 13
#define D_pin 15

// The pin used to supply clock signal to the data pins
#define CLK 10
// TODO: explain
#define LAT 0
// The pin that enables the display, i.e pixels on/off
#define OE 2

void init(void);

void update_display();

void set_pixel(uint8_t x, uint8_t y, uint8_t r, uint8_t g, uint8_t b);

void set_pin_function_gpio(uint8_t pin);

#endif
