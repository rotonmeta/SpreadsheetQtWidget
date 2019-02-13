//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_SUBJECT_H
#define SPREADSHEETQTWIDGET_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer *observer) = 0;
    virtual void unsubscribe(Observer *observer) = 0;
    virtual void notify() = 0;

    //virtual ~Subject() = 0;

};
#endif //SPREADSHEETQTWIDGET_SUBJECT_H
