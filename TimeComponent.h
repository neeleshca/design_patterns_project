#ifndef TIMECOMPONENT_H
#define TIMECOMPONENT_H

#include "Character.h"
#include <QObject>
class TimeComponent : public QObject
{
    Q_OBJECT
public:
    TimeComponent();
    void update(Character *);

public slots:
    void temp();

signals:
    void valueChanged(int newValue);


};

#endif // TIMECOMPONENT_H