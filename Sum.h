//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_SUM_H
#define SPREADSHEETQTWIDGET_SUM_H

#include "Operation.h"

using namespace std;

class Sum : public Operation{
public:
    explicit Sum(Cell *opCell) : Operation(opCell) {}
    void doOp() override;

};


#endif //SPREADSHEETQTWIDGET_SUM_H
