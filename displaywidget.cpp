#include <QtWidgets>
#include "displaywidget.h"
#include "Bike/wheel.h"

DisplayWidget::DisplayWidget(QWidget *parent)
    : QWidget(parent)
{
//Rear Wheel
    bike.fWheel.setDiam(622);
    bike.fWheel.setWide(23);
    bike.fWheel.setX(1000);
    bike.fWheel.setY(0);
//Front Wheel
    bike.rWheel.setDiam(622);
    bike.rWheel.setWide(23);
    bike.rWheel.setX(0);
    bike.rWheel.setY(0);
//Frame
    //bb
    bike.frame.bb.setDia(36);
    bike.frame.bb.setA(400,60);
    int bbX,bbY;
    bike.frame.bb.getA(bbX,bbY);
    //ht
    bike.frame.ht.setA(780,-550);
    bike.frame.ht.setB(810,-450);
    //dt
    bike.frame.dt.setA(bbX,bbY);
    bike.frame.dt.setB(800,-480);
    //tt
    bike.frame.tt.setA(255,-535);
    bike.frame.tt.setB(785,-535);
    //st
    bike.frame.st.setA(bbX,bbY);
    bike.frame.st.setB(250,-550);
    //cs
    bike.frame.cs.setA(bike.rWheel.getX(),bike.rWheel.getY());
    bike.frame.cs.setB(bbX,bbY);
    //ss
    bike.frame.ss.setA(bike.rWheel.getX(),bike.rWheel.getY());
    bike.frame.ss.setB(275,-450);
//Fork
    bike.fork.leg.setA(820,-420);
    bike.fork.leg.setB(bike.fWheel.getX(),bike.fWheel.getY());
}

DisplayWidget::DisplayWidget()
{

}

DisplayWidget::~DisplayWidget()
{

}

void DisplayWidget::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    paint(painter);
    painter.end();
}

void DisplayWidget::paint(QPainter &painter)
{
    painter.setClipRect(QRect(0, 0, 1000, 1334));
    QPen pen;
    painter.scale(0.5,0.5);
    painter.translate(334,1000);
//Base Line
    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.drawLine(QPoint(-334,334),QPoint(1334,334));
//Wheels
    pen.setWidth(0);
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.drawEllipse(QPointF(bike.fWheel.getX(),bike.fWheel.getY()), bike.fWheel.getRealRadius(), bike.fWheel.getRealRadius());
    painter.drawEllipse(QPointF(bike.rWheel.getX(),bike.rWheel.getY()), bike.rWheel.getRealRadius(), bike.rWheel.getRealRadius());

//Frame
    pen.setColor(Qt::black);
    painter.setPen(pen);
    //HT
    int htAx,htAy,htBx,htBy;
    bike.frame.ht.getA(htAx,htAy);
    bike.frame.ht.getB(htBx,htBy);
    painter.drawLine(QPoint(htAx,htAy),QPoint(htBx,htBy));
    //DT
    int dtAx,dtAy,dtBx,dtBy;
    bike.frame.dt.getA(dtAx,dtAy);
    bike.frame.dt.getB(dtBx,dtBy);
    painter.drawLine(QPoint(dtAx,dtAy),QPoint(dtBx,dtBy));
    //TT
    int ttAx,ttAy,ttBx,ttBy;
    bike.frame.tt.getA(ttAx,ttAy);
    bike.frame.tt.getB(ttBx,ttBy);
    painter.drawLine(QPoint(ttAx,ttAy),QPoint(ttBx,ttBy));
    //ST
    int stAx,stAy,stBx,stBy;
    bike.frame.st.getA(stAx,stAy);
    bike.frame.st.getB(stBx,stBy);
    painter.drawLine(QPoint(stAx,stAy),QPoint(stBx,stBy));
    //CS
    int csAx,csAy,csBx,csBy;
    bike.frame.cs.getA(csAx,csAy);
    bike.frame.cs.getB(csBx,csBy);
    painter.drawLine(QPoint(csAx,csAy),QPoint(csBx,csBy));
    //CS
    int ssAx,ssAy,ssBx,ssBy;
    bike.frame.ss.getA(ssAx,ssAy);
    bike.frame.ss.getB(ssBx,ssBy);
    painter.drawLine(QPoint(ssAx,ssAy),QPoint(ssBx,ssBy));
    //Bottom Bracket
    int x,y,dia;
    bike.frame.bb.getA(x,y);
    dia=bike.frame.bb.getDia();
    painter.drawEllipse(QPointF(x,y), dia, dia);
//Fork
    int flAx,flAy,flBx,flBy;
    bike.fork.leg.getA(flAx,flAy);
    bike.fork.leg.getB(flBx,flBy);
    painter.drawLine(QPoint(flAx,flAy),QPoint(flBx,flBy));
}

void DisplayWidget::setFWheel(int x, int y){
    /*
    fWheel.setX(x);
    fWheel.setY(y);
    fWheel.setDiam(100);
    this->update();
*/
}
