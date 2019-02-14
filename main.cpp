#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/qheaderview.h>
#include "Cell.h"
#include "Sum.h"
#include "Maximum.h"
#include "Minimum.h"

int main(int argc, char **argv) {

    QApplication app(argc, argv);

    auto *table = new QTableWidget(4, 6);

    Cell *c1 = new Cell(45.99);
    Cell *c2 = new Cell(187);
    Cell *c3 = new Cell(1233.928);

    table->setItem(0, 0, c1);
    table->setItem(1, 0, c2);
    table->setItem(2, 0, c3);

    Cell *sumC = new Cell();
    auto *sumOp = new Sum(sumC);
    sumOp->addCell(c1);
    sumOp->addCell(c2);
    sumOp->addCell(c3);
    table->setItem(0, 1, sumC);

    Cell *minC = new Cell();
    auto *minOp = new Minimum(minC);
    minOp->addCell(c1);
    minOp->addCell(c2);
    minOp->addCell(c3);
    table->setItem(0, 2, minC);

    Cell *maxC = new Cell();
    auto *maxOp = new Maximum(maxC);
    maxOp->addCell(c1);
    maxOp->addCell(c2);
    maxOp->addCell(c3);
    table->setItem(0, 3, maxC);


    table->show();

    return app.exec();

}