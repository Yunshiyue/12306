/********************************************************************************
** Form generated from reading UI file 'choosepassengerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPASSENGERDIALOG_H
#define UI_CHOOSEPASSENGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoosePassengerDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *passenger_table;

    void setupUi(QDialog *ChoosePassengerDialog)
    {
        if (ChoosePassengerDialog->objectName().isEmpty())
            ChoosePassengerDialog->setObjectName(QString::fromUtf8("ChoosePassengerDialog"));
        ChoosePassengerDialog->resize(478, 397);
        gridLayout = new QGridLayout(ChoosePassengerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ChoosePassengerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(184, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(ChoosePassengerDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\347\241\256\345\256\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(183, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        passenger_table = new QTableWidget(ChoosePassengerDialog);
        if (passenger_table->columnCount() < 4)
            passenger_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        passenger_table->setObjectName(QString::fromUtf8("passenger_table"));

        gridLayout->addWidget(passenger_table, 1, 0, 1, 3);


        retranslateUi(ChoosePassengerDialog);

        QMetaObject::connectSlotsByName(ChoosePassengerDialog);
    } // setupUi

    void retranslateUi(QDialog *ChoosePassengerDialog)
    {
        ChoosePassengerDialog->setWindowTitle(QCoreApplication::translate("ChoosePassengerDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChoosePassengerDialog", "\344\271\230\350\275\246\344\272\272", nullptr));
        pushButton->setText(QCoreApplication::translate("ChoosePassengerDialog", "\347\241\256\345\256\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = passenger_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ChoosePassengerDialog", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = passenger_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ChoosePassengerDialog", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = passenger_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ChoosePassengerDialog", "\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = passenger_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ChoosePassengerDialog", "\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoosePassengerDialog: public Ui_ChoosePassengerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPASSENGERDIALOG_H
