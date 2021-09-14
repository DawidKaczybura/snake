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
    Display display(20, 20);

    while(true)
    {
        cursorPosition.X = 0;
        cursorPosition.Y = 0;
        SetConsoleCursorPosition(console,cursorPosition); 
        display.printBuffer();
    }
}