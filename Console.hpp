#pragma once
#include <windows.h>

class Console{
    public:
        Console();
        void resetCursorPosition();
    private:
        void clearScreen();
        void hideCursor();
        
        HANDLE consoleHandle;
        COORD cursorPosition;
};