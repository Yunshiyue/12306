#include "login.h"
#include "ui_login.h"
#include "main_window.h"

Login::Login(MainWindow* mainwindow, QWidget *parent) :
    QWidget(parent), main_window(mainwindow),
    ui(new Ui::Login)
{
    ui->setupUi(this);


}

Login::~Login()
{
    delete ui;
}

//登陆按钮
void Login::on_login_button_clicked()
{
    QString username = ui->username_edit->text();
    QString password = ui->password_edit->text();
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::critical(0, "警告", "用户名或密码不可为空！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    //创建JSON
    QJsonObject userinfo;
    userinfo.insert("操作", operation::LOGIN);
    userinfo.insert("用户名", username);
    userinfo.insert("密码", password);

    //发送
    QJsonObject message_json = TrainSocket::GetSocket()->sendData(userinfo);

    //接受消息
    if (message_json.take("消息").toString() == "成功") {
        TrainSocket::SetUsername(username);
        QMessageBox::information(0, "成功", "登录成功", QMessageBox::Ok | QMessageBox::Default, 0);
        main_window->LoginSucceed();
        close();
    }
    else {
        QMessageBox::critical(0, "警告", "用户名或密码错误！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
