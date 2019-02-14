//
// Created by osboxes on 2/13/19.
//

#include "Cell.h"
Cell::Cell(float value){
    QTableWidgetItem::setData(0, value);
}


void Cell::setData(int role, const QVariant &value) {
    QTableWidgetItem::setData(role, value);
    notify();
}

float Cell::getData() {
    return QTableWidgetItem::data(0).toFloat();
}

void Cell::notify() {
    for (auto itr : observers)
        itr->update();
}

void Cell::subscribe(Observer *observer) {
    observers.push_back(observer);
}

void Cell::unsubscribe(Observer *observer) {
    observers.remove(observer);
}



