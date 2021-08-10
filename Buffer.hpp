#pragma once
#include <utility>
#include <string>
#include <vector>

using Size = std::pair<int, int>;
using Position = std::pair<int, int>;
using Line = std::string;
using Buff = std::vector<Line>;


class Buffer{
    public:
        Buffer(Size _size);
        Size getSize();
        bool setCharAt(Position pos, char c);
        char getCharAt(Position pos);
        std::string getLineAt(int pos);
    private:
        bool setSize(Size _size);
        void initBuff();
        Line getEmptyLine(int length);
        Size size;
        Buff buff;
};