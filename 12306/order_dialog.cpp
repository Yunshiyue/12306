#include "order_dialog.h"
#include "ui_orderdialog.h"

OrderDialog::OrderDialog(QString type2, QJsonObject order_info, QWidget *parent) :
    QDialog(parent), type(type2),
    ui(new Ui::OrderDialog)
{
    ui->setupUi(this);
    QIcon icon(":/new/icon/icon/railway.png");
    setWindowIcon(icon);
    setWindowTitle("订单");
    ui->passenger_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_table->setSelectionMode(QAbstractItemView::SingleSelection);

    //提取
    QString order_id = order_info.value("订单号").toString();
    QString order_time = order_info.value("订单时间").toString();
    QJsonArray orders = order_info.value("车票").toArray();
    QString order_status = order_info.value("订单状态").toString();
    double total_price = order_info.value("总价").toDouble();

    //信息
    ui->order_id_edit->setText(order_id);
    ui->order_time_edit->setText(order_time);
    ui->order_status_edit->setText(order_status);
    ui->total_price_edit->setText(QString::number(total_price));

    //车票
    ui->passenger_table->setRowCount(orders.size());
    for (int i = 0; i < orders.size(); i++)
    {
        QJsonObject current_ticket = orders.at(i).toObject();

        QString id_number = current_ticket.value("身份证号").toString();
        QString name = current_ticket.value("姓名").toString();
        QString type = current_ticket.value("类型").toString();
        QString train_id = current_ticket.value("车次号").toString();
        QString departure_station = current_ticket.value("出发站").toString();
        QString arrival_station = current_ticket.value("到达站").toString();
        QString departure_date = current_ticket.value("出发日期").toString();
        int coach_id = current_ticket.value("车厢号").toInt();
        QString seat_id = current_ticket.value("座位号").toString();
        QString seat_type = current_ticket.value("座位类型").toString();
        double price = current_ticket.value("价格").toDouble();
        QString ticket_status = current_ticket.value("状态").toString();

        ui->passenger_table->setItem(i, 0, new QTableWidgetItem(name, 0));
        ui->passenger_table->setItem(i, 1, new QTableWidgetItem(id_number, 0));
        ui->passenger_table->setItem(i, 2, new QTableWidgetItem(type, 0));
        ui->passenger_table->setItem(i, 3, new QTableWidgetItem(train_id, 0));
        ui->passenger_table->setItem(i, 4, new QTableWidgetItem(departure_station, 0));
        ui->passenger_table->setItem(i, 5, new QTableWidgetItem(arrival_station, 0));
        ui->passenger_table->setItem(i, 6, new QTableWidgetItem(departure_date, 0));
        ui->passenger_table->setItem(i, 7, new QTableWidgetItem(QString::number(coach_id), 0));
        ui->passenger_table->setItem(i, 8, new QTableWidgetItem(seat_id, 0));
        ui->passenger_table->setItem(i, 9, new QTableWidgetItem(seat_type, 0));
        ui->passenger_table->setItem(i, 10, new QTableWidgetItem(QString::number(price), 0));
        ui->passenger_table->setItem(i, 11, new QTableWidgetItem(ticket_status, 0));

    }
}

OrderDialog::~OrderDialog()
{
    delete ui;
}

void OrderDialog::on_later_pay_button_clicked()
{
    QMessageBox::information(0, "提示", "您可以在订单页面进行付款", QMessageBox::Ok | QMessageBox::Default, 0);
    close();
}

void OrderDialog::on_pay_button_clicked()
{
    QString order_id = ui->order_id_edit->text();
    QJsonObject send_json;
    send_json.insert("订单号", order_id);
    if (type == "订票")
    {
        send_json.insert("操作", PAY_ORDER);
    }
    else if (type == "改签")
    {
        send_json.insert("操作", PAY_TICKET);
        QString train_id = ui->passenger_table->item(0, 3)->text();
        QString id_number = ui->passenger_table->item(0, 1)->text();
        send_json.insert("车次号", train_id);
        send_json.insert("身份证号", id_number);
    }
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QMessageBox::information(0, "成功", "支付成功", QMessageBox::Ok | QMessageBox::Default, 0);
        close();
    }
    else
    {
        QMessageBox::critical(0, "失败", "支付失败，请重试！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
