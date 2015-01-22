#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H
#include <QWidget>
#include "Bike/wheel.h"
#include "Bike/frame.h"
#include "Bike/fork.h"
#include "Bike/bike.h"

class DisplayWidget : public QWidget
{
    Q_OBJECT
public:
    DisplayWidget(QWidget *parent = 0);
    DisplayWidget();
    ~DisplayWidget();
    void paint(QPainter &painter);
    void setFWheel(int x,int y);
    Bike bike;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // DISPLAYWIDGET_H
