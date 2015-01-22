#ifndef SETPARAM_H
#define SETPARAM_H

#include <QDialog>

namespace Ui {
class SetParam;
}

class SetParam : public QDialog
{
    Q_OBJECT

public:
    explicit SetParam(QWidget *parent = 0);
    ~SetParam();
    void setParameterKey(std::string _key);
    void setLabel(QString txt);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::SetParam *ui;
    std::string parameterKey;
};

#endif // SETPARAM_H
