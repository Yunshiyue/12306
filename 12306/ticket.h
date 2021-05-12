#ifndef TICKET_H
#define TICKET_H

#include <QWidget>
#include <QMessageBox>
#include "train_socket.h"
#include "choose_passenger_dialog.h"
#include "order_dialog.h"

namespace Ui {
class Ticket;
}

class MainWindow;

class Ticket : public QWidget
{
    Q_OBJECT

public:
    explicit Ticket(MainWindow*, QWidget *parent = 0);
    explicit Ticket(QJsonObject ticket, QWidget *parent = 0);
    ~Ticket();

private slots:
    void on_search_button_clicked();

    void on_station_station_widget_cellClicked(int row, int column);

    void on_choose_passenger_button_clicked();

    void on_seat_type_combo_box_currentTextChanged(const QString &seat_type);

    void on_A2_toggled(bool checked);

    void on_B2_toggled(bool checked);

    void on_C2_toggled(bool checked);

    void on_D2_toggled(bool checked);

    void on_F2_toggled(bool checked);

    void on_A1_toggled(bool checked);

    void on_B1_toggled(bool checked);

    void on_C1_toggled(bool checked);

    void on_D1_toggled(bool checked);

    void on_F1_toggled(bool checked);

    void on_submit_order_button_clicked();

private:
    Ui::Ticket *ui;
    MainWindow* main_window;
    QJsonObject old_ticket;

    void clear();
    void ClearSeat();
    bool CanSelectSeat();
    QJsonObject GetSeat();
    QString TimeInterval(QString time1, QString time2, int day=0);
};

#endif // TICKET_H
