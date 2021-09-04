#include <iostream>
#include <sstream>

#include "Display.hpp"

bool Display::initDisplay(int width, int height){
    consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    this->height = height;
    bufferPtr = BufferPtr(new Buffer(width, height));
    hideCursor();
    return true;
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

void Display::printBuffer(){
    Buffer* buffer = bufferPtr.get();
    std::stringstream out;
    for(int i = 0; i<height; i++){
        std::cout << buffer->getLineAt(i) << std::endl;
        //out << buffer->getLineAt(i) << std::endl;
        //printf(buffer->getLineAt(i));
        //printf("\n");
    }
    //fflush()
    //std::cout << out.str();
}

BufferPtr Display::getBuffer(){ 
    return bufferPtr;
}

