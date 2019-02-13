//
// Created by osboxes on 2/13/19.
//

#include "Cell.h"
Cell::Cell(float value) : value(value){
    QString vStr = QString::number(this->value);
    this->setText(vStr);
}

void Cell::setValue(float value) {
    this->value = value;
    QString vStr = QString::number(this->value);
    this->setText(vStr);
    notify();
}

float Cell::getValue() {
    return this->value;
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

