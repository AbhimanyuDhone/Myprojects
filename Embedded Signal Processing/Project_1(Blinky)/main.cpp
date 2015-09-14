#include "mbed.h"
DigitalOut led_blue(LED_BLUE);

int main() {
while (true)
    {
    led_blue = 0;
    wait(0.5f);
    led_blue = 1;
    wait(1.0f);
    }
}
