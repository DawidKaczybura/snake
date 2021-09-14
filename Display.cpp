#include <iostream>
#include <sstream>

#include "Display.hpp"

Display::Display(int width, int height){
    consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    this->height = height;
    bufferPtr = BufferPtr(new Buffer(width, height));
    hideCursor();
    clearScreen();
}

void Display::hideCursor()
{
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void Display::clearScreen(){
    system("CLS");
}

void Display::resetCursorPosition(){
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(consoleHandle,cursorPosition);
}

void Display::printBuffer(){
    resetCursorPosition();
    Buffer* buffer = bufferPtr.get();
    std::stringstream out;
    for(int i = 0; i<height; i++){
        std::cout << buffer->getLineAt(i) << std::endl;
    }
}

BufferPtr Display::getBuffer(){ 
    return bufferPtr;
}

