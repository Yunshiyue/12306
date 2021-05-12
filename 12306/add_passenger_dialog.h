#ifndef ADD_PASSENGER_DIALOG_H
#define ADD_PASSENGER_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class AddPassengerDialog;
}

class AddPassengerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPassengerDialog(QWidget *parent = 0);
    ~AddPassengerDialog();

private slots:
    void on_add_button_clicked();

private:
    Ui::AddPassengerDialog *ui;
};

#endif // ADD_PASSENGER_DIALOG_H
