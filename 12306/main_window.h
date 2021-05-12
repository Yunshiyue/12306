#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <train_socket.h>
#include "login.h"
#include "ticket.h"
#include "station.h"
#include "train.h"
#include "order.h"
#include "information.h"
#include "register.h"
#include "transfer.h"
#include "train_socket.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Ui::MainWindow* get_ui();
    void ShowChangeTicketWidget(QJsonObject);
    void ShowTransferWidget(QJsonObject);
    void LoginSucceed();
    ~MainWindow();

private slots:


    void on_login_triggered();

    void on_ticket_triggered();

    void on_station_triggered();

    void on_Train_triggered();

    void on_order_triggered();

    void on_information_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_register_2_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
