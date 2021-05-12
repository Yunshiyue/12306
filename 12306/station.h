#ifndef STATION_H
#define STATION_H

#include <QWidget>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class Station;
}

class Station : public QWidget
{
    Q_OBJECT

public:
    explicit Station(QWidget *parent = 0);
    ~Station();

private slots:
    void on_search_button_clicked();

private:
    Ui::Station *ui;
    QString TimeInterval(QString time1, QString time2, int day = 0);
};

#endif // STATION_H
