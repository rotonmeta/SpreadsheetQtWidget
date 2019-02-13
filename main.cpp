#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/qheaderview.h>
#include "Cell.h"

int main(int argc, char **argv) {

    QApplication app(argc, argv);

    QTableWidget *table = new QTableWidget(4, 5);
    table->show();

    return app.exec();

}