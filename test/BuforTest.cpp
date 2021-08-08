#include "gtest/gtest.h"
#include "Bufor.hpp"
#include <utility>

class BuforTest : public ::testing::Test{
    protected:
        Bufor bufor;
};

TEST_F(BuforTest, whenSettingSizeThenSizeSettedCorrectly){
    Size size {50,50};
    EXPECT_TRUE(bufor.setSize(size));
};

TEST_F(BuforTest, whenSettedSizeThenGetSizeReturnesSettedSize){
    Size size {50,50};
    Size result {50, 50};
    bufor.setSize(size);
    EXPECT_EQ(bufor.getSize(), result);
};