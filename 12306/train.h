#ifndef TRAIN_H
#define TRAIN_H

#include <QWidget>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class Train;
}

class Train : public QWidget
{
    Q_OBJECT

public:
    explicit Train(QWidget *parent = 0);
    ~Train();

private slots:
    void on_search_button_clicked();

private:
    Ui::Train *ui;
    //QString TimeInterval(QString time1, QString time2);
    QString TimeInterval(QString time1, QString time2, int day = 0);
};

#endif // TRAIN_H
