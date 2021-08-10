#pragma once
#include "Buffer.hpp"


Buffer::Buffer(Size _size){
    setSize(_size);
    initBuff();
}

bool Buffer::setSize(Size _size){
    size = _size;
    return true;
}

Size Buffer::getSize(){
    return size;
}

bool Buffer::setCharAt(Position pos, char c){
    buff.at(pos.first).at(pos.second) = c;
    return true;
}

char Buffer::getCharAt(Position pos){
    return buff.at(pos.first).at(pos.second);
}

Line Buffer::getLineAt(int pos){
    return buff.at(pos);
}

Line Buffer::getEmptyLine(int length){
    Line line = "";
    for(int i = 0; i < size.second; i++){
        line += " ";
    }
    return line;
}

void Buffer::initBuff(){
    buff.clear();
    Line emptyLine = getEmptyLine(size.second);
    for(int i = 0; i < size.first; i++){
        buff.push_back(emptyLine);
    }
}