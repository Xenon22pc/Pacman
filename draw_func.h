#include "main.h"
#include "stdbool.h"

//------LINKS---------
/*
 * http://gameinternals.com/understanding-pac-man-ghost-behavior	//GHOST AI
 * https://shaunlebron.github.io/pacman-mazegen/					//MAP GENERATOR
 * https://github.com/Pocoder/arduino-pacman						//osnova
 */

extern uint8_t  ghost_mask[];
extern uint8_t  pacman_r[];
extern uint8_t  pacman_l[];
extern uint8_t  pacman_u[];
extern uint8_t  pacman_d[];
extern uint8_t  pacman_o[];
extern uint8_t  map_bit[];

void draw_map(void);
void draw_point(void);
//void sprite_redraw(SPRITE *sprite, uint16_t x, uint16_t y, uint8_t face_dir);
