//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_SUM_H
#define SPREADSHEETQTWIDGET_SUM_H

#import "Operation.h"

using namespace std;

class Sum : public Operation{
public:
    explicit Sum(Cell *opCell) : Operation(opCell) {}
    void doOp() override;
private:

};


#endif //SPREADSHEETQTWIDGET_SUM_H
