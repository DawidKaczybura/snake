#include <iostream>
#include <sstream>

#include "Display.hpp"

Display::Display(int width, int height):height(height){
    bufferPtr = BufferPtr(new Buffer(width, height));
}

void Display::printBuffer(){
    console.resetCursorPosition();
    Buffer* buffer = bufferPtr.get();
    std::stringstream out;
    for(int i = 0; i<height; i++){
        std::cout << buffer->getLineAt(i) << std::endl;
    }
}

BufferPtr Display::getBuffer(){ 
    return bufferPtr;
}

