#pragma once

struct Dimension{
    Dimension(int _height, int _width);
    bool operator ==(const Dimension& otherDimension);
    int height;
    int width;
};