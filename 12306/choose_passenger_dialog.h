#ifndef CHOOSE_PASSENGER_DIALOG_H
#define CHOOSE_PASSENGER_DIALOG_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>

namespace Ui {
class ChoosePassengerDialog;
}

class ChoosePassengerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChoosePassengerDialog(QJsonObject passenger, QWidget *parent = 0);
    QJsonArray GetPassenger();
    ~ChoosePassengerDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChoosePassengerDialog *ui;
};

#endif // CHOOSE_PASSENGER_DIALOG_H
