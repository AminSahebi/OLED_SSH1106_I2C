#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"

#include "font.h"
#include "ssd1306.h"


int main(){
  
  stdio_init_all();

  i2c_init(i2c_default, 400 * 1000);
    gpio_set_function(PICO_DEFAULT_I2C_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(PICO_DEFAULT_I2C_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(PICO_DEFAULT_I2C_SDA_PIN);
    gpio_pull_up(PICO_DEFAULT_I2C_SCL_PIN);
  
  
  SSD1306_Init();  // initialise

  /// lets print some string

    SSD1306_GotoXY (2,0);
    SSD1306_Puts ("HELLO", &Font_7x10, 1);
    SSD1306_GotoXY (2, 10);
    SSD1306_Puts ("NEW YEAR", &Font_7x10, 1);
    SSD1306_GotoXY (2, 20);
    SSD1306_Puts ("1402! :)", &Font_7x10, 1);
    SSD1306_UpdateScreen(); //display

    sleep_ms(200);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
;
	  //// HORSE ANIMATION START /////

	  //// HORSE ANIMATION ENDS //////
  }
  /* USER CODE END 3 */
  return 0;
}