#ifndef CHANGE_PASSENGER_H
#define CHANGE_PASSENGER_H

#include <QDialog>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class ChangePassenger;
}

class ChangePassengerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassengerDialog(QString id_number, QString name, QString sex,
                             QString phone, QString type, QWidget *parent = 0);
    ~ChangePassengerDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChangePassenger *ui;
    QString id_number;
};

#endif // CHANGE_PASSENGER_H
