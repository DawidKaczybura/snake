#include <iostream>
#include "Display.hpp"


int main(){
    Display display(20, 20);

    while(true)
    {
        display.printBuffer();
    }
}