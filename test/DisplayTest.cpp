#include "gtest/gtest.h"
#include "Display.hpp"

class DisplayTest : public ::testing::Test{
    protected:
    Display display;
};

TEST_F(DisplayTest, WhenCreatedDisplayThenBufferIsInitialized){
    EXPECT_TRUE(true);
    EXPECT_EQ(display.getBuffer().getDimension().width, 30);
}