#include "gtest/gtest.h"
#include "Display.hpp"

class DisplayTest : public ::testing::Test{
    protected:
    int width = 20;
    int height = 20;
    Display display{width, height};
};


