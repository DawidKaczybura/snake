#pragma once
#include <memory>
#include "Buffer.hpp"

using BufferPtr = std::shared_ptr<Buffer>;

class Display{
    public:
        bool initDisplay(int _width, int _height);
        BufferPtr getBuffer(); 

    private:
        BufferPtr bufferPtr;
};