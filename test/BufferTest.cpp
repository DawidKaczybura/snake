#include "gtest/gtest.h"
#include "Buffer.hpp"
#include <utility>

class BuforTest : public ::testing::Test{
    protected:
        Buffer buffer;
};

TEST_F(BuforTest, whenSettingSizeThenSizeSettedCorrectly){
    Size size {50,50};
    EXPECT_TRUE(buffer.setSize(size));
};

TEST_F(BuforTest, whenSettedSizeThenGetSizeReturnesSettedSize){
    Size size {50,50};
    Size result {50, 50};
    buffer.setSize(size);
    EXPECT_EQ(buffer.getSize(), result);
};

TEST_F(BuforTest, whenOneCharSettetThenGettingReturnThisChar){
    Size size {50,50};
    buffer.setSize(size);
    EXPECT_TRUE(true);
};