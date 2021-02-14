#include "stoplicht-view.h"
#include <iostream> 
#include <unistd.h>
#include <ncurses.h> 

using namespace std;

void view::lightLights(int car, int x, int y){
    switch(car){
        case 1:
            if(x > 17){
                fillLight(3, 17, 11);
            }
            else    
                fillLight(1, 17, 11);
        break;
        case 2:
            if(y > 3){
                fillLight(3, 18, 4);
            }
            else
                fillLight(1, 18, 4);
        break;
        case 3:
            if(y < 13){
                fillLight(3, 34, 12);
            }
            else    
                fillLight(1, 34, 12);
        break;
        case 4:
            if(x < 36){
                fillLight(3, 34, 5); 
            }
            else    
                fillLight(1, 34, 5);

        break;

    }
}

void view::fillLight(int color, int x, int y){
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_YELLOW);
    init_pair(3, COLOR_BLACK, COLOR_GREEN);
    move(y, x);
    printw("[");
    attron(COLOR_PAIR(color));
    printw("#");
    attroff(COLOR_PAIR(color));
    printw("]");

}


void view::startScreen(){
    initscr();
    start_color();
    move(0,0);
    printw( "                     |          |                           \n"
            "                     |          |                           \n"
            "                     |          |                           \n"
            "                     |          |                           \n"
            "                     -          -                           \n"
            "                     |          |                           \n"
            "------------------|---          ---|------------------------\n"
            "                                                            \n"
            "                                                            \n"
            "                                                            \n"
            "------------------|---          ---|------------------------\n"
            "                     |          |                           \n"
            "                     -          -                           \n"
            "                     |          |                           \n"
            "                     |          |                           \n"
            "                     |          |                           \n"
            "                     |          |                           \n");
}

void view::stopScreen(){
    endwin();
}

void view::setCar(int car, int x, int y){
    switch(car){
        case 1:
            if(x < 60){
                move(9, x);
                printw("c");
            }
            
        break;
        case 2:
            if(y < 17){
                move(y, 25);
                printw("c");
            }
            
        break;
        case 3:
            if(y > -1){
                move(y, 28);
                printw("c");
            }
        break;
        case 4:
            if(x > -1){
                move(7 , x);
                printw("c");
            }
        break;

    }

    switch(car){
        case 1:
            if(x < 60){
                move(9, x - 1);
                printw(" ");
            }
        break;
        case 2:
            if(y < 18){
                move(y - 1, 25);
                printw(" ");
            }
        break;
        case 3:
            if(y > -2){
                move(y + 1, 28);
                printw(" ");
            }
        break;
        case 4:
            if(x > -4){
                move(7 , x + 1);
                printw(" ");
            }
        break;
    }
    refresh();
}