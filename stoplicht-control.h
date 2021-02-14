#ifndef CONTROL 
#define CONTROL 

#include "stoplicht-model.h"
#include "stoplicht-view.h"

class control{
    public:

        void setSpot(int x, int y, int car);
        void setScreen();
        void shutScreen();
        void moveCar(int car);
        void checkCars();
        int print = 0;  
    private:
        model mod; 
        view vw;
};

#endif