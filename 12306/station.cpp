#include "station.h"
#include "ui_station.h"

Station::Station(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Station)
{
    ui->setupUi(this);
    ui->station_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->station_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->station_widget->setSelectionMode(QAbstractItemView::SingleSelection);
}

Station::~Station()
{
    delete ui;
}

//查询按钮
void Station::on_search_button_clicked()
{
    QString station = ui->station_edit->text();
    if (station == "") {
        QMessageBox::critical(0, "警告", "车站名不可为空！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    ui->station_label->clear();
    ui->station_widget->setRowCount(0);

    QJsonObject send_json {
        {"操作", SEARCH_STATION},
        {"车站名", station}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {    
        ui->station_label->setText(station);
        QJsonArray pass_by_trains = get_json.take("途经列车").toArray();
        ui->station_widget->setRowCount(pass_by_trains.size());
        for (int i = 0; i < pass_by_trains.size(); i++) {
            QJsonObject train = pass_by_trains.at(i).toObject();

            QString train_id = train.take("车次号").toString();
            QString first_station = train.take("起始站").toString();
            QString last_station = train.take("终点站").toString();
            QString departure_time = train.take("首发时间").toString();
            QString destination_time = train.take("终到时间").toString();
            QString arrival_station = train.take("途经站").toString();
            QString arrival_time = train.take("到站时间").toString();
            QString start_time = train.take("开车时间").toString();

            ui->station_widget->setItem(i, 0, new QTableWidgetItem(train_id));
            ui->station_widget->setItem(i, 1, new QTableWidgetItem(first_station));
            if (first_station == station)
            {
                ui->station_widget->item(i, 1)->setBackgroundColor(QColor(78, 201, 176));
            }
            ui->station_widget->setItem(i, 2, new QTableWidgetItem(departure_time.left(5)));

            ui->station_widget->setItem(i, 7, new QTableWidgetItem(last_station));
            if (last_station == station)
            {
                ui->station_widget->item(i, 7)->setBackgroundColor(QColor(78, 201, 176));
            }
            ui->station_widget->setItem(i, 8, new QTableWidgetItem(destination_time.left(5)));
            if (arrival_station == first_station || arrival_station == last_station) {
                ui->station_widget->setItem(i, 3, new QTableWidgetItem("----"));
                ui->station_widget->setItem(i, 4, new QTableWidgetItem("----"));
                ui->station_widget->setItem(i, 5, new QTableWidgetItem("----"));
                ui->station_widget->setItem(i, 6, new QTableWidgetItem("----"));
            }
            else {
                QString interval = TimeInterval(arrival_time, start_time);
                ui->station_widget->setItem(i, 3, new QTableWidgetItem(arrival_station));
                ui->station_widget->item(i, 3)->setBackgroundColor(QColor(78, 201, 176));
                ui->station_widget->setItem(i, 4, new QTableWidgetItem(arrival_time.left(5)));
                ui->station_widget->setItem(i, 5, new QTableWidgetItem(start_time.left(5)));
                ui->station_widget->setItem(i, 6, new QTableWidgetItem(interval));
            }
        }
    }
    else {
        QMessageBox::critical(0, "警告", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

QString Station::TimeInterval(QString time1, QString time2, int day)
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
