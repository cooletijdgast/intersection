#include "stoplicht-control.h"
#include <iostream> 
#include <unistd.h>
#include <ncurses.h> 

using namespace std; 

int main() {   
    control light;
    light.setScreen();
    light.setSpot(0, 16, 3);
    light.setSpot(60, 0, 4);
    unsigned int microsecond = 200000;

    for(int i = 0; i < 60; i++){
        light.moveCar(1);
        light.moveCar(2);
        light.moveCar(3);
        light.moveCar(4);
        light.checkCars();
        usleep(1 * microsecond);
    }

    light.shutScreen();

    return 0; 
}