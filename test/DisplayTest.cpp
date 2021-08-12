#include "gtest/gtest.h"
#include "Display.hpp"

class DisplayTest : public ::testing::Test{
    protected:
    Display display;
};

TEST_F(DisplayTest, WhenInitializingDisplayTrueReturned){
    int width = 20;
    int height = 20;
    EXPECT_TRUE(display.initDisplay(width, height));
}

TEST_F(DisplayTest, WhenBufferIsInitializedThenWidhtAndHeightIsCorrect){
    int width = 20;
    int height = 20;
    display.initDisplay(width, height);
    BufferPtr bufferPtr = display.getBuffer();
    Buffer* buff = display.getBuffer().get();
    EXPECT_EQ(buff->getDimension().width, width);
}

