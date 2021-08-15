#include <iostream>
#include "Display.hpp"

bool Display::initDisplay(int width, int height){
    this->height = height;
    bufferPtr = BufferPtr(new Buffer(width, height));
    return true;
}

void Display::clearScreen(){
    system("CLS");
}

void Display::printBuffer(){
    Buffer* buffer = bufferPtr.get();
    for(int i = 0; i<height; i++){
        std::cout << buffer->getLineAt(i) << std::endl;
        //printf(buffer->getLineAt(i));
        //printf("\n");
    }
    //fflush()
}

BufferPtr Display::getBuffer(){ 
    return bufferPtr;
}

