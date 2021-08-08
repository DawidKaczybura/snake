#pragma once
#include <utility>

using Size = std::pair<int, int>;

class Bufor{
    public:
        bool setSize(Size _size);
        Size getSize();
    private:
        Size size;
};