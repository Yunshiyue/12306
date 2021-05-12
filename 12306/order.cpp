#include "order.h"
#include "ui_order.h"
#include "main_window.h"

Order::Order(MainWindow* main_window2, QWidget *parent) :
    QWidget(parent),main_window(main_window2),
    ui(new Ui::Order)
{
    ui->setupUi(this);

    ui->order_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->order_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->order_table->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->info_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->info_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->info_table->setSelectionMode(QAbstractItemView::SingleSelection);

}

Order::~Order()
{
    delete ui;

}

//搜索按钮
void Order::on_search_button_clicked()
{
    //UI前置工作
    ui->order_table->setRowCount(0);
    ui->info_table->setRowCount(0);
    ui->pay_button->setEnabled(false);
    ui->cancel_order_button->setEnabled(false);
    ui->cancel_ticket_button->setEnabled(false);
    ui->pay_ticket_button->setEnabled(false);
    ui->cancel_ticket_button->setEnabled(false);
    ui->change_ticket_button->setEnabled(false);

    QString order_type = ui->search_type_combo_box->currentText();
    QString username = TrainSocket::GetUsername();
    QJsonObject send_json {
        {"操作", SEARCH_ORDER},
        {"用户名", username},
        {"订单类型", order_type}
    };

    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QJsonArray orders = get_json.take("订单").toArray();
        if (orders.isEmpty())
        {
            QMessageBox::critical(0, "警告", "未找到订单", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
        ui->order_table->setRowCount(orders.size());
        for (int i = 0; i < orders.size(); i++)
        {
            QJsonObject order = orders.at(i).toObject();
            QString order_id = order.take("订单号").toString();
            QString order_time = order.take("订单时间").toString();
            QString order_status = order.take("订单状态").toString();
            double total_price = order.take("总价").toDouble();
            ui->order_table->setItem(i, 0, new QTableWidgetItem(order_id, 0));
            ui->order_table->setItem(i, 1, new QTableWidgetItem(order_time, 0));
            ui->order_table->setItem(i, 3, new QTableWidgetItem(order_status, 0));
            ui->order_table->setItem(i, 2, new QTableWidgetItem(QString::number(total_price), 0));
            if (order_status == "已完成")
            {
                ui->order_table->item(i, 3)->setBackgroundColor(QColor(78, 201, 176));
            }
            else if (order_status == "未付款")
            {
                ui->order_table->item(i, 3)->setBackgroundColor(QColor(253, 214, 96));
            }
            else if (order_status == "已取消")
            {
                ui->order_table->item(i, 3)->setBackgroundColor(QColor(239, 180, 191));
            }
        }
    }
    else
    {
        QMessageBox::critical(0, "警告", "查询失败", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

//点击订单
void Order::on_order_table_cellClicked(int row, int column)
{
    QString order_status = ui->order_table->item(row, 3)->text();
    if (order_status == "未付款")
    {
        ui->pay_button->setEnabled(true);
        ui->cancel_order_button->setEnabled(true);
    }
    else
    {
        ui->pay_button->setEnabled(false);
        ui->cancel_order_button->setEnabled(false);
    }

    ui->info_table->clearContents();
    ui->pay_ticket_button->setEnabled(false);
    ui->cancel_ticket_button->setEnabled(false);
    ui->change_ticket_button->setEnabled(false);

    QString order_id = ui->order_table->item(row, 0)->text();
    QJsonObject send_json {
        {"操作", ORDER_INFORMATION},
        {"订单号", order_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QJsonArray tickets = get_json.take("车票").toArray();
        ui->info_table->setRowCount(tickets.size());
        for (int i = 0; i < tickets.size(); i++)
        {
            QJsonObject ticket = tickets.at(i).toObject();
            QString name = ticket.value("姓名").toString();
            QString id_number = ticket.value("身份证号").toString();
            QString ticket_type = ticket.value("类型").toString();
            QString train_id = ticket.value("车次号").toString();
            QString departure_station = ticket.value("出发站").toString();
            QString arrival_station = ticket.value("到达站").toString();
            QString departure_date = ticket.value("出发日期").toString();
            int coach_id = ticket.value("车厢号").toInt();
            QString seat_id = ticket.value("座位号").toString();
            QString seat_type = ticket.value("座位类型").toString();
            double price = ticket.value("价格").toDouble();
            QString ticket_status = ticket.value("状态").toString();
            ui->info_table->setItem(i, 0, new QTableWidgetItem(name, 0));
            ui->info_table->setItem(i, 1, new QTableWidgetItem(id_number, 0));
            ui->info_table->setItem(i, 2, new QTableWidgetItem(ticket_type, 0));
            ui->info_table->setItem(i, 3, new QTableWidgetItem(train_id, 0));
            ui->info_table->setItem(i, 4, new QTableWidgetItem(departure_station, 0));
            ui->info_table->setItem(i, 5, new QTableWidgetItem(arrival_station, 0));
            ui->info_table->setItem(i, 6, new QTableWidgetItem(departure_date, 0));
            ui->info_table->setItem(i, 7, new QTableWidgetItem(QString::number(coach_id), 0));
            ui->info_table->setItem(i, 8, new QTableWidgetItem(seat_id, 0));
            ui->info_table->setItem(i, 9, new QTableWidgetItem(seat_type, 0));
            ui->info_table->setItem(i, 10, new QTableWidgetItem(QString::number(price), 0));
            ui->info_table->setItem(i, 11, new QTableWidgetItem(ticket_status, 0));
            if (ticket_status == "已完成")
            {
                ui->info_table->item(i, 11)->setBackgroundColor(QColor(78, 201, 176));
            }
            else if (ticket_status == "未付款")
            {
                ui->info_table->item(i, 11)->setBackgroundColor(QColor(253, 214, 96));
            }
            else if (ticket_status == "已取消" || ticket_status == "已退票")
            {
                ui->info_table->item(i, 11)->setBackgroundColor(QColor(239, 180, 191));
            }
            else if (ticket_status == "已改签")
            {
                ui->info_table->item(i, 11)->setBackgroundColor(QColor(111, 191, 173));
            }
        }
    }
    else
    {
        ui->info_table->clearContents();
    }
}

//取消订单
void Order::on_cancel_order_button_clicked()
{
    QString order_id = ui->order_table->item(ui->order_table->currentRow(), 0)->text();
    QJsonObject send_json {
        {"操作", CANCEL_ORDER},
        {"订单号", order_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QMessageBox::information(0, "成功", "取消订单成功", QMessageBox::Ok | QMessageBox::Default, 0);
        on_search_button_clicked();
    }
    else
    {
        QMessageBox::critical(0, "警告", "取消订单失败", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

//支付订单
void Order::on_pay_button_clicked()
{
    QString order_id = ui->order_table->item(ui->order_table->currentRow(), 0)->text();
    QJsonObject send_json {
        {"操作", PAY_ORDER},
        {"订单号", order_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QMessageBox::information(0, "成功", "支付成功", QMessageBox::Ok | QMessageBox::Default, 0);
        on_search_button_clicked();
    }
    else
    {
        QMessageBox::critical(0, "警告", "支付失败", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

//退票
void Order::on_cancel_ticket_button_clicked()
{
    QString order_id = ui->order_table->item(ui->order_table->currentRow(), 0)->text();
    QString id_number = ui->info_table->item(ui->info_table->currentRow(), 1)->text();
    QString train_id = ui->info_table->item(ui->info_table->currentRow(), 3)->text();
    QJsonObject send_json {
        {"操作", CANCEL_TICKET},
        {"订单号", order_id},
        {"身份证号", id_number},
        {"车次号", train_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QMessageBox::information(0, "成功", "退票成功", QMessageBox::Ok | QMessageBox::Default, 0);
        on_search_button_clicked();
    }
    else
    {
        QMessageBox::critical(0, "警告", "退票失败", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

void Order::on_info_table_cellClicked(int row, int column)
{
    QString order_status = ui->order_table->item(ui->order_table->currentRow(), 3)->text();
    QString ticket_status = ui->info_table->item(row, 11)->text();
    if (order_status == "未付款")
    {
        ui->pay_ticket_button->setEnabled(false);
        ui->cancel_ticket_button->setEnabled(false);
        ui->change_ticket_button->setEnabled(false);
    }
    else if (order_status == "已完成" && ticket_status == "未付款")
    {
        ui->pay_ticket_button->setEnabled(true);
        ui->cancel_ticket_button->setEnabled(false);
        ui->change_ticket_button->setEnabled(false);
    }
    else if (order_status == "已完成" && ticket_status == "已完成")
    {
        ui->pay_ticket_button->setEnabled(false);
        ui->cancel_ticket_button->setEnabled(true);
        ui->change_ticket_button->setEnabled(true);
    }
    else if (order_status == "已完成" && ticket_status == "已改签")
    {
        ui->pay_ticket_button->setEnabled(false);
        ui->cancel_ticket_button->setEnabled(true);
        ui->change_ticket_button->setEnabled(false);
    }
    else
    {
        ui->pay_ticket_button->setEnabled(false);
        ui->cancel_ticket_button->setEnabled(false);
        ui->change_ticket_button->setEnabled(false);
    }
}

//支付车票（改签后）
void Order::on_pay_ticket_button_clicked()
{
    QString order_id = ui->order_table->item(ui->order_table->currentRow(), 0)->text();
    QString id_number = ui->info_table->item(ui->info_table->currentRow(), 1)->text();
    QString train_id = ui->info_table->item(ui->info_table->currentRow(), 3)->text();
    QJsonObject send_json {
        {"操作", PAY_TICKET},
        {"订单号", order_id},
        {"身份证号", id_number},
        {"车次号", train_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QMessageBox::information(0, "成功", "支付成功", QMessageBox::Ok | QMessageBox::Default, 0);
        on_search_button_clicked();
    }
    else
    {
        QMessageBox::critical(0, "警告", "支付失败", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

void Order::on_change_ticket_button_clicked()
{
    QString order_id = ui->order_table->item(ui->order_table->currentRow(), 0)->text();

    QString name = ui->info_table->item(ui->info_table->currentRow(), 0)->text();
    QString id_number = ui->info_table->item(ui->info_table->currentRow(), 1)->text();
    QString ticket_type = ui->info_table->item(ui->info_table->currentRow(), 2)->text();
    QString old_train_id = ui->info_table->item(ui->info_table->currentRow(), 3)->text();
    QString old_deparutre_station = ui->info_table->item(ui->info_table->currentRow(), 4)->text();
    QString old_arrival_station = ui->info_table->item(ui->info_table->currentRow(), 5)->text();
    QString old_date = ui->info_table->item(ui->info_table->currentRow(), 6)->text();
    int old_caoch_id = ui->info_table->item(ui->info_table->currentRow(), 7)->text().toInt();
    QString old_seat_id = ui->info_table->item(ui->info_table->currentRow(), 8)->text();



    QJsonObject ticket_json {
        {"订单号", order_id},
        {"姓名", name},
        {"身份证号", id_number},
        {"类型", ticket_type},
        {"原车次号", old_train_id},
        {"原出发站", old_deparutre_station},
        {"原到达站", old_arrival_station},
        {"原日期", old_date},
        {"原车厢号", old_caoch_id},
        {"原座位号", old_seat_id},
    };
    main_window->ShowChangeTicketWidget(ticket_json);
}
