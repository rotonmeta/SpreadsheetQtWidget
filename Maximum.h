//
// Created by osboxes on 2/14/19.
//

#ifndef SPREADSHEETQTWIDGET_MAXIMUM_H
#define SPREADSHEETQTWIDGET_MAXIMUM_H

#include "Operation.h"

class Maximum : public Operation {
public:
    explicit Maximum(Cell *opCell) : Operation(opCell){}
    void doOp() override;

};


#endif //SPREADSHEETQTWIDGET_MAXIMUM_H
