#pragma once

struct Position{
    Position() = default;
    Position(int _x, int _y);
    bool operator ==(const Position& otherDimension);
    int x;
    int y;
};