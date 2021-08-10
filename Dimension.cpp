#include "Dimension.hpp"


Dimension::Dimension(int _height, int _width){
    height = _height;
    width = _width;
}

bool Dimension::operator==(const Dimension& otherDimension){
    if(height != otherDimension.height) return false;
    if(width != otherDimension.width) return false;
    return true;
}
