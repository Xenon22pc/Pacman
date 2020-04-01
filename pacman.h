#include "main.h"
#include "stdbool.h"

//------LINKS---------
/*
 * http://gameinternals.com/understanding-pac-man-ghost-behavior	//GHOST AI
 * https://shaunlebron.github.io/pacman-mazegen/					//MAP GENERATOR
 * https://github.com/Pocoder/arduino-pacman						//osnova
 */

#define PACMAN 0
#define GHOST 1
#define CHERRY 2

enum DIR{
	CNT = 0,
	UP = 1,
	DOWN = 2,
	RIGHT = 3,
	LEFT = 4,
};

typedef struct {
	uint8_t type;
	uint16_t x;
	uint16_t y;
	uint16_t main_color;
	uint8_t	face_dir;
	uint8_t dead;
} SPRITE;

extern SPRITE RedGhost;
extern SPRITE BlueGhost;
extern SPRITE OrangeGhost;
extern SPRITE PinkGhost;
extern SPRITE Pacman;

extern uint8_t pacmanMap[30][40];
extern uint8_t map_bit[];
