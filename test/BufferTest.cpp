#include "gtest/gtest.h"
#include "Buffer.hpp"
#include <utility>

class BufferTest : public ::testing::Test{
    protected:
        int height = 10;
        int width = 10;
        Dimension dimension = Dimension(height, width);
        Buffer buffer = Buffer(dimension);
};


TEST_F(BufferTest, whenOneCharSettetThenGettingReturnThisChar){
    Position pos = Position(5, 6);
    EXPECT_TRUE(buffer.setCharAt(pos, 'b'));
    EXPECT_EQ(buffer.getCharAt(pos), 'b');
};

TEST_F(BufferTest, whenOneCharSettetThenGettingOneLineReturnesLineThatIncludeThisChar){
    int x = 6;
    int y = 5;
    Position pos{x, y};
    buffer.setCharAt(pos, 'a');

    std::string result = "      a   ";
    EXPECT_EQ(buffer.getLineAt(y), result);
};
