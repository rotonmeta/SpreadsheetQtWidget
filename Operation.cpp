//
// Created by osboxes on 2/13/19.
//

#include "Operation.h"

void Operation::addCell(Cell *cell) {
    for (auto itr: cells) {
        if (itr == cell)
            return;
    }

    this->cells.push_back(cell);
    (*cell).subscribe(this);
    doOp();
}

void Operation::removeCell(Cell *cell) {
    this->cells.remove(cell);
    (*cell).unsubscribe(this);
    doOp();
}

void Operation::update() {
    doOp();
}

Operation::~Operation(){
    for (auto cell: cells)
        (*cell).unsubscribe(this);
}