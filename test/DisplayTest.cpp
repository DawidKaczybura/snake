#include "gtest/gtest.h"
#include "Display.hpp"

class DisplayTest : public ::testing::Test{
    protected:
    int width = 20;
    int height = 20;
    Display display{width, height};
};

TEST_F(DisplayTest, WhenBufferIsInitializedThenWidhtAndHeightIsCorrect){
    BufferPtr bufferPtr = display.getBuffer();
    Buffer* buff = display.getBuffer().get();
    EXPECT_EQ(buff->getDimension().width, width);
    EXPECT_EQ(buff->getDimension().height, height);
}

