#pragma once
#include <memory>
#include <windows.h>
#include "Buffer.hpp"

using BufferPtr = std::shared_ptr<Buffer>;

class Display{
    public:
        Display(int _width, int _height);
        BufferPtr getBuffer(); 
        void printBuffer();
    private:
        void clearScreen();
        void hideCursor();
        void resetCursorPosition();

        BufferPtr bufferPtr;
        int height;
        HANDLE consoleHandle;
        COORD cursorPosition;
};