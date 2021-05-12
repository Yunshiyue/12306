#include "choose_passenger_dialog.h"
#include "ui_choosepassengerdialog.h"

ChoosePassengerDialog::ChoosePassengerDialog(QJsonObject passenger, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoosePassengerDialog)
{
    ui->setupUi(this);
    setWindowTitle("选择乘车人");
    QIcon icon(":/new/icon/icon/railway.png");
    setWindowIcon(icon);

    ui->passenger_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->passenger_table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->passenger_table->setSelectionMode(QAbstractItemView::SingleSelection);

    QJsonArray passengers = passenger.take("乘车人").toArray();
    ui->passenger_table->setRowCount(passengers.size());
    for (int i = 0; i < passengers.size(); i++) {
        QJsonObject current_passneger = passengers.at(i).toObject();
        QString id_number = current_passneger.take("身份证号").toString();
        QString name = current_passneger.take("姓名").toString();
        QString type = current_passneger.take("类型").toString();

        ui->passenger_table->setItem(i, 0, new QTableWidgetItem(name, 0));
        ui->passenger_table->setItem(i, 1, new QTableWidgetItem(id_number, 0));
        ui->passenger_table->setItem(i, 2, new QTableWidgetItem(type, 0));
        QTableWidgetItem* check = new QTableWidgetItem;
        check->setCheckState(Qt::Unchecked);
        ui->passenger_table->setItem(i, 3, check);
    }
}

ChoosePassengerDialog::~ChoosePassengerDialog()
{
    delete ui;
}

QJsonArray ChoosePassengerDialog::GetPassenger()
{
    QJsonArray passengers;

    for (int i = 0; i < ui->passenger_table->rowCount(); i++) {
        if (ui->passenger_table->item(i, 3)->checkState() == Qt::Checked) {
            QString name = ui->passenger_table->item(i, 0)->text();
            QString id_number = ui->passenger_table->item(i, 1)->text();
            QString type = ui->passenger_table->item(i, 2)->text();
            QJsonObject passenger {
                {"姓名", name},
                {"身份证号", id_number},
                {"类型", type}
            };
            passengers.append(passenger);
        }
    }
    return passengers;
}

void ChoosePassengerDialog::on_pushButton_clicked()
{
    int total_num = 0;
    for (int i = 0; i < ui->passenger_table->rowCount(); i++) {
        if (ui->passenger_table->item(i, 3)->checkState() == Qt::Checked) {
            total_num++;
        }
    }
    if (total_num <=5) {
        close();
    }
    else {
        QMessageBox::critical(0, "警告", "最多只能选择5名乘客！", QMessageBox::Ok | QMessageBox::Default, 0, 0);
    }
}
