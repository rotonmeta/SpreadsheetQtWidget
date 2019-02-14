//
// Created by osboxes on 2/14/19.
//

#include "gtest/gtest.h"
#include "../Cell.h"

//Test constructor of cell
TEST(CellTest, constructor){
    Cell c(23.45);
    EXPECT_FLOAT_EQ(23.45, c.getData());
}

//Test setData method
TEST(CellTest, setData){
    Cell c;
    c.setData(0, 124.95);
    EXPECT_FLOAT_EQ(124.95, c.getData());
}

//Test
