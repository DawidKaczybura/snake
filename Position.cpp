#include "Position.hpp"


Position::Position(int _x, int _y){
    x = _x;
    y = _y;
}

bool Position::operator==(const Position& otherPosition){
    if(x != otherPosition.x) return false;
    if(y != otherPosition.y) return false;
    return true;
}
