#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

//注册按钮
void Register::on_register_button_clicked()
{
    QString username = ui->username_edit->text();
    QString password = ui->password_edit->text();
    QString password2 = ui->password_edit2->text();
    QString name = ui->name->text();
    QString sex = ui->sex_comboBox->currentText();
    QString id_number = ui->id_number_edit->text();
    QString phone = ui->phone_edit->text();
    QString email = ui->email_edit->text();


    //矫正信息
    //检查是否有空值
    if (username.isEmpty() || password.isEmpty() || password2.isEmpty() ||
            name.isEmpty() || id_number.isEmpty() ||
            phone.isEmpty() || email.isEmpty()) {
        QMessageBox::critical(0, "警告", "请完善信息！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    //检查用户名
    if (!(username.indexOf(" ") == -1)) {
        QMessageBox::critical(0, "警告", "用户名不可包含空格！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    //检查邮箱合法
    QRegExp email_pattern("[0-9a-zA-Z_.-]+[@][0-9a-zA-Z_.-]+([.][a-zA-Z]+){1,2}");
    if (!email.contains(email_pattern)) {
        QMessageBox::critical(0, "警告", "请正确输入邮箱！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    //检查身份证号
    /*
    QRegExp id_number_pattern("^\d{17}[][0-9X]$");
    if (!id_number.contains(id_number_pattern)) {
        QMessageBox::critical(0, "警告", "请正确输入身份证号！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    */
    //检查两次输入密码
    if (password != password2) {
        QMessageBox::critical(0, "警告", "两次输入密码不一致！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }


    //准备数据
    QJsonObject userinfo;
    userinfo.insert("操作", operation::REGISTER);
    userinfo.insert("用户名", username);
    userinfo.insert("密码", password);
    userinfo.insert("姓名", name);
    userinfo.insert("性别", sex);
    userinfo.insert("身份证号", id_number);
    userinfo.insert("手机号", phone);
    userinfo.insert("邮箱", email);

    //发送数据并接收消息
    TrainSocket* tcpSocket = TrainSocket::GetSocket();
    QJsonObject message_json = tcpSocket->sendData(userinfo);

    //接受消息
    if (message_json.take("消息").toString() == "成功") {
        QMessageBox::information(0, "成功", "注册成功", QMessageBox::Ok | QMessageBox::Default, 0);
    }
    else {
        QMessageBox::critical(0, "警告", "用户名重复！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
