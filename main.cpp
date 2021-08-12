#include <iostream>
#include "Display.hpp"


int main(){
    Display display;

    display.initDisplay(20,20);
    display.clearScreen();
    display.printBuffer();

    display.clearScreen();
    display.printBuffer();
}