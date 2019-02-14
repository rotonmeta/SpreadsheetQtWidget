//
// Created by osboxes on 2/13/19.
//

#ifndef SPREADSHEETQTWIDGET_OBSERVER_H
#define SPREADSHEETQTWIDGET_OBSERVER_H

class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};
#endif //SPREADSHEETQTWIDGET_OBSERVER_H
