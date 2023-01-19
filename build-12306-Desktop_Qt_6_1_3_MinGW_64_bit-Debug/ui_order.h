/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Order
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *search_type_combo_box;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *order_table;
    QPushButton *pay_button;
    QPushButton *cancel_order_button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *info_table;
    QPushButton *change_ticket_button;
    QPushButton *cancel_ticket_button;
    QPushButton *pay_ticket_button;

    void setupUi(QWidget *Order)
    {
        if (Order->objectName().isEmpty())
            Order->setObjectName(QString::fromUtf8("Order"));
        Order->resize(1310, 784);
        gridLayout_4 = new QGridLayout(Order);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(424, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(Order);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        search_type_combo_box = new QComboBox(groupBox_3);
        search_type_combo_box->addItem(QString());
        search_type_combo_box->addItem(QString());
        search_type_combo_box->addItem(QString());
        search_type_combo_box->addItem(QString());
        search_type_combo_box->setObjectName(QString::fromUtf8("search_type_combo_box"));

        gridLayout_3->addWidget(search_type_combo_box, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        search_button = new QPushButton(groupBox_3);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\237\245\350\257\242\350\256\242\345\215\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon);

        gridLayout_3->addWidget(search_button, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(316, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        groupBox = new QGroupBox(Order);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        order_table = new QTableWidget(groupBox);
        if (order_table->columnCount() < 4)
            order_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        order_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        order_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        order_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        order_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        order_table->setObjectName(QString::fromUtf8("order_table"));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(11);
        order_table->setFont(font);

        gridLayout->addWidget(order_table, 0, 0, 1, 1);

        pay_button = new QPushButton(groupBox);
        pay_button->setObjectName(QString::fromUtf8("pay_button"));
        pay_button->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icon/\346\224\257\344\273\230.png"), QSize(), QIcon::Normal, QIcon::Off);
        pay_button->setIcon(icon1);

        gridLayout->addWidget(pay_button, 1, 0, 1, 1);

        cancel_order_button = new QPushButton(groupBox);
        cancel_order_button->setObjectName(QString::fromUtf8("cancel_order_button"));
        cancel_order_button->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icon/\345\217\226\346\266\210\350\256\242\345\215\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel_order_button->setIcon(icon2);

        gridLayout->addWidget(cancel_order_button, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Order);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        info_table = new QTableWidget(groupBox_2);
        if (info_table->columnCount() < 12)
            info_table->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        info_table->setHorizontalHeaderItem(11, __qtablewidgetitem15);
        info_table->setObjectName(QString::fromUtf8("info_table"));
        info_table->setFont(font);

        gridLayout_2->addWidget(info_table, 0, 0, 1, 1);

        change_ticket_button = new QPushButton(groupBox_2);
        change_ticket_button->setObjectName(QString::fromUtf8("change_ticket_button"));
        change_ticket_button->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icon/\346\224\271\347\255\276.png"), QSize(), QIcon::Normal, QIcon::Off);
        change_ticket_button->setIcon(icon3);

        gridLayout_2->addWidget(change_ticket_button, 3, 0, 1, 1);

        cancel_ticket_button = new QPushButton(groupBox_2);
        cancel_ticket_button->setObjectName(QString::fromUtf8("cancel_ticket_button"));
        cancel_ticket_button->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icon/\351\200\200\347\245\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel_ticket_button->setIcon(icon4);

        gridLayout_2->addWidget(cancel_ticket_button, 2, 0, 1, 1);

        pay_ticket_button = new QPushButton(groupBox_2);
        pay_ticket_button->setObjectName(QString::fromUtf8("pay_ticket_button"));
        pay_ticket_button->setEnabled(false);
        pay_ticket_button->setIcon(icon1);

        gridLayout_2->addWidget(pay_ticket_button, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 2);


        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QWidget *Order)
    {
        Order->setWindowTitle(QCoreApplication::translate("Order", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Order", "\346\237\245\350\257\242", nullptr));
        search_type_combo_box->setItemText(0, QCoreApplication::translate("Order", "\345\205\250\351\203\250", nullptr));
        search_type_combo_box->setItemText(1, QCoreApplication::translate("Order", "\346\234\252\344\273\230\346\254\276", nullptr));
        search_type_combo_box->setItemText(2, QCoreApplication::translate("Order", "\345\267\262\345\256\214\346\210\220", nullptr));
        search_type_combo_box->setItemText(3, QCoreApplication::translate("Order", "\345\267\262\345\217\226\346\266\210", nullptr));

        search_button->setText(QCoreApplication::translate("Order", "\346\237\245\350\257\242", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Order", "\350\256\242\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = order_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Order", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = order_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Order", "\350\256\242\345\215\225\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = order_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Order", "\346\200\273\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = order_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Order", "\347\212\266\346\200\201", nullptr));
        pay_button->setText(QCoreApplication::translate("Order", "\346\224\257\344\273\230\350\256\242\345\215\225", nullptr));
        cancel_order_button->setText(QCoreApplication::translate("Order", "\345\217\226\346\266\210\350\256\242\345\215\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Order", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = info_table->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Order", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = info_table->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Order", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = info_table->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Order", "\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = info_table->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Order", "\350\275\246\346\254\241\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = info_table->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Order", "\345\207\272\345\217\221\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = info_table->horizontalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Order", "\345\210\260\350\276\276\347\253\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = info_table->horizontalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Order", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = info_table->horizontalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Order", "\350\275\246\345\216\242\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = info_table->horizontalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Order", "\345\272\247\344\275\215\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = info_table->horizontalHeaderItem(9);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Order", "\345\272\247\344\275\215\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = info_table->horizontalHeaderItem(10);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Order", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = info_table->horizontalHeaderItem(11);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Order", "\347\212\266\346\200\201", nullptr));
        change_ticket_button->setText(QCoreApplication::translate("Order", "\346\224\271\347\255\276", nullptr));
        cancel_ticket_button->setText(QCoreApplication::translate("Order", "\351\200\200\347\245\250", nullptr));
        pay_ticket_button->setText(QCoreApplication::translate("Order", "\344\273\230\346\254\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
