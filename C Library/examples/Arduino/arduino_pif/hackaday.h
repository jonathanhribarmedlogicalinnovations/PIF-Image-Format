#ifndef PIF_H_hackaday
#define PIF_H_hackaday

#include <inttypes.h>

// https://github.com/gfcwfzkm/PIF-Image-Format

#ifdef AVR
	#include <avr/pgmspace.h>
	// #define _P_MEMX __memx // avr-g++ lacking __flash / __memx -.- https://www.avrfreaks.net/comment/1338776#comment-1338776
#else
	#define _P_MEMX
#endif

const uint8_t hackaday[1580] PROGMEM = {
	0x50, 0x49, 0x46, 0x00, 0x2C, 0x06, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0xAA, 0x7D, 0x01, 0x00, 
	0x80, 0x00, 0x80, 0x00, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0xDE, 0x7D, 0x02, 0xFF, 0xFE, 0x07, 
	0xFC, 0x08, 0xFF, 0xFE, 0x3F, 0xE0, 0x04, 0xFF, 0xFE, 0x0F, 0xE0, 0x08, 0xFF, 0xFE, 0x07, 0xF0, 
	0x04, 0xFF, 0xFE, 0x1F, 0x80, 0x08, 0xFF, 0xFE, 0x01, 0xF8, 0x04, 0xFF, 0xFE, 0x3F, 0x00, 0x08, 
	0xFF, 0xFE, 0x00, 0xFC, 0x04, 0xFF, 0xFD, 0x7F, 0x00, 0xFE, 0x06, 0xFF, 0xFD, 0x7F, 0x00, 0xFE, 
	0x05, 0xFF, 0xFE, 0x00, 0xFC, 0x06, 0xFF, 0xFD, 0x3F, 0x00, 0xFE, 0x05, 0xFF, 0xFE, 0x01, 0xF8, 
	0x06, 0xFF, 0xFE, 0x1F, 0x00, 0x06, 0xFF, 0xFE, 0x01, 0xF0, 0x06, 0xFF, 0xFE, 0x0F, 0x80, 0x06, 
	0xFF, 0xFE, 0x03, 0xF0, 0x06, 0xFF, 0xFE, 0x0F, 0xC0, 0x06, 0xFF, 0xFE, 0x07, 0xE0, 0x06, 0xFF, 
	0xFE, 0x07, 0xE0, 0x06, 0xFF, 0xFE, 0x0F, 0xE0, 0x06, 0xFF, 0xFE, 0x07, 0xF0, 0x06, 0xFF, 0xFE, 
	0x0F, 0xC0, 0x06, 0xFF, 0xFE, 0x03, 0xE0, 0x03, 0xFF, 0xFF, 0xBF, 0x02, 0xFF, 0xFE, 0x07, 0xC0, 
	0x06, 0xFF, 0xFE, 0x03, 0xC0, 0x03, 0xFF, 0xFF, 0x3F, 0x02, 0xFF, 0xFE, 0x01, 0xC0, 0x06, 0xFF, 
	0xFE, 0x03, 0x80, 0x02, 0xFF, 0xFA, 0xFC, 0x3F, 0xFE, 0xFF, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 
	0x00, 0xFF, 0x7F, 0xFC, 0x3F, 0xFC, 0x7F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xFE, 0x7F, 
	0xFC, 0x3F, 0xF8, 0x3F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xFC, 0x3F, 0xFC, 0x3F, 0xF0, 
	0x1F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xF8, 0x1F, 0xFC, 0x3F, 0xF0, 0x0F, 0x00, 0xC0, 
	0x06, 0xFF, 0xF6, 0x03, 0x00, 0xE0, 0x0F, 0xFC, 0x3F, 0xE0, 0x07, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 
	0x03, 0x00, 0xC0, 0x07, 0xFC, 0x3F, 0xC0, 0x03, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0x80, 
	0x03, 0xFC, 0x7F, 0x80, 0x01, 0x00, 0xC0, 0x06, 0xFF, 0xFF, 0x03, 0x02, 0x00, 0xFD, 0x01, 0xFE, 
	0x7F, 0x03, 0x00, 0xFF, 0x80, 0x06, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFE, 0xFE, 0x7F, 0x04, 0x00, 
	0x06, 0xFF, 0x04, 0x00, 0xFE, 0xFE, 0xFF, 0x04, 0x00, 0xFF, 0xFE, 0x05, 0xFF, 0x04, 0x00, 0x02, 
	0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFF, 0xFC, 0x04, 0xFF, 0xFF, 0x7F, 0x03, 0x00, 0xFF, 0x80, 0x02, 
	0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFF, 0xFC, 0x04, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0xFF, 0x80, 0x02, 
	0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFF, 0xF8, 0x04, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0xFF, 0xC0, 0x02, 
	0xFF, 0xFF, 0x07, 0x03, 0x00, 0xFF, 0xF0, 0x04, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0xFF, 0xE0, 0x02, 
	0xFF, 0xFF, 0x0F, 0x03, 0x00, 0xFF, 0xE0, 0x04, 0xFF, 0xFF, 0x07, 0x03, 0x00, 0xFF, 0xF0, 0x02, 
	0xFF, 0xFF, 0x3F, 0x03, 0x00, 0xFF, 0xC0, 0x04, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFF, 0xFC, 0x03, 
	0xFF, 0x03, 0x00, 0xFF, 0x80, 0x04, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0x04, 0xFF, 0xFE, 0x0F, 0x01, 
	0x02, 0x00, 0x04, 0xFF, 0x03, 0x00, 0xFF, 0xF0, 0x05, 0xFF, 0xFF, 0x03, 0x02, 0x00, 0x04, 0xFF, 
	0x02, 0x00, 0xFF, 0x80, 0x06, 0xFF, 0xF9, 0x07, 0x00, 0xC0, 0x3F, 0x00, 0x80, 0x7F, 0x02, 0x00, 
	0xFF, 0xC0, 0x06, 0xFF, 0xFC, 0x07, 0x00, 0xF0, 0x03, 0x02, 0x00, 0xFC, 0xFC, 0x01, 0x00, 0xE0, 
	0x06, 0xFF, 0xFD, 0x0F, 0x00, 0xFC, 0x03, 0x00, 0xFC, 0xE0, 0x07, 0x00, 0xF0, 0x06, 0xFF, 0xFD, 
	0x1F, 0x00, 0x3F, 0x03, 0x00, 0xFC, 0x80, 0x0F, 0x00, 0xF8, 0x06, 0xFF, 0xFD, 0x3F, 0x80, 0x0F, 
	0x04, 0x00, 0xFD, 0x3E, 0x00, 0xFC, 0x06, 0xFF, 0xFD, 0x7F, 0xC0, 0x03, 0x04, 0x00, 0xFD, 0x7C, 
	0x00, 0xFE, 0x07, 0xFF, 0xFE, 0xE0, 0x01, 0x04, 0x00, 0xFE, 0xF0, 0x00, 0x08, 0xFF, 0xFF, 0xF1, 
	0x05, 0x00, 0xFE, 0xE0, 0x01, 0x08, 0xFF, 0xFF, 0x3B, 0x02, 0x00, 0xFB, 0xFE, 0x01, 0x00, 0xC0, 
	0x83, 0x08, 0xFF, 0xFF, 0x1F, 0x02, 0x00, 0xFB, 0xFF, 0x07, 0x00, 0x80, 0xC7, 0x08, 0xFF, 0xFB, 
	0x0F, 0x00, 0xC0, 0xFF, 0x0F, 0x02, 0x00, 0xFF, 0xEF, 0x08, 0xFF, 0xFB, 0x07, 0x00, 0xC0, 0xFF, 
	0x1F, 0x02, 0x00, 0xFF, 0xFE, 0x07, 0xFF, 0xFF, 0x1F, 0x02, 0x00, 0xFD, 0xE0, 0xFF, 0x3F, 0x02, 
	0x00, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0x07, 0x02, 0x00, 0xFD, 0xE0, 0xFF, 0x3F, 0x02, 0x00, 0xFF, 
	0xF8, 0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xFF, 0x3F, 0x02, 0x00, 0xFF, 0xF8, 0x07, 0xFF, 
	0xFF, 0x03, 0x03, 0x00, 0xFE, 0xFE, 0x7F, 0x02, 0x00, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0x03, 0x03, 
	0x00, 0xFE, 0xFC, 0x7F, 0x02, 0x00, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFE, 0xFC, 
	0x7F, 0x02, 0x00, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xF8, 0x7F, 0x02, 0x00, 
	0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xF8, 0x3F, 0x02, 0x00, 0xFF, 0xC0, 0x07, 
	0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xF0, 0x3F, 0x02, 0x00, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x07, 
	0x03, 0x00, 0xFE, 0xF0, 0x3F, 0x02, 0x00, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0xFE, 
	0xE0, 0x1F, 0x02, 0x00, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x7F, 0x03, 0x00, 0xFE, 0xC0, 0x0F, 0x02, 
	0x00, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0xFE, 0x80, 0x03, 0x02, 0x00, 0xFF, 0x80, 
	0x07, 0xFF, 0xFF, 0x0F, 0x08, 0x00, 0x07, 0xFF, 0xFF, 0x07, 0x08, 0x00, 0x07, 0xFF, 0xFD, 0x03, 
	0x00, 0xF8, 0x06, 0x00, 0x07, 0xFF, 0xFC, 0x03, 0x00, 0xE0, 0x07, 0x05, 0x00, 0x07, 0xFF, 0xFC, 
	0x03, 0x00, 0xC0, 0x1F, 0x05, 0x00, 0x07, 0xFF, 0xFC, 0x03, 0x00, 0xC0, 0x1F, 0x05, 0x00, 0x07, 
	0xFF, 0xFC, 0x03, 0x00, 0xF0, 0x0F, 0x05, 0x00, 0x07, 0xFF, 0xFC, 0x03, 0x00, 0xF8, 0x01, 0x05, 
	0x00, 0x07, 0xFF, 0xFF, 0x07, 0x08, 0x00, 0x07, 0xFF, 0xFF, 0x0F, 0x08, 0x00, 0x07, 0xFF, 0xFF, 
	0x3F, 0x03, 0x00, 0xFE, 0x80, 0x03, 0x02, 0x00, 0xFF, 0x80, 0x08, 0xFF, 0x03, 0x00, 0xFE, 0xC0, 
	0x0F, 0x02, 0x00, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0xFE, 0xE0, 0x1F, 0x02, 0x00, 
	0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x07, 0x03, 0x00, 0xFE, 0xF0, 0x3F, 0x02, 0x00, 0xFF, 0x80, 0x07, 
	0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xF0, 0x3F, 0x02, 0x00, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x03, 
	0x03, 0x00, 0xFE, 0xF8, 0x3F, 0x02, 0x00, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 
	0xF8, 0x7F, 0x02, 0x00, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFE, 0xFC, 0x7F, 0x02, 
	0x00, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xFC, 0x7F, 0x02, 0x00, 0xFF, 0xE0, 
	0x07, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFE, 0xFE, 0x7F, 0x02, 0x00, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 
	0x03, 0x03, 0x00, 0xFE, 0xFF, 0x3F, 0x02, 0x00, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0x07, 0x02, 0x00, 
	0xFD, 0xE0, 0xFF, 0x3F, 0x02, 0x00, 0xFF, 0xF8, 0x07, 0xFF, 0xFA, 0x1F, 0x04, 0x00, 0xE0, 0xFF, 
	0x3F, 0x02, 0x00, 0xFF, 0xFC, 0x08, 0xFF, 0xFB, 0x07, 0x00, 0xC0, 0xFF, 0x1F, 0x02, 0x00, 0xFF, 
	0xFE, 0x08, 0xFF, 0xFB, 0x0F, 0x00, 0xC0, 0xFF, 0x0F, 0x02, 0x00, 0xFF, 0xEF, 0x08, 0xFF, 0xFF, 
	0x1F, 0x02, 0x00, 0xFB, 0xFF, 0x07, 0x00, 0x80, 0xC7, 0x08, 0xFF, 0xFF, 0x3B, 0x02, 0x00, 0xFB, 
	0xFE, 0x01, 0x00, 0xC0, 0x83, 0x08, 0xFF, 0xFF, 0x71, 0x05, 0x00, 0xFE, 0xE0, 0x01, 0x08, 0xFF, 
	0xFE, 0xE0, 0x01, 0x04, 0x00, 0xFE, 0xF0, 0x00, 0x07, 0xFF, 0xFD, 0x7F, 0xC0, 0x03, 0x04, 0x00, 
	0xFD, 0x7C, 0x00, 0xFE, 0x06, 0xFF, 0xFD, 0x3F, 0x80, 0x0F, 0x04, 0x00, 0xFD, 0x3E, 0x00, 0xFC, 
	0x06, 0xFF, 0xFD, 0x1F, 0x00, 0x3F, 0x03, 0x00, 0xFC, 0x80, 0x0F, 0x00, 0xF8, 0x06, 0xFF, 0xFD, 
	0x0F, 0x00, 0xFC, 0x03, 0x00, 0xFC, 0xE0, 0x07, 0x00, 0xF0, 0x06, 0xFF, 0xFC, 0x07, 0x00, 0xF0, 
	0x03, 0x02, 0x00, 0xFC, 0xFC, 0x01, 0x00, 0xE0, 0x06, 0xFF, 0xF9, 0x07, 0x00, 0xC0, 0x3F, 0x00, 
	0x80, 0x7F, 0x02, 0x00, 0xFF, 0xC0, 0x06, 0xFF, 0xFF, 0x03, 0x02, 0x00, 0x04, 0xFF, 0x02, 0x00, 
	0xFF, 0x80, 0x05, 0xFF, 0xFE, 0x0F, 0x01, 0x02, 0x00, 0x04, 0xFF, 0x03, 0x00, 0xFF, 0xF0, 0x04, 
	0xFF, 0x03, 0x00, 0xFF, 0x80, 0x04, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0x03, 0xFF, 0xFF, 0x3F, 0x03, 
	0x00, 0xFF, 0xC0, 0x04, 0xFF, 0xFF, 0x03, 0x03, 0x00, 0xFF, 0xFC, 0x02, 0xFF, 0xFF, 0x0F, 0x03, 
	0x00, 0xFF, 0xE0, 0x04, 0xFF, 0xFF, 0x07, 0x03, 0x00, 0xFF, 0xF0, 0x02, 0xFF, 0xFF, 0x07, 0x03, 
	0x00, 0xFF, 0xF0, 0x04, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0xFF, 0xE0, 0x02, 0xFF, 0xFF, 0x03, 0x03, 
	0x00, 0xFF, 0xF8, 0x04, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0xFF, 0xC0, 0x02, 0xFF, 0xFF, 0x01, 0x03, 
	0x00, 0xFF, 0xFC, 0x04, 0xFF, 0xFF, 0x3F, 0x03, 0x00, 0xFF, 0x80, 0x02, 0xFF, 0xFF, 0x01, 0x03, 
	0x00, 0xFF, 0xFC, 0x04, 0xFF, 0xFF, 0x7F, 0x03, 0x00, 0xFF, 0x80, 0x02, 0xFF, 0x04, 0x00, 0xFF, 
	0xFE, 0x05, 0xFF, 0x04, 0x00, 0xFE, 0xFF, 0x7F, 0x04, 0x00, 0x06, 0xFF, 0x04, 0x00, 0xFE, 0xFE, 
	0x7F, 0x03, 0x00, 0xFF, 0x80, 0x06, 0xFF, 0xFF, 0x01, 0x03, 0x00, 0xFA, 0xFE, 0x7F, 0x80, 0x01, 
	0x00, 0xC0, 0x06, 0xFF, 0xFF, 0x03, 0x02, 0x00, 0xF9, 0x01, 0xFE, 0x3F, 0xC0, 0x03, 0x00, 0xC0, 
	0x06, 0xFF, 0xF6, 0x03, 0x00, 0x80, 0x03, 0xFC, 0x3F, 0xE0, 0x07, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 
	0x03, 0x00, 0xC0, 0x07, 0xFC, 0x3F, 0xF0, 0x0F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xE0, 
	0x0F, 0xFC, 0x3F, 0xF0, 0x1F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xF8, 0x1F, 0xFC, 0x3F, 
	0xF8, 0x3F, 0x00, 0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x7F, 0x00, 
	0xC0, 0x06, 0xFF, 0xF6, 0x03, 0x00, 0xFE, 0x7F, 0xFC, 0x3F, 0xFE, 0xFF, 0x00, 0xC0, 0x06, 0xFF, 
	0xFA, 0x03, 0x00, 0xFF, 0x7F, 0xFC, 0x3F, 0x02, 0xFF, 0xFE, 0x01, 0xC0, 0x06, 0xFF, 0xFE, 0x03, 
	0x80, 0x02, 0xFF, 0xFE, 0xFC, 0xBF, 0x02, 0xFF, 0xFE, 0x07, 0xC0, 0x06, 0xFF, 0xFE, 0x03, 0xC0, 
	0x06, 0xFF, 0xFE, 0x0F, 0xC0, 0x06, 0xFF, 0xFE, 0x03, 0xE0, 0x06, 0xFF, 0xFE, 0x0F, 0xE0, 0x06, 
	0xFF, 0xFE, 0x07, 0xF0, 0x06, 0xFF, 0xFE, 0x07, 0xE0, 0x06, 0xFF, 0xFE, 0x07, 0xE0, 0x06, 0xFF, 
	0xFE, 0x03, 0xF0, 0x06, 0xFF, 0xFE, 0x0F, 0xC0, 0x06, 0xFF, 0xFE, 0x01, 0xF0, 0x06, 0xFF, 0xFE, 
	0x0F, 0x80, 0x06, 0xFF, 0xFE, 0x01, 0xF8, 0x06, 0xFF, 0xFE, 0x1F, 0x00, 0x06, 0xFF, 0xFE, 0x00, 
	0xFC, 0x06, 0xFF, 0xFD, 0x3F, 0x00, 0xFE, 0x04, 0xFF, 0xFD, 0x7F, 0x00, 0xFE, 0x06, 0xFF, 0xFD, 
	0x7F, 0x00, 0xFE, 0x04, 0xFF, 0xFE, 0x3F, 0x00, 0x08, 0xFF, 0xFE, 0x00, 0xFC, 0x04, 0xFF, 0xFE, 
	0x1F, 0x80, 0x08, 0xFF, 0xFE, 0x01, 0xF8, 0x04, 0xFF, 0xFE, 0x0F, 0xE0, 0x08, 0xFF, 0xFE, 0x07, 
	0xF0, 0x04, 0xFF, 0xFE, 0x07, 0xFC, 0x08, 0xFF, 0xFD, 0x3F, 0xE0, 0xFF, 
};

#endif // PIF_H_hackaday
