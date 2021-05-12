#ifndef ORDER_H
#define ORDER_H

#include <QWidget>
#include <QMessageBox>
#include "train_socket.h"

namespace Ui {
class Order;
}

class MainWindow;

class Order : public QWidget
{
    Q_OBJECT

public:
    explicit Order(MainWindow* main_window, QWidget *parent = 0);
    ~Order();

private slots:
    void on_search_button_clicked();

    void on_order_table_cellClicked(int row, int column);

    void on_cancel_order_button_clicked();

    void on_pay_button_clicked();

    void on_cancel_ticket_button_clicked();

    void on_info_table_cellClicked(int row, int column);

    void on_pay_ticket_button_clicked();

    void on_change_ticket_button_clicked();

private:
    Ui::Order *ui;
    MainWindow* main_window;
};

#endif // ORDER_H
