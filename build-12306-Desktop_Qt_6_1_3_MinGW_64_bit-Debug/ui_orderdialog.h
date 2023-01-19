/********************************************************************************
** Form generated from reading UI file 'orderdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDIALOG_H
#define UI_ORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *order_id_edit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *order_time_edit;
    QLabel *label_8;
    QLineEdit *order_status_edit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *total_price_edit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *later_pay_button;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pay_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *passenger_table;

    void setupUi(QDialog *OrderDialog)
    {
        if (OrderDialog->objectName().isEmpty())
            OrderDialog->setObjectName(QString::fromUtf8("OrderDialog"));
        OrderDialog->resize(786, 534);
        gridLayout = new QGridLayout(OrderDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(OrderDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        order_id_edit = new QLineEdit(OrderDialog);
        order_id_edit->setObjectName(QString::fromUtf8("order_id_edit"));
        order_id_edit->setEnabled(false);
        order_id_edit->setMinimumSize(QSize(250, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        order_id_edit->setFont(font);

        gridLayout->addWidget(order_id_edit, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 2, 1);

        order_time_edit = new QLineEdit(OrderDialog);
        order_time_edit->setObjectName(QString::fromUtf8("order_time_edit"));
        order_time_edit->setEnabled(false);
        order_time_edit->setFont(font);

        gridLayout->addWidget(order_time_edit, 1, 4, 1, 1);

        label_8 = new QLabel(OrderDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        order_status_edit = new QLineEdit(OrderDialog);
        order_status_edit->setObjectName(QString::fromUtf8("order_status_edit"));
        order_status_edit->setEnabled(false);
        order_status_edit->setFont(font);

        gridLayout->addWidget(order_status_edit, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        label_9 = new QLabel(OrderDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 3, 1, 1);

        label_2 = new QLabel(OrderDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        total_price_edit = new QLineEdit(OrderDialog);
        total_price_edit->setObjectName(QString::fromUtf8("total_price_edit"));
        total_price_edit->setEnabled(false);
        total_price_edit->setFont(font);

        gridLayout->addWidget(total_price_edit, 3, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 6, 6, 1, 1);

        later_pay_button = new QPushButton(OrderDialog);
        later_pay_button->setObjectName(QString::fromUtf8("later_pay_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\351\200\200\347\245\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        later_pay_button->setIcon(icon);

        gridLayout->addWidget(later_pay_button, 6, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        pay_button = new QPushButton(OrderDialog);
        pay_button->setObjectName(QString::fromUtf8("pay_button"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icon/\346\224\257\344\273\230.png"), QSize(), QIcon::Normal, QIcon::Off);
        pay_button->setIcon(icon1);

        gridLayout->addWidget(pay_button, 6, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 1, 1, 1);

        passenger_table = new QTableWidget(OrderDialog);
        if (passenger_table->columnCount() < 12)
            passenger_table->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        passenger_table->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        passenger_table->setObjectName(QString::fromUtf8("passenger_table"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(11);
        passenger_table->setFont(font1);

        gridLayout->addWidget(passenger_table, 4, 1, 2, 5);

#if QT_CONFIG(shortcut)
        label->setBuddy(order_id_edit);
        label_8->setBuddy(order_status_edit);
        label_9->setBuddy(total_price_edit);
        label_2->setBuddy(order_time_edit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OrderDialog);

        QMetaObject::connectSlotsByName(OrderDialog);
    } // setupUi

    void retranslateUi(QDialog *OrderDialog)
    {
        OrderDialog->setWindowTitle(QCoreApplication::translate("OrderDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("OrderDialog", "\350\256\242\345\215\225\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("OrderDialog", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        label_9->setText(QCoreApplication::translate("OrderDialog", "\346\200\273\344\273\267", nullptr));
        label_2->setText(QCoreApplication::translate("OrderDialog", "\350\256\242\345\215\225\346\227\266\351\227\264", nullptr));
        later_pay_button->setText(QCoreApplication::translate("OrderDialog", "\347\250\215\345\220\216\344\273\230\346\254\276", nullptr));
        pay_button->setText(QCoreApplication::translate("OrderDialog", "\344\273\230\346\254\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem = passenger_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OrderDialog", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = passenger_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OrderDialog", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = passenger_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OrderDialog", "\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = passenger_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OrderDialog", "\350\275\246\346\254\241\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = passenger_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OrderDialog", "\345\207\272\345\217\221\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = passenger_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("OrderDialog", "\345\210\260\350\276\276\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = passenger_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("OrderDialog", "\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = passenger_table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("OrderDialog", "\350\275\246\345\216\242\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = passenger_table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("OrderDialog", "\345\272\247\344\275\215\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = passenger_table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("OrderDialog", "\345\272\247\344\275\215\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = passenger_table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("OrderDialog", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = passenger_table->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("OrderDialog", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderDialog: public Ui_OrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDIALOG_H
