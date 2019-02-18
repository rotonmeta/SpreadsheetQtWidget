//
// Created by osboxes on 2/14/19.
//

#ifndef SPREADSHEETQTWIDGET_MINIMUM_H
#define SPREADSHEETQTWIDGET_MINIMUM_H

#include "Operation.h"

class Minimum : public Operation {
public:
    explicit Minimum(Cell *opCell) : Operation(opCell){}
    void doOp() override;

};


#endif //SPREADSHEETQTWIDGET_MINIMUM_H
