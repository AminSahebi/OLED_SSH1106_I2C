add_executable(oled
        font.c	
        ssd1306.c
        oled.c

)

target_link_libraries(oled pico_stdlib hardware_i2c )

pico_add_extra_outputs(oled)

