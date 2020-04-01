#ifndef Screen_h
#define	Screen_h

#include "main.h"


//------------Macros------------
#define CS_LOW HAL_GPIO_WritePin(LCD_nCS_GPIO_Port, LCD_nCS_Pin, GPIO_PIN_RESET);
#define CS_HIGH HAL_GPIO_WritePin(LCD_nCS_GPIO_Port, LCD_nCS_Pin, GPIO_PIN_SET);

#define WR_LOW HAL_GPIO_WritePin(LCD_nWR_GPIO_Port, LCD_nWR_Pin, GPIO_PIN_RESET);
#define WR_HIGH HAL_GPIO_WritePin(LCD_nWR_GPIO_Port, LCD_nWR_Pin, GPIO_PIN_SET);

#define RS_LOW HAL_GPIO_WritePin(LCD_RS_GPIO_Port, LCD_RS_Pin, GPIO_PIN_RESET);
#define RS_HIGH HAL_GPIO_WritePin(LCD_RS_GPIO_Port, LCD_RS_Pin, GPIO_PIN_SET);

#define RD_LOW HAL_GPIO_WritePin(LCD_nRD_GPIO_Port, LCD_nRD_Pin, GPIO_PIN_RESET);
#define RD_HIGH HAL_GPIO_WritePin(LCD_nRD_GPIO_Port, LCD_nRD_Pin, GPIO_PIN_SET);

#define RESET_LOW HAL_GPIO_WritePin(LCD_nRESET_GPIO_Port, LCD_nRESET_Pin, GPIO_PIN_RESET);
#define RESET_HIGH HAL_GPIO_WritePin(LCD_nRESET_GPIO_Port, LCD_nRESET_Pin, GPIO_PIN_SET);

#define OnScrean	CS_LOW; RS_LOW; (GPIOB->ODR) = ((GPIOB->ODR) & 0xFF00) | 0x2C; WR_LOW; WR_HIGH; RS_HIGH;

// ------------ Display parameters -----------------------
// Overall display parameters
#define		ScreenX0 		0
#define		ScreenY0		0
#define		ScreenXsize		320
#define		ScreenYsize		240

#define		Rbits			0		// Red bits position
#define		Gbits			5		// Green bits position
#define		Bbits			11		// Blue bits position
#define		RGB(R, G, B)	(((R >> 3) << Rbits) | ((G >> 2) << Gbits) | ((B >> 3) << Bbits))

enum  COLOR{
	clBlack 		=	RGB(0, 0, 0),
	clWhite			= 	RGB(255, 255, 255),
	clRed			= 	RGB(255, 0, 0),
	clGreen			= 	RGB(0, 255, 0),
	clBlue			= 	RGB(0, 0, 255),
	clYellow		=	RGB(255, 255, 0),
	clGainsboro		=	RGB(220, 220, 220),
	clNavy			=	RGB(0, 0, 128),
	clAqua			=	RGB(0, 255, 255),
	clHotpink		=	RGB(255, 105, 180),
	clOrange		=	RGB(255, 165, 0),
	clDeepskyblue	=	RGB(0, 191, 255),
	clDimgray		=	RGB(105, 105, 105),
	cllightsalmon	=	RGB(255, 160, 122),
	cllightcoral	=	RGB(240, 128, 128),
	clpaleturquoise	=	RGB(175, 238, 238),
	clturquoise		=	RGB(64, 224, 208),
	clViolet		=	RGB(238, 130, 238),
	clGray1			=	RGB(90, 90, 90),
	clGray2			=	RGB(220, 220, 220),
	clGray3			=	RGB(240, 240, 240),
	clDarkgray		=	RGB(169, 169, 169),
	clSkyblue		= 	RGB(135, 206, 235),
	clChocolate		= 	RGB(210, 105, 30),
	clMediumseagreen= 	RGB(60, 179, 113),
	clPeachpuff		=	RGB(255, 218, 185),
	clSeagreen		=	RGB(46, 139, 87),
	clPoint			= 	RGB(255, 186, 148),

};

typedef struct {
	uint8_t *Array;
	uint8_t	Xsize;
	uint8_t	Ysize;
	uint8_t	CharPitch;
	uint8_t	LinePitch;
	uint8_t	IndexOfs;
	} FONT;


//	Display Panel
// =======================================================
// Display parameters
#define	WWindowx0			10
#define	WWindowy0			15
#define	WWindowSizex		300
#define	WWindowSizey		200
#define	WWindowMidValue	0x800

#define	WDsize				300		// Wave display size
#define	HBarSize			140		// HPos indicator length

// ===========================================================
//	Declarations of external variables
// ===========================================================
//
extern	FONT ASC8X16;

// ===========================================================
//	Function Prototype Declarations
// ===========================================================
//
void ILI9341_Init(void);
void usDelay(volatile uint16_t count);
void ILI9341_SetRotation(uint8_t m);
void ClrScreen(void);
void SetWindow(uint16_t x, uint16_t xsize, uint16_t y, uint16_t ysize);
void drawFastVLine(uint16_t x, uint16_t y, uint16_t h, uint16_t color);
void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
void drawPixel(uint16_t x, uint16_t y, uint16_t color);
void fillImage(uint16_t *image, uint16_t x, uint16_t y, uint16_t w, uint16_t h);
void FillRect(uint16_t x, uint16_t y, uint16_t xsize, uint16_t ysize, uint16_t color);
void draw_Bitmap(uint16_t x, uint16_t y, uint8_t *image, uint16_t fgcolor,  uint16_t bgcolor, uint16_t w, uint16_t h);
void LCD_Putc(uint16_t x, uint16_t y, uint8_t ch, uint16_t fgcolor, uint16_t bgcolor, FONT *font);
void LCD_Puts(uint16_t x, uint16_t y, uint8_t *str, uint16_t fgcolor, uint16_t bgcolor, FONT *font);
#endif
