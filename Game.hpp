#pragma once
#include "Display.hpp"

class Game{
    public:
        void play();
    private:
        int width = 30;
        int height = 20;
        Display display{width, height};
};