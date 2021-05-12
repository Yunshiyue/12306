#include "train.h"
#include "ui_train.h"

Train::Train(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Train)
{
    ui->setupUi(this);
    ui->train_widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->train_widget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->train_widget->setSelectionMode(QAbstractItemView::SingleSelection);
}

Train::~Train()
{
    delete ui;
}

//搜索按钮
void Train::on_search_button_clicked()
{
    //清空内容
    ui->train_widget->clearContents();
    ui->train_widget->setRowCount(0);
    ui->train_id_label->clear();

    //判断为空
    QString select_train_id = ui->train_id_edit->text();
    if (select_train_id.isEmpty()) {
        QMessageBox::critical(0, "警告", "车次号不可为空！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
        return;
    }

    //发送和接受
    QJsonObject send_json {
        {"操作", SEARCH_TRAIN},
        {"车次号", select_train_id}
    };
    QJsonObject get_json = TrainSocket::GetSocket()->sendData(send_json);
    QString message = get_json.take("消息").toString();
    if (message == "成功") {
        QString train_id =get_json.take("车次号").toString();
        ui->train_id_label->setText(train_id);
        //修改表格
        QJsonArray pass_by_stations = get_json.take("途径站").toArray();
        ui->train_widget->setRowCount(pass_by_stations.size());
        QString departure_time;
        for (int i = 0; i < pass_by_stations.size(); i++) {
            QJsonObject pass_by_info = pass_by_stations.at(i).toObject();


            QString station = pass_by_info.take("车站").toString();
            QString arrival_time = pass_by_info.take("到达时间").toString().left(5);
            QString start_time = pass_by_info.take("开车时间").toString().left(5);
            int day = pass_by_info.take("跨天").toInt();

            if (i == 0) {
                departure_time = arrival_time;
            }

            //计算停留时间和历时
            QString stay_time = TimeInterval(arrival_time, start_time);
            QString total_time = TimeInterval(departure_time, arrival_time, day);


            //起始站和终点站的处理
            if (i == 0) {
                stay_time = "起点站";
                arrival_time = "----";
            }
            else if(i == pass_by_stations.size()-1) {
                stay_time = "终点站";
                start_time = "----";
            }

            ui->train_widget->setItem(i, 0, new QTableWidgetItem(station, 0));
            ui->train_widget->setItem(i, 1, new QTableWidgetItem(arrival_time, 0));
            ui->train_widget->setItem(i, 2, new QTableWidgetItem(start_time, 0));
            ui->train_widget->setItem(i, 3, new QTableWidgetItem(stay_time, 0));
            ui->train_widget->setItem(i, 4, new QTableWidgetItem(total_time, 0));
        }
    }
    else {
        QMessageBox::critical(0, "警告", message, QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}

QString Train::TimeInterval(QString time1, QString time2, int day)
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
