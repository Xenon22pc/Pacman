#include "util_func.h"
#include "pacman.h"

//Проверка находится sprite в доступной области
bool inMap(uint16_t x, uint16_t y)
{
	return (pacmanMap[y][x]!=1)? true : false;
}

//Проверка находится sprite на очке
bool inPoint(uint16_t x, uint16_t y)
{
	return (pacmanMap[y][x]==2)? true : false;
}

//Считает дистанцию от объекта 1 до объекта 2
uint16_t calculateDist(SPRITE *sprite1, SPRITE *sprite2)
{
	return (sprite2->x - sprite1->x) * (sprite2->x - sprite1->x) + (sprite2->y - sprite1->y) * (sprite2->y - sprite1->x);
}
