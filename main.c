#include <stdio.h>
#include "pico/stdlib.h"


int main(){
    stdio_init_all();
    const uint LED_PIN = 18;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while(true){

        printf("LED on\n");
        gpio_put(LED_PIN, 1);
        sleep_ms(2500);
        printf("LED off\n");
        gpio_put(LED_PIN,0);
        sleep_ms(2500);
    }
    return 0;

}