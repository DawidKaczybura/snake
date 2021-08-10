#include "gtest/gtest.h"
#include "Buffer.hpp"
#include <utility>

class BuforTest : public ::testing::Test{
    protected:
        Size size {10, 10};
        Buffer buffer = Buffer(size);
};

TEST_F(BuforTest, whenSettedSizeThenGetSizeReturnesSettedSize){
    EXPECT_EQ(buffer.getSize(), size);
};

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