//
// Created by osboxes on 2/14/19.
//

#include "Mean.h"

void Mean::doOp() {
    float sum = 0;
    for (auto cell: cells) {
        sum += cell->getData()
    }
    this->opCell->setData(0, sum/cells.size());
}