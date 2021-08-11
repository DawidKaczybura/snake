#pragma once
#include "Buffer.hpp"

class Display{
    public:
        //bool initDisplay(int widht, int height);
        Buffer getBuffer();
        const int width = 30;
        const int height = 30;
    private:
        //Buffer* bufferPtr;
        Buffer buffer = Buffer(width, height);
};