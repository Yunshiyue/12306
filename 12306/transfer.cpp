#include "transfer.h"
#include "ui_transfer.h"

Transfer::Transfer(QJsonObject ticket_json, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Transfer)
{
    ui->setupUi(this);

    QString search_date = ticket_json.value("日期").toString();
    date = search_date;
    ui->date_label->setText(date);

    //乘车人表格
    ui->passenger_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_widget->setSelectionMode(QAbstractItemView::SingleSelection);

    //方案表格
    ui->transfer_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->transfer_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->transfer_table->setSelectionMode(QAbstractItemView::SingleSelection);

    //查询车票
    SearchTicket(ticket_json);
}

Transfer::~Transfer()
{
    delete ui;
}

void Transfer::SearchTicket(QJsonObject ticket_json)
{
    ticket_json.take("操作");
    ticket_json.insert("操作", TRANSFER);
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(ticket_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功")
    {
        QJsonArray transfer_ways = get_json.value("方案").toArray();
        //改表格
        ui->transfer_table->setRowCount(transfer_ways.size() * 2);
        for (int i = 0; i < transfer_ways.size(); i++)
        {
            QJsonObject current_way = transfer_ways.at(i).toObject();
            QJsonObject first_train = current_way.value("第一程").toObject();
            QJsonObject second_train = current_way.value("第二程").toObject();

            ui->transfer_table->setItem(2*i, 0, new QTableWidgetItem(QString::number(i+1), 0));

            //加第一程
            QString first_train_id = first_train.take("车次号").toString();

            QString first_departure_station = first_train.take("出发站").toString();
            QString first_departure_time = first_train.take("出发时间").toString();

            QString first_arrival_station = first_train.take("到达站").toString();
            QString first_arrival_time = first_train.take("到达时间").toString();

            QString first_time_interval = TimeInterval(first_departure_time, first_arrival_time);

            QJsonObject first_seat_count = first_train.take("余票").toObject();
            int first_shangwu_count = first_seat_count.take("商务").toInt();
            int first_yideng_count = first_seat_count.take("一等").toInt();
            int first_erdeng_count = first_seat_count.take("二等").toInt();

            ui->transfer_table->setItem(i*2, 1, new QTableWidgetItem(first_train_id, 0));
            ui->transfer_table->setItem(i*2, 2, new QTableWidgetItem(first_departure_station, 0));
            ui->transfer_table->setItem(i*2, 3, new QTableWidgetItem(first_departure_time.left(5), 0));
            ui->transfer_table->setItem(i*2, 4, new QTableWidgetItem(first_arrival_station, 0));
            ui->transfer_table->setItem(i*2, 5, new QTableWidgetItem(first_arrival_time.left(5), 0));
            ui->transfer_table->setItem(i*2, 6, new QTableWidgetItem(first_time_interval, 0));
            ui->transfer_table->setItem(i*2, 7, new QTableWidgetItem(QString::number(first_shangwu_count), 0));
            ui->transfer_table->setItem(i*2, 8, new QTableWidgetItem(QString::number(first_yideng_count), 0));
            ui->transfer_table->setItem(i*2, 9, new QTableWidgetItem(QString::number(first_erdeng_count), 0));

            //加第二程
            QString second_train_id = second_train.take("车次号").toString();

            QString second_departure_station = second_train.take("出发站").toString();
            QString second_departure_time = second_train.take("出发时间").toString();

            QString second_arrival_station = second_train.take("到达站").toString();
            QString second_arrival_time = second_train.take("到达时间").toString();

            QString second_time_interval = TimeInterval(second_departure_time, second_arrival_time);

            QJsonObject second_seat_count = second_train.take("余票").toObject();
            int second_shangwu_count = second_seat_count.take("商务").toInt();
            int second_yideng_count = second_seat_count.take("一等").toInt();
            int second_erdeng_count = second_seat_count.take("二等").toInt();

            ui->transfer_table->setItem(i*2 + 1, 1, new QTableWidgetItem(second_train_id, 0));
            ui->transfer_table->setItem(i*2 + 1, 2, new QTableWidgetItem(second_departure_station, 0));
            ui->transfer_table->setItem(i*2 + 1, 3, new QTableWidgetItem(second_departure_time.left(5), 0));
            ui->transfer_table->setItem(i*2 + 1, 4, new QTableWidgetItem(second_arrival_station, 0));
            ui->transfer_table->setItem(i*2 + 1, 5, new QTableWidgetItem(second_arrival_time.left(5), 0));
            ui->transfer_table->setItem(i*2 + 1, 6, new QTableWidgetItem(second_time_interval, 0));
            ui->transfer_table->setItem(i*2 + 1, 7, new QTableWidgetItem(QString::number(second_shangwu_count), 0));
            ui->transfer_table->setItem(i*2 + 1, 8, new QTableWidgetItem(QString::number(second_yideng_count), 0));
            ui->transfer_table->setItem(i*2 + 1, 9, new QTableWidgetItem(QString::number(second_erdeng_count), 0));

            //总历时
            int arrival_day = second_train.value("到达日").toInt();
            QString total_time_interval = TimeInterval(first_departure_time, second_arrival_time, arrival_day);
            ui->transfer_table->setItem(2*i, 10, new QTableWidgetItem(total_time_interval, 0));

            ui->transfer_table->setSpan(2 * i, 0, 2, 1);
            ui->transfer_table->setSpan(2 * i, 10, 2, 1);
        }
    }
    else
    {
        QMessageBox::critical(0, "警告", "没有换乘方案", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        close();
    }
}

QString Transfer::TimeInterval(QString time1, QString time2, int day)
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

void Transfer::ClearSeat1()
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

bool Transfer::CanSelectSeat1()
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

QJsonObject Transfer::GetSeat1()
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

void Transfer::ClearSeat2()
{
    ui->A1_2->setChecked(false);
    ui->B1_2->setChecked(false);
    ui->C1_2->setChecked(false);
    ui->D1_2->setChecked(false);
    ui->F1_2->setChecked(false);
    ui->A2_2->setChecked(false);
    ui->B2_2->setChecked(false);
    ui->C2_2->setChecked(false);
    ui->D2_2->setChecked(false);
    ui->F2_2->setChecked(false);
}

bool Transfer::CanSelectSeat2()
{
    int selected_num = 0;
    if (ui->A1_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->B1_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->C1_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->D1_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->F1_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->A2_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->B2_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->C2_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->D2_2->checkState() == Qt::Checked) {
        selected_num++;
    }

    if (ui->F2_2->checkState() == Qt::Checked) {
        selected_num++;
    }
    if (selected_num <= ui->passenger_widget->rowCount()) {
        return true;
    }
    return false;
}

QJsonObject Transfer::GetSeat2()
{
    QJsonArray first_line;
    QJsonArray second_line;
    if (ui->A1_2->checkState() == Qt::Checked) {
        first_line.append("A");
    }
    if (ui->A2_2->checkState() == Qt::Checked) {
        second_line.append("A");
    }
    if (ui->B1_2->checkState() == Qt::Checked) {
        first_line.append("B");
    }
    if (ui->B2_2->checkState() == Qt::Checked) {
        second_line.append("B");
    }
    if (ui->C1_2->checkState() == Qt::Checked) {
        first_line.append("C");
    }
    if (ui->C2_2->checkState() == Qt::Checked) {
        second_line.append("C");
    }
    if (ui->D1_2->checkState() == Qt::Checked) {
        first_line.append("D");
    }
    if (ui->D2_2->checkState() == Qt::Checked) {
        second_line.append("D");
    }
    if (ui->F1_2->checkState() == Qt::Checked) {
        first_line.append("F");
    }
    if (ui->F2_2->checkState() == Qt::Checked) {
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

void Transfer::on_transfer_table_cellClicked(int row, int column)
{
    int way_num = row / 2;

    //第一程
    ui->ticket_train_edit->setText(ui->transfer_table->item(way_num*2, 1)->text());
    ui->ticket_departure_edit->setText(ui->transfer_table->item(way_num*2, 2)->text());
    ui->ticket_departure_time_edit->setText(ui->transfer_table->item(way_num*2, 3)->text());
    ui->ticket_arrival_edit->setText(ui->transfer_table->item(way_num*2, 4)->text());
    ui->ticket_arrival_time_edit->setText(ui->transfer_table->item(way_num*2, 5)->text());
    //第二程
    ui->ticket_train_edit_2->setText(ui->transfer_table->item(way_num*2 + 1, 1)->text());
    ui->ticket_departure_edit_2->setText(ui->transfer_table->item(way_num*2 + 1, 2)->text());
    ui->ticket_departure_time_edit_2->setText(ui->transfer_table->item(way_num*2 + 1, 3)->text());
    ui->ticket_arrival_edit_2->setText(ui->transfer_table->item(way_num*2 + 1, 4)->text());
    ui->ticket_arrival_time_edit_2->setText(ui->transfer_table->item(way_num*2 + 1, 5)->text());
}

void Transfer::on_choose_passenger_button_clicked()
{
    ui->passenger_widget->clearContents();
    ClearSeat1();
    ClearSeat2();

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
void Transfer::on_seat_type_combo_box_currentTextChanged(const QString &seat_type)
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
    ClearSeat1();
}

void Transfer::on_seat_type_combo_box_2_currentTextChanged(const QString &seat_type)
{
    if (seat_type == "二等") {
        ui->B1_2->setEnabled(true);
        ui->B2_2->setEnabled(true);
        ui->D1_2->setEnabled(true);
        ui->D2_2->setEnabled(true);
    }
    else if(seat_type == "一等") {
        ui->B1_2->setEnabled(false);
        ui->B2_2->setEnabled(false);
        ui->D1_2->setEnabled(true);
        ui->D2_2->setEnabled(true);
    }
    else if(seat_type == "商务") {
        ui->B1_2->setEnabled(false);
        ui->B2_2->setEnabled(false);
        ui->D1_2->setEnabled(false);
        ui->D2_2->setEnabled(false);
    }
    ClearSeat2();
}

void Transfer::on_A1_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->A1->setChecked(true);
    }
    else {
        ui->A1->setChecked(false);
    }
}

void Transfer::on_B1_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->B1->setChecked(true);
    }
    else {
        ui->B1->setChecked(false);
    }
}

