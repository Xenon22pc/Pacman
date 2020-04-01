#include "main.h"
#include "stdbool.h"

/*
 * http://gameinternals.com/understanding-pac-man-ghost-behavior	//GHOST AI
 * https://shaunlebron.github.io/pacman-mazegen/					//MAP GENERATOR
 * https://github.com/Pocoder/arduino-pacman						//osnova
 */

bool inMap(uint16_t x, uint16_t y);
bool inPoint(uint16_t x, uint16_t y);
//uint16_t calculateDist(SPRITE *sprite1, SPRITE *sprite2);
