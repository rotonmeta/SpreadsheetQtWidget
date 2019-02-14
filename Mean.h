//
// Created by osboxes on 2/14/19.
//

#ifndef SPREADSHEETQTWIDGET_MEAN_H
#define SPREADSHEETQTWIDGET_MEAN_H

#include "Operation.h"

class Mean : public Operation{
public:
    explicit Mean(Cell* opCell) : Operation(opCell){};
    void doOp() override;

};


#endif //SPREADSHEETQTWIDGET_MEAN_H
