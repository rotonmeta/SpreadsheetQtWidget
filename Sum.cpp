//
// Created by osboxes on 2/13/19.
//

#include "Sum.h"

void Sum::doOp() {
    float v = 0;
    for (auto itr : cells)
        v += itr->getData();
    this->opCell->setData(0, v);
}