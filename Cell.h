//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_CELL_H
#define SPREADSHEETQTWIDGET_CELL_H

#include "Subject.h"
#include <QtWidgets/QTableWidgetItem>
using namespace std;

class Cell : public Subject, public QTableWidgetItem{
public:
    explicit Cell(float value=0);
    void setData(int role, const QVariant &value) override;
    float getData();

    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
    void notify() override;


private:
    list<Observer*> observers;
};


#endif //SPREADSHEETQTWIDGET_CELL_H
