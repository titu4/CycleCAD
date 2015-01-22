#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "TrailCalculator/calculator.h"
#include <QMouseEvent>
#include "setparam.h"
#include "displaywidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(),this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCalculator_triggered()
{
    Calculator calc;
    calc.show();
    calc.exec();
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    int mX,mY;
    mX=event->pos().x()*2-334;
    mY=event->pos().y()*2-1000;

    if(ui->centralWidget->bike.fWheel.match(mX,mY)){
        SetParam *uiSetParam=new SetParam(this);
        uiSetParam->setLabel("fWheel");
        uiSetParam->show();
    }
    if(ui->centralWidget->bike.rWheel.match(mX,mY)){
        SetParam *uiSetParam=new SetParam(this);
        uiSetParam->setLabel("rWheel");
        uiSetParam->show();
    }
        //ui->centralWidget->setFWheel(event->pos().x()*2-334,event->pos().y()*2-1000);
}
