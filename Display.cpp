#include "Display.hpp"

bool Display::initDisplay(int width, int height){
    bufferPtr = BufferPtr(new Buffer(width, height));
    return true;
}

BufferPtr Display::getBuffer(){ 
    return bufferPtr;
}

