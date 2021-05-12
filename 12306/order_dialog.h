#ifndef ORDER_DIALOG_H
#define ORDER_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class OrderDialog;
}

class OrderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OrderDialog(QString type, QJsonObject order_info, QWidget *parent = 0);
    ~OrderDialog();

private slots:
    void on_later_pay_button_clicked();

    void on_pay_button_clicked();

private:
    Ui::OrderDialog *ui;
    QString type;
};

#endif // ORDER_DIALOG_H
