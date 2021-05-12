#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QMessageBox>
#include "train_socket.h"
#include "change_password_dialog.h"
#include "add_passenger_dialog.h"
#include "change_passenger_dialog.h"

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0);
    ~Information();

private slots:

    void on_update_button_clicked();

    void on_sure_button_clicked();

    void on_cancel_button_clicked();

    void on_update_password_button_clicked();

    void on_passenger_table_cellClicked(int row, int column);

    void on_change_passenger_button_clicked();

    void on_delete_passenger_button_clicked();

    void on_add_passenger_button_clicked();

private:
    Ui::Information *ui;
    void LoadInformation();
    void LoadPassenger();
};

#endif // INFORMATION_H
