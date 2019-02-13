//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_OPERATION_H
#define SPREADSHEETQTWIDGET_OPERATION_H

#include "Observer.h"
#include "Cell.h"

using namespace std;

class Operation : public Observer {
public:
    explicit Operation(Cell *opCell) : opCell(opCell){}
    void addCell(Cell *cell);
    void removeCell(Cell *cell);
    virtual void doOp() = 0;

    void update() override;

protected:
    list<Cell*> cells;
    Cell* opCell;


};


#endif //SPREADSHEETQTWIDGET_OPERATION_H
