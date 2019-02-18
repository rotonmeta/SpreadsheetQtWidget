//
// Created by osboxes on 2/14/19.
//

#include "gtest/gtest.h"
#include "../Cell.h"
#include "../Sum.h"
#include "../Mean.h"
#include "../Minimum.h"
#include "../Maximum.h"

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

//Test sum operation
TEST(OperationTest, sumTest) {
    Cell c;
    Cell c1(12.3);
    Cell c2(3);
    Cell c3(9.99);

    Sum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();
    EXPECT_FLOAT_EQ(25.29, c.getData());

}

//Test Minimum operation
TEST(OperationTest, minTest) {
    Cell c;
    Cell c1(2);
    Cell c2(2.2);
    Cell c3(1.9);

    Minimum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();
    EXPECT_FLOAT_EQ(1.9, c.getData());

}

//Test Maximum operation
TEST(OperationTest, maxTest) {
    Cell c;
    Cell c1(160);
    Cell c2(2);
    Cell c3(95.8);

    Maximum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();
    EXPECT_EQ(160, c.getData());

}

//Test Mean operation
TEST(OperationTest, meanTest) {
    Cell c;
    Cell c1(23);
    Cell c2(28);
    Cell c3(30);

    Mean op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();
    EXPECT_EQ(27, c.getData());

}

//Test the operation result after removing a cell
TEST(RuntimeTest, removeCellTest) {
    Cell c;
    Cell c1(12.3);
    Cell c2(3);
    Cell c3(9.99);

    Sum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();
    op.removeCell(&c3);
    EXPECT_FLOAT_EQ(15.3, c.getData());
}

//Test the operation result after adding a cell
TEST(RuntimeTest, addCellTest) {
    Cell c;
    Cell c1(12.3);
    Cell c2(3);
    Cell c3(9.99);
    Cell c4(5.4);

    Sum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();

    op.addCell(&c4);
    EXPECT_FLOAT_EQ(30.69, c.getData());
}

//Test the operation result after changing a cell value
TEST(RuntimeTest, changeCellDataTest) {
    Cell c;
    Cell c1(12.3);
    Cell c2(3);
    Cell c3(9.99);

    Sum op(&c);
    op.addCell(&c1);
    op.addCell(&c2);
    op.addCell(&c3);
    op.doOp();

    c3.setData(0, 6);
    EXPECT_FLOAT_EQ(21.3, c.getData());

}
