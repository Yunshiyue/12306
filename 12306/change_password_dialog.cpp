#include "change_password_dialog.h"
#include "ui_changepassworddialog.h"

ChangePasswordDialog::ChangePasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswordDialog)
{
    ui->setupUi(this);
}

ChangePasswordDialog::~ChangePasswordDialog()
{
    delete ui;
}

void ChangePasswordDialog::on_sure_button_clicked()
{
    QString old_password = ui->old_password_edit->text();
    QString new_password = ui->new_password_edit->text();
    QString sure_password = ui->sure_password_edit->text();
    if (old_password == "" || new_password == "" || sure_password == "") {
        QMessageBox::critical(0, "警告", "不可为空！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    if (new_password != sure_password) {
        QMessageBox::critical(0, "警告", "两次输入密码不一致！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    QJsonObject send_json;
    send_json.insert("操作", CHANGE_PASSWORD);
    send_json.insert("用户名", TrainSocket::GetUsername());
    send_json.insert("原密码", old_password);
    send_json.insert("新密码", new_password);

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);

    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QMessageBox::information(0, "成功", "修改成功", QMessageBox::Ok | QMessageBox::Default, 0);
        close();
    }
    else
    {
        QMessageBox::critical(0, "失败", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
