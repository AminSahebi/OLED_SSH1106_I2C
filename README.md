# OLED_SSH1106_I2C
this is a demo sample for SSH1106 OLED with I2C for RPI Pico

For those who deal with SSH1106 1.3' inch OLED rather than SSD1306, I have created a sample repository which works, 

This Repository code is adopted and transferred from the STM32 nucleo board sample described in this link: https://controllerstech.com/oled-display-using-i2c-stm32/


Note that the dimension of the SSH1106 driver must be set to 132X72 to make it work! interestingly dimension of 128X64 doesn't work and the OLED will be turn into a whole dummy screen! 


Add this project to your pcio SDK examples and you are good to go building the project within the pico SDK examples:


In the main root directory add: 
CMakeLists.txt
```
add_subdirectory(OLED_SSH1106_I2C)
```

create a directory in the examples named: OLED_SSH1106_I2C

clone this repository into that folder and note that the name of the cloned folder must be the same as the one in the CMakeLists.txt file in the previous step.

```
git clone https://github.com/AminSahebi/OLED_SSH1106_I2C.git 

```
