#include "add_passenger_dialog.h"
#include "ui_addpassengerdialog.h"

AddPassengerDialog::AddPassengerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPassengerDialog)
{
    ui->setupUi(this);
}

AddPassengerDialog::~AddPassengerDialog()
{
    delete ui;
}

void AddPassengerDialog::on_add_button_clicked()
{
    QString name = ui->name_edit->text();
    QString sex = ui->sex_combo_box->currentText();
    QString id_number = ui->id_number_edit->text();
    QString phone = ui->phone_edit->text();
    QString type = ui->passenger_type_combo_box->currentText();

    if (name.isEmpty() || id_number.isEmpty()) {
        QMessageBox::critical(0, "警告", "请完善信息", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    QJsonObject send_json {
        {"操作", ADD_PASSENGER},
        {"用户名", TrainSocket::GetUsername()},
        {"姓名", name},
        {"性别", sex},
        {"身份证号", id_number},
        {"手机号", phone},
        {"类型", type}
    };

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QMessageBox::information(0, "成功", "添加成功", QMessageBox::Ok | QMessageBox::Default, 0);
        close();
    }
    else
    {
        QMessageBox::critical(0, "失败", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
