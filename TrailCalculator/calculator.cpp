#include "calculator.h"
#include "ui_calculator.h"
#include "Bike/bike.h"


Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_clicked()
{
    Bike bike;
    bike.frame.setHTAngle(ui->doubleSpinBox->text().toDouble());
    bike.fork.setRake(ui->spinBox_2->text().toDouble());
    bike.fWheel.setDiam(ui->comboBox->currentText().toDouble());
    bike.fWheel.setWide(ui->spinBox->text().toDouble());

    ui->lineEdit_trail->setText(QString::number(bike.getTrail()));
    ui->lineEdit_mTrail->setText(QString::number(bike.getMechTrail()));
    ui->lineEdit_flop->setText(QString::number(bike.getFlop()));

}
