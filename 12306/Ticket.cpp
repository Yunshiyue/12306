#include "ticket.h"
#include "ui_ticket.h"
#include "main_window.h"

Ticket::Ticket(MainWindow* main_window2, QWidget *parent) :
    QWidget(parent), main_window(main_window2),
    ui(new Ui::Ticket)
{
    ui->setupUi(this);
    ui->station_station_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->station_station_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->station_station_widget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->passenger_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_widget->setSelectionMode(QAbstractItemView::SingleSelection);
}

Ticket::Ticket(QJsonObject ticket2, QWidget *parent) :
    QWidget(parent), old_ticket(ticket2),
    ui(new Ui::Ticket)
{
    ui->setupUi(this);
    ui->station_station_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->station_station_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->station_station_widget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->passenger_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_widget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->choose_passenger_button->setEnabled(false);

    //设置联系人表格
    ui->passenger_widget->setRowCount(1);
    QString name = old_ticket.value("姓名").toString();
    QString type = old_ticket.value("类型").toString();
    QString id_number = old_ticket.value("身份证号").toString();
    ui->passenger_widget->setItem(0, 0, new QTableWidgetItem(name, 0));
    ui->passenger_widget->setItem(0, 1, new QTableWidgetItem(id_number, 0));
    ui->passenger_widget->setItem(0, 2, new QTableWidgetItem(type, 0));
}

Ticket::~Ticket()
{
    delete ui;
}

