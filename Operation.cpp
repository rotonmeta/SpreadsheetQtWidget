//
// Created by osboxes on 2/13/19.
//

#include "Operation.h"

void Operation::addCell(Cell *cell) {
    this->cells.push_back(cell);
    (*cell).subscribe(this);
    doOp();
}

void Operation::removeCell(Cell *cell) {
    this->cells.remove(cell);
    (*cell).unsubscribe(this);
}

void Operation::update() {
    doOp();
}