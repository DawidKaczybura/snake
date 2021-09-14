#include <iostream>
#include "Display.hpp"


int main(){
    int width = 30;
    int height = 20;
    Display display(width, height);

    while(true)
    {
        display.printBuffer();
    }
}