#include "information.h"
#include "ui_information.h"

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);

    //配置乘车人表格
    ui->passenger_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_table->setSelectionMode(QAbstractItemView::SingleSelection);
    LoadInformation();
    LoadPassenger();
}

Information::~Information()
{
    delete ui;
}

//修改信息按钮
void Information::on_update_button_clicked()
{
    ui->update_button->setEnabled(false);
    ui->sure_button->setEnabled(true);
    ui->cancel_button->setEnabled(true);
    ui->phone_edit->setReadOnly(false);
    ui->email_edit->setReadOnly(false);
}

//确定按钮
void Information::on_sure_button_clicked()
{
    QString phone_number = ui->phone_edit->text();
    QString email = ui->email_edit->text();

    QJsonObject send_json;
    send_json.insert("操作", UPDATE_INFORMATION);
    send_json.insert("用户名", TrainSocket::GetUsername());
    send_json.insert("手机号", phone_number);
    send_json.insert("邮箱", email);

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QMessageBox::information(0, "成功", "修改成功", QMessageBox::Ok | QMessageBox::Default, 0);

        ui->update_button->setEnabled(true);
        ui->sure_button->setEnabled(false);
        ui->cancel_button->setEnabled(false);

        ui->phone_edit->setReadOnly(true);
        ui->email_edit->setReadOnly(true);
    }
    else {
        QMessageBox::critical(0, "警告", "修改失败！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

//取消按钮
void Information::on_cancel_button_clicked()
{
    LoadInformation();
    ui->update_button->setEnabled(true);
    ui->sure_button->setEnabled(false);
    ui->cancel_button->setEnabled(false);

    ui->phone_edit->setReadOnly(true);
    ui->email_edit->setReadOnly(true);
}

//修改密码按钮
void Information::on_update_password_button_clicked()
{
    ChangePasswordDialog* change_password_dialog = new ChangePasswordDialog();
    change_password_dialog->exec();
    delete change_password_dialog;
}

void Information::on_passenger_table_cellClicked(int row, int column)
{
    ui->change_passenger_button->setEnabled(true);
    ui->delete_passenger_button->setEnabled(true);
}

void Information::LoadInformation() 
{
    //查询个人信息
    QJsonObject op_json;
    op_json.insert("操作", operation::INFORMATION);
    op_json.insert("用户名", TrainSocket::GetUsername());
    QJsonObject info_json = TrainSocket::GetSocket()->sendData(op_json);

    //在UI加入个人信息
    ui->username_edit->setText(TrainSocket::GetUsername());

    QString name = info_json.take("姓名").toString();
    ui->name_edit->setText(name);

    QString sex = info_json.take("性别").toString();
    ui->sex_edit->setText(sex);

    QString id_number = info_json.take("身份证号").toString();
    ui->id_number_edit->setText(id_number);

    QString phone_number = info_json.take("手机号").toString();
    ui->phone_edit->setText(phone_number);

    QString email = info_json.take("邮箱").toString();
    ui->email_edit->setText(email);
}

void Information::LoadPassenger()
{
    ui->passenger_table->clearContents();
    ui->passenger_table->setRowCount(0);

    QJsonObject send_json;
    send_json.insert("操作", LOAD_PASSENGER);
    send_json.insert("用户名", TrainSocket::GetUsername());

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);

    QJsonArray passengers = get_json.take("乘车人").toArray();
    ui->passenger_table->setRowCount(passengers.count());
    
    for (int i = 0; i < passengers.count(); i++) {
        QJsonObject passenger = passengers.at(i).toObject();
        QString id_number = passenger.take("身份证号").toString();
        QString name = passenger.take("姓名").toString();
        QString sex = passenger.take("性别").toString();
        QString phone_number = passenger.take("手机号").toString();
        QString passenger_type = passenger.take("类型").toString();
        
        ui->passenger_table->setItem(i, 0, new QTableWidgetItem(name, 0));
        ui->passenger_table->setItem(i, 1, new QTableWidgetItem(sex, 0));
        ui->passenger_table->setItem(i, 2, new QTableWidgetItem(id_number, 0));
        ui->passenger_table->setItem(i, 3, new QTableWidgetItem(phone_number, 0));
        ui->passenger_table->setItem(i, 4, new QTableWidgetItem(passenger_type, 0));
    }
}

//修改联系人
void Information::on_change_passenger_button_clicked()
{
    int current_row = ui->passenger_table->currentRow();
    QString name = ui->passenger_table->item(current_row, 0)->text();
    QString sex = ui->passenger_table->item(current_row, 1)->text();
    QString id_number = ui->passenger_table->item(current_row, 2)->text();
    QString phone = ui->passenger_table->item(current_row, 3)->text();
    QString type = ui->passenger_table->item(current_row, 4)->text();

    ChangePassengerDialog* change_passenger_dialog =
            new ChangePassengerDialog(id_number, name, sex, phone ,type, this);
    change_passenger_dialog->exec();
    delete change_passenger_dialog;
    LoadPassenger();
}

//删除联系人
void Information::on_delete_passenger_button_clicked()
{
    int reply = QMessageBox::question(this, "警告", "确认删除？", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok);
    if (reply == QMessageBox::Ok) {
        int delete_number = ui->passenger_table->currentRow();
        QString id_number = ui->passenger_table->item(delete_number, 2)->text();

        QJsonObject send_json {
            {"操作", DELETE_PASSENGER},
            {"用户名", TrainSocket::GetUsername()},
            {"身份证号", id_number}
        };

        QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
        QString message = get_json.take("消息").toString();
        if (message == "成功") {
            QMessageBox::information(0, "成功", "删除成功", QMessageBox::Ok | QMessageBox::Default, 0);
            LoadPassenger();
        }
        else
        {
            QMessageBox::critical(0, "删除失败", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
        }
    }
}

//添加联系人
void Information::on_add_passenger_button_clicked()
{
    AddPassengerDialog* add_passenger_dialog = new AddPassengerDialog();
    add_passenger_dialog->exec();
    delete add_passenger_dialog;

    LoadPassenger();
}
