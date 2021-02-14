#include "stoplicht-model.h"
#include <string> 
#include <iostream> 
#include <ncurses.h> 

using namespace std;

int model::getState(){
    return state;
}
// update (controller) methods     
int model::setState(int newState){
    if(newState < 1 || newState > 3 ){
        cout << "Input must be between 1 and 3!" << endl;
        return 1;
    }
    else{
        state = newState;
        return 0;
    }
    
} 

int model::setStrip(int car){
    if(car > 1 || car < 0){
        cout << "Value must be 0 or 1!" << endl;
        return 1;
    }
    else if(car == 1){
        detection = 3;
        return 0;
    }   
    else{
        detection = 1;
        return 0;
    }
    
}

int model::getStrip(){
    int temp = detection;
    if(detection)
        detection = 0;
    return temp;
}

void model::setCar(int x, int y, int car){
    carX[car] = x;
    carY[car] = y;
}

int model::getCarX(int car){
    return carX[car];
}

int model::getCarY(int car){
    return carY[car];
}