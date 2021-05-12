#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QMessageBox>
#include <regex>
#include <QRegExp>
#include "train_socket.h"

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_register_button_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
