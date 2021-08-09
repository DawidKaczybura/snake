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

bool Buffer::setCharAt(Position pos, char c){
    return true;
}
char Buffer::getCharAt(Position pos){
    return 'a';
}

