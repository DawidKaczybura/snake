#pragma once
#include <iostream>
#include "Buffer.hpp"

Buffer::Buffer(const Dimension& _dimension){
    setDimension(_dimension);
    initBuff();
}

bool Buffer::setDimension(Dimension _dimension){
    dimension = _dimension;
    return true;
}

Dimension Buffer::getDimension(){
    return dimension;
}


bool Buffer::setCharAt(Position pos, char c){
    buff.at(pos.y).at(pos.x) = c;
    return true;
}

char Buffer::getCharAt(Position pos){
    return buff.at(pos.y).at(pos.x);
}

Line Buffer::getLineAt(int level){
    return buff.at(level);
}

Line Buffer::getEmptyLine(int length){
    Line line = "";
    for(int i = 0; i < length; i++){
        line += " ";
    }
    return line;
}

void Buffer::initBuff(){
    buff.clear();
    Line emptyLine = getEmptyLine(dimension.width);
    for(int i = 0; i < dimension.height; i++){
        buff.push_back(emptyLine);
    }
}