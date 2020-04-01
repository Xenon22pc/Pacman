#include "display.h"
#include "pacman.h"
#include "draw_func.h"
#include "util_func.h"

SPRITE RedGhost =
{
	GHOST,		//type
	18,			//X coord
	12,			//Y coord
	clRed,		//Color
	LEFT,		//Eyes direction
	1,			//Dead
};

SPRITE BlueGhost =
{
	GHOST,		//type
	18,			//X coord
	14,			//Y coord
	clAqua,		//Color
	LEFT,		//Eyes direction
	1,			//Dead
};

SPRITE OrangeGhost =
{
	GHOST,		//type
	18,			//X coord
	16,			//Y coord
	clOrange,	//Color
	LEFT,		//Eyes direction
	1,			//Dead
};

SPRITE PinkGhost =
{
	GHOST,		//type
	18,			//X coord
	16,			//Y coord
	clHotpink,	//Color
	LEFT,		//Eyes direction
	1,			//Dead
};

SPRITE Pacman =
{
	PACMAN,			//type
	18,				//X coord
	7,				//Y coord
	clYellow,		//Color
	CNT,			//Eyes direction
	1,				//Dead
};

uint8_t pacmanMap[30][40] =
{
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//0 +
    0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,//1 +
    0,0,0,0,1,2,2,3,2,2,2,2,2,1,1,0,1,1,0,1,1,0,1,1,2,2,2,3,1,1,2,2,2,2,1,0,0,0,0,0,//2 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//3 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0,//4 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0,//5 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,1,1,1,0,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0,//6 +
    0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,1,0,0,0,0,0,//7 +
    0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0,//8 +
    0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0,//9 +
    0,0,0,0,1,2,1,1,1,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0,//10 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,1,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//11 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//12 +
    0,0,0,0,1,2,2,2,2,2,1,1,2,0,0,0,1,1,0,1,1,0,1,1,2,2,2,2,1,1,2,2,2,2,1,0,0,0,0,0,//13 +
    0,0,0,0,1,1,1,1,1,2,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,2,1,0,0,0,0,0,//14 +
    0,0,0,0,1,1,1,1,1,2,1,1,1,1,1,0,0,0,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,2,1,0,0,0,0,0,//15 +
    0,0,0,0,1,2,2,2,2,2,1,1,2,0,0,0,1,1,0,1,1,0,1,1,2,2,2,2,1,1,2,2,2,2,1,0,0,0,0,0,//16 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//17 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,1,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//18 +
    0,0,0,0,1,2,1,1,1,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0,//19 +
    0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0,//20 +
    0,0,0,0,1,2,1,1,1,2,1,1,1,1,1,1,1,1,0,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,0,0,0,0,0,//21 +
    0,0,0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,1,0,0,0,0,0,//22 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,1,1,1,0,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0,//23 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,1,1,1,2,1,1,2,1,0,0,0,0,0,//24 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,2,2,2,1,1,2,1,0,0,0,0,0,//25 +
    0,0,0,0,1,2,1,1,1,2,1,1,2,1,1,0,1,1,0,1,1,0,1,1,2,1,1,2,1,1,2,1,1,2,1,0,0,0,0,0,//26 +
    0,0,0,0,1,2,2,3,2,2,2,2,2,1,1,0,1,1,0,1,1,0,1,1,2,2,2,3,1,1,2,2,2,2,1,0,0,0,0,0,//27 +
    0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,//28 +
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//29 +
};


void start_game()
{
	ILI9341_Init();
	//ILI9341_SetRotation(0);
	ClrScreen();

	point = 0;
	Pacman.dead = 0;
	RedGhost.dead = 0;

	draw_map();
	draw_point();
}

void pacman_run(uint8_t dir)
{
	int8_t pdy=-4;
	int8_t pdx=-4;
	uint8_t fact_dir = CNT;

	switch(dir)
	{
		case UP: 	if(inMap(Pacman.x, Pacman.y-1)) fact_dir = UP;		else fact_dir = prev_dir;	break;
		case DOWN: 	if(inMap(Pacman.x, Pacman.y+1)) fact_dir = DOWN;	else fact_dir = prev_dir;	break;
		case RIGHT: if(inMap(Pacman.x+1, Pacman.y))	fact_dir = RIGHT;	else fact_dir = prev_dir;	break;
		case LEFT: 	if(inMap(Pacman.x-1, Pacman.y))	fact_dir = LEFT;	else fact_dir = prev_dir;	break;
	}

	switch(fact_dir)
	{
		case UP:
			if(inMap(Pacman.x, Pacman.y-1))
			{
				Pacman.y--;
				FillRect(Pacman.x*8+pdx, Pacman.y*8+pdy+16, 16, 8, clBlack);
				sprite_redraw(&Pacman, Pacman.x, Pacman.y, UP);
			}
		break;

		case DOWN:
			if(inMap(Pacman.x, Pacman.y+1))
			{
				Pacman.y++;
				FillRect(Pacman.x*8+pdx, Pacman.y*8+pdy-8, 16, 8, clBlack);
				sprite_redraw(&Pacman, Pacman.x, Pacman.y, DOWN);
			}
		break;

		case RIGHT:
			if(inMap(Pacman.x+1, Pacman.y))
			{
				Pacman.x++;
				FillRect(Pacman.x*8+pdx-8, Pacman.y*8+pdy, 8, 16, clBlack);
				sprite_redraw(&Pacman, Pacman.x, Pacman.y, RIGHT);
			}
		break;

		case LEFT:
			if(inMap(Pacman.x-1, Pacman.y))
			{
				Pacman.x--;
				FillRect(Pacman.x*8+pdx+16, Pacman.y*8+pdy, 8, 16, clBlack);
				sprite_redraw(&Pacman, Pacman.x, Pacman.y, LEFT);
			}
		break;
	}
	prev_dir = fact_dir;
}

void ghost_run(SPRITE *ghost)
{
	calculateDist(&ghost, &Pacman);
}
