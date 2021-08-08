#pragma once
#include <utility>
#include "Bufor.hpp"

bool Bufor::setSize(Size _size){
    size = _size;
    return true;
}

Size Bufor::getSize(){
    return size;
}

