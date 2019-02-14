//
// Created by osboxes on 2/14/19.
//

#include "Minimum.h"

void Minimum::doOp() {
    float v = cells.front()->getData();
    for (auto cell : cells)
        if (v > cell->getData())
            v = cell->getData();
    this->opCell->setData(0, v);
}