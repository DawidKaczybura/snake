#pragma once
#include <memory>
#include <windows.h>
#include "Buffer.hpp"
#include "Console.hpp"

using BufferPtr = std::shared_ptr<Buffer>;

class Display{
    public:
        Display(int _width, int _height);
        BufferPtr getBuffer(); 
        void printBuffer();
    private:
        Console console;
        BufferPtr bufferPtr;
        int height;
};