#pragma once
#include <windows.h>

class Console{
    public:
        Console();
        void printBuffer();
    private:
        void clearScreen();
        void hideCursor();
};