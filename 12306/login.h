#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class Login;
}

class MainWindow;

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(MainWindow*, QWidget *parent = 0);
    ~Login();

private slots:
    void on_login_button_clicked();

private:
    Ui::Login *ui;
    MainWindow* main_window;
};

#endif // LOGIN_H
