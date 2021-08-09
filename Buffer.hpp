#pragma once
#include <utility>

using Size = std::pair<int, int>;
using Position = std::pair<int, int>;

class Buffer{
    public:
        bool setSize(Size _size);
        Size getSize();
        bool setCharAt(Position pos, char c);
        char getCharAt(Position pos);
    private:
        Size size;
};