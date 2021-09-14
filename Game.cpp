#include "Game.hpp"
#include <chrono>
#include <iostream>


void Game::play(){
    int fps = 60;
    int frameDuration = 1000/fps; 
    std::cout << frameDuration << std::endl;

    auto last = std::chrono::system_clock::now();
    while(true){
        auto current = std::chrono::system_clock::now();
        std::chrono::duration<double, std::milli> duration = current - last;
        if(duration.count() > frameDuration){
            std::cout << duration.count() << std::endl;
            last = current;
        }
    }
}