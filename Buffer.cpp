#pragma once
#include <utility>
#include "Buffer.hpp"

bool Buffer::setSize(Size _size){
    size = _size;
    return true;
}

Size Buffer::getSize(){
    return size;
}