//站站搜索按钮
void Ticket::on_search_button_clicked()
{
    clear();
    ui->station_station_widget->setRowCount(0);
    ClearSeat();

    QString departure_station = ui->search_departure_edit->text();
    QString arrival_station = ui->search_arrival_edit->text();
    QString date = ui->search_date->selectedDate().toString("yyyy-MM-dd");
    if (departure_station.isEmpty() || arrival_station.isEmpty()) {
        QMessageBox::critical(0, "警告", "不可为空", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    ui->date_label->setText(date);

    QJsonObject send_json {
        {"操作", STATION_STATION},
        {"出发站", departure_station},
        {"到达站", arrival_station},
        {"日期", date}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QJsonArray trains = get_json.take("车次").toArray();
        ui->station_station_widget->setRowCount(trains.size());
        for (int i = 0; i < trains.size(); i++) {
            QJsonObject train = trains.at(i).toObject();
            QString train_id = train.take("车次号").toString();

            QString departure_station = train.take("出发站").toString();
            QString departure_time = train.take("出发时间").toString();
            int departure_day = train.take("出发日").toInt();

            QString arrival_station = train.take("到达站").toString();
            QString arrival_time = train.take("到达时间").toString();
            int arrival_day = train.take("到达日").toInt();

            QString time_interval = TimeInterval(departure_time, arrival_time, arrival_day-departure_day);

            QJsonObject seat_count = train.take("余票").toObject();
            int shangwu_count = seat_count.take("商务").toInt();
            int yideng_count = seat_count.take("一等").toInt();
            int erdeng_count = seat_count.take("二等").toInt();

            ui->station_station_widget->setItem(i, 0, new QTableWidgetItem(train_id, 0));
            ui->station_station_widget->setItem(i, 1, new QTableWidgetItem(departure_station, 0));
            ui->station_station_widget->setItem(i, 2, new QTableWidgetItem(departure_time.left(5), 0));
            ui->station_station_widget->setItem(i, 3, new QTableWidgetItem(arrival_station, 0));
            ui->station_station_widget->setItem(i, 4, new QTableWidgetItem(arrival_time.left(5), 0));
            ui->station_station_widget->setItem(i, 5, new QTableWidgetItem(time_interval, 0));
            ui->station_station_widget->setItem(i, 6, new QTableWidgetItem(QString::number(shangwu_count), 0));
            ui->station_station_widget->setItem(i, 7, new QTableWidgetItem(QString::number(yideng_count), 0));
            ui->station_station_widget->setItem(i, 8, new QTableWidgetItem(QString::number(erdeng_count), 0));
        }
    }
    else if (message == "换乘" && ui->choose_passenger_button->isEnabled()) {
        int reply = QMessageBox::question(this, "提示", "无直达车次，是否换乘？", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok);
        if (reply == QMessageBox::Ok) {
            main_window->ShowTransferWidget(send_json);
        }
    }
    else {
        QMessageBox::critical(0, "警告", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

void Ticket::on_station_station_widget_cellClicked(int row, int column)
{
    ui->ticket_train_edit->setText(ui->station_station_widget->item(row, 0)->text());
    ui->ticket_departure_edit->setText(ui->station_station_widget->item(row, 1)->text());
    ui->ticket_departure_time_edit->setText(ui->station_station_widget->item(row, 2)->text());
    ui->ticket_arrival_edit->setText(ui->station_station_widget->item(row, 3)->text());
    ui->ticket_arrival_time_edit->setText(ui->station_station_widget->item(row, 4)->text());
}

void Ticket::clear()
{
    ui->ticket_train_edit->clear();
    ui->ticket_departure_edit->clear();
    ui->ticket_departure_time_edit->clear();
    ui->ticket_arrival_edit->clear();
    ui->ticket_arrival_time_edit->clear();
    ui->station_station_widget->clearContents();
    ui->date_label->clear();
}

void Ticket::ClearSeat()
{
    ui->A1->setChecked(false);
    ui->B1->setChecked(false);
    ui->C1->setChecked(false);
    ui->D1->setChecked(false);
    ui->F1->setChecked(false);
    ui->A2->setChecked(false);
    ui->B2->setChecked(false);
    ui->C2->setChecked(false);
    ui->D2->setChecked(false);
    ui->F2->setChecked(false);
}

bool Ticket::CanSelectSeat()
{
    int selected_num = 0;
    if (ui->A1->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->B1->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->C1->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->D1->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->F1->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->A2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->B2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->C2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->D2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->F2->checkState() == Qt::Checked) {
        selected_num++;
    }
    if (selected_num <= ui->passenger_widget->rowCount()) {
        return true;
    }
    return false;
}

QJsonObject Ticket::GetSeat()
{
    QJsonArray first_line;
    QJsonArray second_line;
    if (ui->A1->checkState() == Qt::Checked) {
        first_line.append("A");
    }
    if (ui->A2->checkState() == Qt::Checked) {
        second_line.append("A");
    }
    if (ui->B1->checkState() == Qt::Checked) {
        first_line.append("B");
    }
    if (ui->B2->checkState() == Qt::Checked) {
        second_line.append("B");
    }
    if (ui->C1->checkState() == Qt::Checked) {
        first_line.append("C");
    }
    if (ui->C2->checkState() == Qt::Checked) {
        second_line.append("C");
    }
    if (ui->D1->checkState() == Qt::Checked) {
        first_line.append("D");
    }
    if (ui->D2->checkState() == Qt::Checked) {
        second_line.append("D");
    }
    if (ui->F1->checkState() == Qt::Checked) {
        first_line.append("F");
    }
    if (ui->F2->checkState() == Qt::Checked) {
        second_line.append("F");
    }
    QJsonObject seats;
    if (first_line.isEmpty())
    {
        first_line = second_line;
        seats.insert("第一排", first_line);
        return seats;
    }
    if (!second_line.isEmpty())
    {
        seats.insert("第一排", first_line);
        seats.insert("第二排", second_line);
    }
    else
    {
        seats.insert("第一排", first_line);
    }
    return seats;
}

QString Ticket::TimeInterval(QString time1, QString time2, int day)
{
    int time1_minute = time1.mid(0, 2).toInt()*60 + time1.mid(3, 2).toInt();
    int time2_minute = time2.mid(0, 2).toInt()*60 + time2.mid(3, 2).toInt() + day*24*60;
    if (time2_minute < time1_minute) {
        time2_minute += 24*60;
    }

    int interval_minute = time2_minute - time1_minute;
    int hour = interval_minute / 60;
    int minute = interval_minute % 60;
    QString interval;
    if (hour == 0) {
        interval = QString::number(minute) + "分";
    }
    else {
        interval = QString::number(hour) + "时" + QString::number(minute) + "分";
    }
    return interval;
}

//选择联系人
void Ticket::on_choose_passenger_button_clicked()
{
    ui->passenger_widget->clearContents();
    ClearSeat();

    QString username = TrainSocket::GetUsername();
    QJsonObject send_json {
        {"操作", LOAD_PASSENGER},
        {"用户名", username}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    ChoosePassengerDialog* choose_passenger_dialog = new ChoosePassengerDialog(get_json);
    choose_passenger_dialog->exec();
    QJsonArray passengers = choose_passenger_dialog->GetPassenger();
    delete choose_passenger_dialog;

    ui->passenger_widget->setRowCount(passengers.size());
    for (int i = 0; i < passengers.size(); i++) {
        QJsonObject passenger = passengers.at(i).toObject();
        QString name = passenger.take("姓名").toString();
        QString id_number = passenger.take("身份证号").toString();
        QString type = passenger.take("类型").toString();
        ui->passenger_widget->setItem(i, 0, new QTableWidgetItem(name, 0));
        ui->passenger_widget->setItem(i, 1, new QTableWidgetItem(id_number, 0));
        ui->passenger_widget->setItem(i, 2, new QTableWidgetItem(type, 0));
    }
}

void Ticket::on_seat_type_combo_box_currentTextChanged(const QString &seat_type)
{
    if (seat_type == "二等") {
        ui->B1->setEnabled(true);
        ui->B2->setEnabled(true);
        ui->D1->setEnabled(true);
        ui->D2->setEnabled(true);
    }
    else if(seat_type == "一等") {
        ui->B1->setEnabled(false);
        ui->B2->setEnabled(false);
        ui->D1->setEnabled(true);
        ui->D2->setEnabled(true);
    }
    else if(seat_type == "商务") {
        ui->B1->setEnabled(false);
        ui->B2->setEnabled(false);
        ui->D1->setEnabled(false);
        ui->D2->setEnabled(false);
    }
    ClearSeat();
}

void Ticket::on_A2_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->A2->setChecked(true);
    }
    else {
        ui->A2->setChecked(false);
    }
}

void Ticket::on_B2_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->B2->setChecked(true);
    }
    else {
        ui->B2->setChecked(false);
    }
}

void Ticket::on_C2_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->C2->setChecked(true);
    }
    else {
        ui->C2->setChecked(false);
    }
}

