#include <iostream>
#include "Display.hpp"

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD cursorPosition;


int main(){
    Display display;

    display.initDisplay(20,20);
    display.clearScreen();
    while(true)
    {
        //display.clearScreen();
        cursorPosition.X = 0;
        cursorPosition.Y = 0;
        SetConsoleCursorPosition(console,cursorPosition); 
        //std::cout<<"a"<<std::endl;
        display.printBuffer();
    }
}