void Transfer::on_C1_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->C1->setChecked(true);
    }
    else {
        ui->C1->setChecked(false);
    }
}

void Transfer::on_D1_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->D1->setChecked(true);
    }
    else {
        ui->D1->setChecked(false);
    }
}

void Transfer::on_F1_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->F1->setChecked(true);
    }
    else {
        ui->F1->setChecked(false);
    }
}

void Transfer::on_A2_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->A2->setChecked(true);
    }
    else {
        ui->A2->setChecked(false);
    }
}

void Transfer::on_B2_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->B2->setChecked(true);
    }
    else {
        ui->B2->setChecked(false);
    }
}

void Transfer::on_C2_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->C2->setChecked(true);
    }
    else {
        ui->C2->setChecked(false);
    }
}

void Transfer::on_D2_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->D2->setChecked(true);
    }
    else {
        ui->D2->setChecked(false);
    }
}

void Transfer::on_F2_toggled(bool checked)
{
    if (CanSelectSeat1() && checked) {
        ui->F2->setChecked(true);
    }
    else {
        ui->F2->setChecked(false);
    }
}

void Transfer::on_A1_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->A1_2->setChecked(true);
    }
    else {
        ui->A1_2->setChecked(false);
    }
}

void Transfer::on_B1_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->B1_2->setChecked(true);
    }
    else {
        ui->B1_2->setChecked(false);
    }
}

