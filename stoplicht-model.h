#ifndef MODEL 
#define MODEL 


using namespace std; 

class model{
    public:
        // view methods     
        int getState();     
        // update (controller) methods     
        int setState(int newState); 
    
        int setStrip(int car);

        int getStrip();

        void setCar(int x, int y, int car);

        int getCarX(int car);
        int getCarY(int car);

    private:     
    // state data     
        int state = 0;
        int detection = 0;
        int carX[4] = {0};
        int carY[4] = {0};
};

#endif 