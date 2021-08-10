#include "gtest/gtest.h"
#include "Buffer.hpp"
#include <utility>

class BuforTest : public ::testing::Test{
    protected:
        int height = 10;
        int width = 10;
        Dimension dimension = Dimension(height, width);
        Buffer buffe = Buffer(dimension);
};

TEST_F(BuforTest, whenSettedDimensionThenGetDimensionReturnesSettedDimension){
    EXPECT_EQ(buffe.getDimension().width, dimension.width);
};
/*
TEST_F(BuforTest, whenOneCharSettetThenGettingReturnThisChar){
    Position pos{5, 5};
    EXPECT_TRUE(buffer.setCharAt(pos, 'b'));
    EXPECT_EQ(buffer.getCharAt(pos), 'b');
};

TEST_F(BuforTest, whenOneCharSettetThenGettingOneLineReturnesLineThatIncludeThisChar){
    Position pos{5, 5};
    buffer.setCharAt(pos, 'a');

    std::string result = "     a    ";
    EXPECT_EQ(buffer.getLineAt(5), result);
};
*/