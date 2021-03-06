#pragma once
#include <utility>
#include <string>
#include <vector>
#include "Dimension.hpp"
#include "Position.hpp"

using Line = std::string;
using Buff = std::vector<Line>;

class Buffer{
    public:
        Buffer(int width, int height);
        Buffer(const Dimension& _dimension);
        bool setCharAt(Position pos, char c);
        char getCharAt(Position pos);
        std::string getLineAt(int level);
        
    private:
        bool setDimension(Dimension _dimension);
        void initBuff();
        Line getEmptyLine(int length);
        Dimension dimension;
        Buff buff;
};