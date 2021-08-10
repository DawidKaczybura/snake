#include "gtest/gtest.h"
#include "Dimension.hpp"

class DimensionTest : public ::testing::Test{
    protected:
        int width = 10;
        int height = 20;
        Dimension dimension = Dimension(height, width);
};

TEST_F(DimensionTest, WhenDimensionObjectCreatedItsWidthAndHeightIsSetCorrectly){
    EXPECT_TRUE(dimension.width == width);
};

TEST_F(DimensionTest, CompareTwoDifferentObjectIfNotEqual){
    Dimension otherDimension = Dimension(height + height, width);
    EXPECT_FALSE(dimension == otherDimension);
}

TEST_F(DimensionTest, CompareTwhoSameObjestIfEqual){
    Dimension otherDimension = Dimension(height, width);
    EXPECT_TRUE(dimension == otherDimension);
}