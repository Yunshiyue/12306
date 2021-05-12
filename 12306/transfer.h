#ifndef TRANSFER_H
#define TRANSFER_H

#include <QWidget>
#include <QJsonObject>
#include <QMessageBox>
#include "train_socket.h"
#include "choose_passenger_dialog.h"
#include "order_dialog.h"

namespace Ui {
class Transfer;
}

class Transfer : public QWidget
{
    Q_OBJECT

public:
    explicit Transfer(QJsonObject ticket_json, QWidget *parent = 0);
    ~Transfer();

private slots:
    void on_transfer_table_cellClicked(int row, int column);

    void on_choose_passenger_button_clicked();

    void on_seat_type_combo_box_currentTextChanged(const QString &arg1);

    void on_seat_type_combo_box_2_currentTextChanged(const QString &arg1);

    void on_A1_toggled(bool checked);

    void on_B1_toggled(bool checked);

    void on_C1_toggled(bool checked);

    void on_D1_toggled(bool checked);

    void on_F1_toggled(bool checked);

    void on_A2_toggled(bool checked);

    void on_B2_toggled(bool checked);

    void on_C2_toggled(bool checked);

    void on_D2_toggled(bool checked);

    void on_F2_toggled(bool checked);

    void on_A1_2_toggled(bool checked);

    void on_B1_2_toggled(bool checked);

    void on_C1_2_toggled(bool checked);

    void on_D1_2_toggled(bool checked);

    void on_F1_2_toggled(bool checked);

    void on_A2_2_toggled(bool checked);

    void on_B2_2_toggled(bool checked);

    void on_C2_2_toggled(bool checked);

    void on_D2_2_toggled(bool checked);

    void on_F2_2_toggled(bool checked);

    void on_submit_order_button_clicked();

private:
    Ui::Transfer *ui;
    QString date;
    void SearchTicket(QJsonObject ticket_json);
    QString TimeInterval(QString time1, QString time2, int day=0);

    void ClearSeat1();
    bool CanSelectSeat1();
    QJsonObject GetSeat1();

    void ClearSeat2();
    bool CanSelectSeat2();
    QJsonObject GetSeat2();

};

#endif // TRANSFER_H