void Transfer::on_C1_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->C1_2->setChecked(true);
    }
    else {
        ui->C1_2->setChecked(false);
    }
}

void Transfer::on_D1_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->D1_2->setChecked(true);
    }
    else {
        ui->D1_2->setChecked(false);
    }
}

void Transfer::on_F1_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->F1_2->setChecked(true);
    }
    else {
        ui->F1_2->setChecked(false);
    }
}

void Transfer::on_A2_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->A2_2->setChecked(true);
    }
    else {
        ui->A2_2->setChecked(false);
    }
}

void Transfer::on_B2_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->B2_2->setChecked(true);
    }
    else {
        ui->B2_2->setChecked(false);
    }
}

void Transfer::on_C2_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->C2_2->setChecked(true);
    }
    else {
        ui->C2_2->setChecked(false);
    }
}

void Transfer::on_D2_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->D2_2->setChecked(true);
    }
    else {
        ui->D2_2->setChecked(false);
    }
}

void Transfer::on_F2_2_toggled(bool checked)
{
    if (CanSelectSeat2() && checked) {
        ui->F2_2->setChecked(true);
    }
    else {
        ui->F2_2->setChecked(false);
    }
}

void Transfer::on_submit_order_button_clicked()
{
    //需要提供的信息：车次号、日期、出发站、到达站、用户名、乘车人、座位类型、座位
    QString train_id1 = ui->ticket_train_edit->text();
    QString train_id2 = ui->ticket_train_edit_2->text();
    if (train_id1 == "" || train_id2 == "") {
        QMessageBox::critical(0, "警告", "请选择车次！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }
    if (ui->passenger_widget->rowCount() == 0) {
        QMessageBox::critical(0, "警告", "请选择联系人！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    //乘车人
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

    QString username = TrainSocket::GetUsername();

    //第一程
    QString departure_station1 = ui->ticket_departure_edit->text();
    QString arrival_station1 = ui->ticket_arrival_edit->text();
    QString seat_type1 = ui->seat_type_combo_box->currentText();
    QJsonObject seats1 = GetSeat1();
    QJsonObject ticket_json1 {
        {"车次号", train_id1},
        {"日期", date},
        {"出发站", departure_station1},
        {"到达站", arrival_station1},
        {"座位类型", seat_type1},
        {"选座", seats1},
    };
    QJsonArray tickets;
    tickets.append(ticket_json1);

    //第二程
    QString departure_station2 = ui->ticket_departure_edit_2->text();
    QString arrival_station2 = ui->ticket_arrival_edit_2->text();
    QString seat_type2 = ui->seat_type_combo_box_2->currentText();
    QJsonObject seats2 = GetSeat2();
    QJsonObject ticket_json2 {
        {"车次号", train_id2},
        {"日期", date},
        {"出发站", departure_station2},
        {"到达站", arrival_station2},
        {"座位类型", seat_type2},
        {"选座", seats2},
    };
    tickets.append(ticket_json2);

    //判断余票
    int current_row = ui->transfer_table->currentRow();
    int way_num = current_row / 2;
    if (seat_type1 == "二等")
    {
        int left_seat = ui->transfer_table->item(way_num*2, 9)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第一程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type1 == "一等")
    {
        int left_seat = ui->transfer_table->item(way_num*2, 8)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第一程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type1 == "商务")
    {
        int left_seat = ui->transfer_table->item(way_num*2, 7)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第一程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }

    if (seat_type2 == "二等")
    {
        int left_seat = ui->transfer_table->item(way_num*2 + 1, 9)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第二程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type2 == "一等")
    {
        int left_seat = ui->transfer_table->item(way_num*2 + 1, 8)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第二程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }
    else if (seat_type2 == "商务")
    {
        int left_seat = ui->transfer_table->item(way_num*2 + 1, 7)->text().toInt();
        if (left_seat < passengers.size())
        {
            QMessageBox::critical(0, "警告", "第二程余票不足！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
            return;
        }
    }


    QJsonObject send_json {
        {"操作", SUBMIT_ORDER},
        {"用户名", username},
        {"车票", tickets},
        {"乘车人", passengers}
    };

    //提交订单
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        OrderDialog* order_dialog = new OrderDialog("订票", get_json);
        order_dialog->exec();
        delete order_dialog;
        close();
    }
    else {
        QMessageBox::critical(0, "警告", "订单提交失败！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
