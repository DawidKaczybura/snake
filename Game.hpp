#pragma once
#include "Display.hpp"

class Game{
    public:
        Game();
        void play();
    private:
        int width = 30;
        int height = 20;
        Display display{width, height};
};