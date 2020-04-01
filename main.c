/* USER CODE BEGIN Includes */
#include "display.h"
#include "pacman.h"
/* USER CODE END Includes */

//-------------------------------------------
//-------------------------------------------

/* USER CODE BEGIN PV */
uint8_t str[100];

uint8_t JOY_DIR = LEFT,
		prev_dir;

int16_t point=0;
/* USER CODE END PV */

//-------------------------------------------
//-------------------------------------------

/* USER CODE BEGIN 0 */
uint8_t btnRead()
{
	if(!HAL_GPIO_ReadPin(BTN1_GPIO_Port, BTN1_Pin)) JOY_DIR = UP;
	if(!HAL_GPIO_ReadPin(BTN2_GPIO_Port, BTN2_Pin)) JOY_DIR = RIGHT;
	if(!HAL_GPIO_ReadPin(BTN3_GPIO_Port, BTN3_Pin)) JOY_DIR = LEFT;
	if(!HAL_GPIO_ReadPin(BTN4_GPIO_Port, BTN4_Pin)) JOY_DIR = DOWN;
}
/* USER CODE END 0 */

//-------------------------------------------
//-------------------------------------------

/* USER CODE BEGIN 2 */
    start_game();
/* USER CODE END 2 */

//-------------------------------------------
//-------------------------------------------

/* USER CODE BEGIN 3 */
	  btnRead();
	  pacman_run(JOY_DIR);

	  sprintf(str, "%u",Pacman.x);
	  LCD_Puts(320-8*3, 0, str, clWhite, clBlack, &ASC8X16);
	  sprintf(str, "%u",Pacman.y);
	  LCD_Puts(320-8*3, 16, str, clWhite, clBlack, &ASC8X16);

	  sprintf(str, "%u",point);
	  LCD_Puts(320-8*3, 100, str, clWhite, clBlack, &ASC8X16);
	  HAL_Delay(200);

  }
/* USER CODE END 3 */
