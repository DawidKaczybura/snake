#include "gtest/gtest.h"
#include "Position.hpp"

class PositonTest : public ::testing::Test{
    protected:
        int x = 10;
        int y = 20;
        Position position = Position(x, y);
};

TEST_F(PositonTest, WhenPositionObjectCreatedItsXAndYIsSetCorrectly){
    EXPECT_TRUE(position.x == x);
};

TEST_F(PositonTest, CompareTwoDifferentObjectIfNotEqual){
    Position otherPosition = Position(x + x, y);
    EXPECT_FALSE(position == otherPosition);
}

TEST_F(PositonTest, CompareTwhoSameObjestIfEqual){
    Position otherPosition = Position(x, y);
    EXPECT_TRUE(position == otherPosition);
}