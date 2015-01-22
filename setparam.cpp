#include "setparam.h"
#include "ui_setparam.h"
#include "mainwindow.h"

SetParam::SetParam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetParam)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(),this->geometry().height());
    this->setWindowModality(Qt::WindowModal);
}

SetParam::~SetParam()
{
    delete ui;
}

void SetParam::setParameterKey(std::string _key){
    this->parameterKey=_key;
}

void SetParam::setLabel(QString txt){
    ui->label->setText(txt);
}

void SetParam::on_buttonBox_accepted()
{
    int val;
    val=ui->spinBox->text().toInt();
    if(parameterKey=="fWheel"){
    }
}