void Ticket::on_D2_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->D2->setChecked(true);
    }
    else {
        ui->D2->setChecked(false);
    }
}

void Ticket::on_F2_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->F2->setChecked(true);
    }
    else {
        ui->F2->setChecked(false);
    }
}

void Ticket::on_A1_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->A1->setChecked(true);
    }
    else {
        ui->A1->setChecked(false);
    }
}

void Ticket::on_B1_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->B1->setChecked(true);
    }
    else {
        ui->B1->setChecked(false);
    }
}

void Ticket::on_C1_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->C1->setChecked(true);
    }
    else {
        ui->C1->setChecked(false);
    }
}

void Ticket::on_D1_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->D1->setChecked(true);
    }
    else {
        ui->D1->setChecked(false);
    }
}

void Ticket::on_F1_toggled(bool checked)
{
    if (CanSelectSeat() && checked) {
        ui->F1->setChecked(true);
    }
    else {
        ui->F1->setChecked(false);
    }
}

//提交订单
void Ticket::on_submit_order_button_clicked()
{
    //需要提供的信息：车次号、日期、出发站、到达站、用户名、乘车人、座位类型、座位
    QString train_id = ui->ticket_train_edit->text();
    if (train_id == "") {
        QMessageBox::critical(0, "警告", "请选择车次！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    if (ui->passenger_widget->rowCount() == 0) {
        QMessageBox::critical(0, "警告", "请选择联系人！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    QString date = ui->date_label->text();
    QString departure_station = ui->ticket_departure_edit->text();
    QString arrival_station = ui->ticket_arrival_edit->text();
    QString username = TrainSocket::GetUsername();
    QJsonArray passengers;
    for (int i = 0; i < ui->passenger_widget->rowCount(); i++) {
        QString id_number = ui->passenger_widget->item(i, 1)->text();
        QString name = ui->passenger_widget->item(i, 0)->text();
        QString type = ui->passenger_widget->item(i, 2)->text();
        QJsonObject passenger {
            {"姓名", name},
            {"身份证号", id_number},
            {"类型", type}
        };
        passengers.append(passenger);
    }
    QString seat_type = ui->seat_type_combo_box->currentText();
    //判断余票
    if (seat_type == "二等")
    {
        int current_row = ui->station_station_widget->currentRow();
        int left_seat = ui->station_station_widget->item(current_row, 8)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type == "一等")
    {
        int current_row = ui->station_station_widget->currentRow();
        int left_seat = ui->station_station_widget->item(current_row, 7)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type == "商务")
    {
        int current_row = ui->station_station_widget->currentRow();
        int left_seat = ui->station_station_widget->item(current_row, 6)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    QJsonObject seats = GetSeat();
    QJsonObject ticket_json {
        {"车次号", train_id},
        {"日期", date},
        {"出发站", departure_station},
        {"到达站", arrival_station},
        {"座位类型", seat_type},
        {"选座", seats},
    };
    QJsonArray tickets;
    tickets.append(ticket_json);
    QJsonObject send_json {
        {"用户名", username},
        {"车票", tickets},
        {"乘车人", passengers}
    };
//    QJsonObject send_json{
//        {"用户名", username},
//        {"车次号", train_id},
//        {"日期", date},
//        {"出发站", departure_station},
//        {"到达站", arrival_station},
//        {"乘车人", passengers},
//        {"座位类型", seat_type},
//        {"选座", seats},
//    };
    //提交订单
    QString operation_type = "订票";
    if (!ui->choose_passenger_button->isEnabled())
    {
        send_json.insert("操作", CHANGE_TICKET);
        send_json.insert("原车票", old_ticket);
        operation_type = "改签";
    }
    else
    {
        send_json.insert("操作", SUBMIT_ORDER);

    }
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        OrderDialog* order_dialog = new OrderDialog(operation_type, get_json);
        order_dialog->exec();
        delete order_dialog;
        clear();
        ui->station_station_widget->setRowCount(0);
        ClearSeat();
        if (operation_type == "改签")
        {
            close();
            delete this;
        }
    }
    else {
        QMessageBox::critical(0, "警告", "订单提交失败！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
