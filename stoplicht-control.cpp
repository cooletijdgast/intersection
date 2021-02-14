#include "stoplicht-control.h"
#include <iostream>
#include <ncurses.h> 

using namespace std;

void control::setSpot(int x, int y, int car){
    mod.setCar(x, y, car);
}

void control::setScreen(){
    vw.startScreen();
}

void control::shutScreen(){
    vw.stopScreen();
}

void control::moveCar(int car){
    if(car == 1 || car == 2)
        mod.setCar(mod.getCarX(car) + 1, mod.getCarY(car) + 1, car);
    else if(car == 3){
        mod.setCar(mod.getCarX(car), mod.getCarY(car) - 1, car);
    }
    else if(car == 4){
        mod.setCar(mod.getCarX(car) - 1, mod.getCarY(car), car);
    }
    vw.setCar(car, mod.getCarX(car), mod.getCarY(car));
}

void control::checkCars(){
    for(int i = 1; i < 5; i++){
        vw.lightLights(i, mod.getCarX(i), mod.getCarY(i));
    }
}