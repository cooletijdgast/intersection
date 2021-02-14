#ifndef VIEW 
#define VIEW 

#include <string> 

using namespace std; 

class view{
    public:
        void lightLights(int car, int x, int y);
        void fillLight(int color, int x, int y);
        void showCar(int x, int y); 
        void startScreen();
        void stopScreen();
        void setCar(int car, int x, int y);
        string test = "";
    private:
        string kleur[3];
        unsigned int microsecond = 100000;
};

#endif