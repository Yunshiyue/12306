#include "change_passenger_dialog.h"
#include "ui_changepassengerdialog.h"

ChangePassengerDialog::ChangePassengerDialog(QString id, QString name, QString sex,
                                 QString phone, QString type, QWidget *parent) :
    QDialog(parent), id_number(id),
    ui(new Ui::ChangePassenger)
{
    ui->setupUi(this);
    ui->name_edit->setText(name);
    ui->sex_edit->setText(sex);
    ui->id_number_edit->setText(id);
    ui->phone_edit->setText(phone);
    ui->type_combo_box->setCurrentText(type);
}

ChangePassengerDialog::~ChangePassengerDialog()
{
    delete ui;
}

//确认修改
void ChangePassengerDialog::on_pushButton_clicked()
{
    QString phone = ui->phone_edit->text();
    QString type = ui->type_combo_box->currentText();

    QString username = TrainSocket::GetUsername();

    QJsonObject send_json {
        {"操作", CHANGE_PASSENGER},
        {"用户名", username},
        {"身份证号", id_number},
        {"手机号", phone},
        {"类型", type}
    };

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QMessageBox::information(0, "成功", "修改成功", QMessageBox::Ok | QMessageBox::Default, 0);
        close();
    }
    else
    {
        QMessageBox::critical(0, "修改失败", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
