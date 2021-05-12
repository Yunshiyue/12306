/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *station_station_widget;
    QLabel *date_label;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *ticket_train_edit;
    QLabel *label_5;
    QLineEdit *ticket_departure_edit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *ticket_departure_time_edit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QLineEdit *ticket_arrival_edit;
    QLabel *label_8;
    QLineEdit *ticket_arrival_time_edit;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_9;
    QTableWidget *passenger_widget;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *choose_passenger_button;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QComboBox *seat_type_combo_box;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QCheckBox *A2;
    QCheckBox *B2;
    QCheckBox *C2;
    QCheckBox *D2;
    QCheckBox *F2;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QCheckBox *A1;
    QCheckBox *B1;
    QCheckBox *C1;
    QCheckBox *D1;
    QCheckBox *F1;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *submit_order_button;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *search_departure_edit;
    QCalendarWidget *search_date;
    QPushButton *search_button;
    QLineEdit *search_arrival_edit;
    QLabel *label_2;

    void setupUi(QWidget *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName(QStringLiteral("Ticket"));
        Ticket->resize(1311, 966);
        gridLayout_6 = new QGridLayout(Ticket);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_2 = new QGroupBox(Ticket);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        station_station_widget = new QTableWidget(groupBox_2);
        if (station_station_widget->columnCount() < 9)
            station_station_widget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        station_station_widget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        station_station_widget->setObjectName(QStringLiteral("station_station_widget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        station_station_widget->setFont(font);
        station_station_widget->setLayoutDirection(Qt::LeftToRight);
        station_station_widget->setAutoFillBackground(false);

        gridLayout_2->addWidget(station_station_widget, 1, 0, 1, 1);

        date_label = new QLabel(groupBox_2);
        date_label->setObjectName(QStringLiteral("date_label"));
        date_label->setMinimumSize(QSize(0, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\273\217\351\273\221\347\256\200\344\275\223"));
        font1.setPointSize(20);
        date_label->setFont(font1);
        date_label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(date_label, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(Ticket);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);

        ticket_train_edit = new QLineEdit(groupBox_5);
        ticket_train_edit->setObjectName(QStringLiteral("ticket_train_edit"));
        ticket_train_edit->setEnabled(false);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        ticket_train_edit->setFont(font2);

        gridLayout_4->addWidget(ticket_train_edit, 0, 2, 1, 3);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 1, 1, 1);

        ticket_departure_edit = new QLineEdit(groupBox_5);
        ticket_departure_edit->setObjectName(QStringLiteral("ticket_departure_edit"));
        ticket_departure_edit->setEnabled(false);
        ticket_departure_edit->setFont(font2);

        gridLayout_4->addWidget(ticket_departure_edit, 1, 2, 1, 3);

        horizontalSpacer = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 1, 1, 1);

        ticket_departure_time_edit = new QLineEdit(groupBox_5);
        ticket_departure_time_edit->setObjectName(QStringLiteral("ticket_departure_time_edit"));
        ticket_departure_time_edit->setEnabled(false);
        ticket_departure_time_edit->setFont(font2);

        gridLayout_4->addWidget(ticket_departure_time_edit, 2, 2, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 3, 1, 1, 1);

        ticket_arrival_edit = new QLineEdit(groupBox_5);
        ticket_arrival_edit->setObjectName(QStringLiteral("ticket_arrival_edit"));
        ticket_arrival_edit->setEnabled(false);
        ticket_arrival_edit->setFont(font2);

        gridLayout_4->addWidget(ticket_arrival_edit, 3, 2, 1, 3);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 4, 1, 1, 1);

        ticket_arrival_time_edit = new QLineEdit(groupBox_5);
        ticket_arrival_time_edit->setObjectName(QStringLiteral("ticket_arrival_time_edit"));
        ticket_arrival_time_edit->setEnabled(false);
        ticket_arrival_time_edit->setFont(font2);

        gridLayout_4->addWidget(ticket_arrival_time_edit, 4, 2, 1, 3);

        horizontalSpacer_7 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 5, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 5, 1, 1, 1);

        passenger_widget = new QTableWidget(groupBox_5);
        if (passenger_widget->columnCount() < 3)
            passenger_widget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        passenger_widget->setObjectName(QStringLiteral("passenger_widget"));
        passenger_widget->setFont(font);

        gridLayout_4->addWidget(passenger_widget, 5, 2, 2, 4);

        horizontalSpacer_8 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 6, 6, 1, 1);

        choose_passenger_button = new QPushButton(groupBox_5);
        choose_passenger_button->setObjectName(QStringLiteral("choose_passenger_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\267\273\345\212\240\344\271\230\350\275\246\344\272\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        choose_passenger_button->setIcon(icon);

        gridLayout_4->addWidget(choose_passenger_button, 7, 3, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 8, 0, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 8, 1, 1, 2);

        seat_type_combo_box = new QComboBox(groupBox_5);
        seat_type_combo_box->setObjectName(QStringLiteral("seat_type_combo_box"));

        gridLayout_4->addWidget(seat_type_combo_box, 8, 3, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(94, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 8, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 9, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        A2 = new QCheckBox(groupBox_3);
        A2->setObjectName(QStringLiteral("A2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icon/A_square_\345\255\227\346\257\215a.png"), QSize(), QIcon::Normal, QIcon::Off);
        A2->setIcon(icon1);
        A2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(A2, 0, 1, 1, 1);

        B2 = new QCheckBox(groupBox_3);
        B2->setObjectName(QStringLiteral("B2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icon/B_square_\345\255\227\346\257\215b.png"), QSize(), QIcon::Normal, QIcon::Off);
        B2->setIcon(icon2);
        B2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(B2, 0, 2, 1, 1);

        C2 = new QCheckBox(groupBox_3);
        C2->setObjectName(QStringLiteral("C2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icon/C_square_\345\255\227\346\257\215c.png"), QSize(), QIcon::Normal, QIcon::Off);
        C2->setIcon(icon3);
        C2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(C2, 0, 3, 1, 1);

        D2 = new QCheckBox(groupBox_3);
        D2->setObjectName(QStringLiteral("D2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icon/D_square_\345\255\227\346\257\215d.png"), QSize(), QIcon::Normal, QIcon::Off);
        D2->setIcon(icon4);
        D2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(D2, 0, 5, 1, 1);

        F2 = new QCheckBox(groupBox_3);
        F2->setObjectName(QStringLiteral("F2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icon/F_square_\345\255\227\346\257\215f.png"), QSize(), QIcon::Normal, QIcon::Off);
        F2->setIcon(icon5);
        F2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(F2, 0, 6, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 1, 4, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 1, 7, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        A1 = new QCheckBox(groupBox_3);
        A1->setObjectName(QStringLiteral("A1"));
        A1->setIcon(icon1);
        A1->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(A1, 2, 1, 1, 1);

        B1 = new QCheckBox(groupBox_3);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setIcon(icon2);
        B1->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(B1, 2, 2, 1, 1);

        C1 = new QCheckBox(groupBox_3);
        C1->setObjectName(QStringLiteral("C1"));
        C1->setIcon(icon3);
        C1->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(C1, 2, 3, 1, 1);

        D1 = new QCheckBox(groupBox_3);
        D1->setObjectName(QStringLiteral("D1"));
        D1->setIcon(icon4);
        D1->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(D1, 2, 5, 1, 1);

        F1 = new QCheckBox(groupBox_3);
        F1->setObjectName(QStringLiteral("F1"));
        F1->setIcon(icon5);
        F1->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(F1, 2, 6, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 9, 1, 1, 4);

        horizontalSpacer_5 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 9, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 10, 1, 1, 1);

        submit_order_button = new QPushButton(groupBox_5);
        submit_order_button->setObjectName(QStringLiteral("submit_order_button"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icon/icon/\346\217\220\344\272\244\350\256\242\345\215\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        submit_order_button->setIcon(icon6);

        gridLayout_4->addWidget(submit_order_button, 10, 2, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 10, 4, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        search_departure_edit = new QLineEdit(groupBox);
        search_departure_edit->setObjectName(QStringLiteral("search_departure_edit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(16);
        search_departure_edit->setFont(font3);

        gridLayout->addWidget(search_departure_edit, 0, 1, 1, 1);

        search_date = new QCalendarWidget(groupBox);
        search_date->setObjectName(QStringLiteral("search_date"));

        gridLayout->addWidget(search_date, 0, 2, 3, 1);

        search_button = new QPushButton(groupBox);
        search_button->setObjectName(QStringLiteral("search_button"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/icon/icon/\346\220\234\347\264\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon7);

        gridLayout->addWidget(search_button, 2, 0, 1, 2);

        search_arrival_edit = new QLineEdit(groupBox);
        search_arrival_edit->setObjectName(QStringLiteral("search_arrival_edit"));
        search_arrival_edit->setFont(font3);

        gridLayout->addWidget(search_arrival_edit, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(ticket_train_edit);
        label_5->setBuddy(ticket_departure_edit);
        label_6->setBuddy(ticket_departure_time_edit);
        label_7->setBuddy(ticket_arrival_edit);
        label_8->setBuddy(ticket_arrival_time_edit);
        label_9->setBuddy(passenger_widget);
        label_3->setBuddy(seat_type_combo_box);
        label->setBuddy(search_departure_edit);
        label_2->setBuddy(search_arrival_edit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(search_departure_edit, search_arrival_edit);
        QWidget::setTabOrder(search_arrival_edit, search_date);
        QWidget::setTabOrder(search_date, search_button);
        QWidget::setTabOrder(search_button, choose_passenger_button);
        QWidget::setTabOrder(choose_passenger_button, seat_type_combo_box);
        QWidget::setTabOrder(seat_type_combo_box, A1);
        QWidget::setTabOrder(A1, B1);
        QWidget::setTabOrder(B1, C1);
        QWidget::setTabOrder(C1, D1);
        QWidget::setTabOrder(D1, F1);
        QWidget::setTabOrder(F1, A2);
        QWidget::setTabOrder(A2, B2);
        QWidget::setTabOrder(B2, C2);
        QWidget::setTabOrder(C2, D2);
        QWidget::setTabOrder(D2, F2);
        QWidget::setTabOrder(F2, submit_order_button);
        QWidget::setTabOrder(submit_order_button, ticket_departure_edit);
        QWidget::setTabOrder(ticket_departure_edit, ticket_departure_time_edit);
        QWidget::setTabOrder(ticket_departure_time_edit, passenger_widget);
        QWidget::setTabOrder(passenger_widget, ticket_arrival_edit);
        QWidget::setTabOrder(ticket_arrival_edit, ticket_arrival_time_edit);
        QWidget::setTabOrder(ticket_arrival_time_edit, ticket_train_edit);
        QWidget::setTabOrder(ticket_train_edit, station_station_widget);

        retranslateUi(Ticket);

        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QWidget *Ticket)
    {
        Ticket->setWindowTitle(QApplication::translate("Ticket", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Ticket", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = station_station_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Ticket", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = station_station_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Ticket", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = station_station_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Ticket", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = station_station_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Ticket", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = station_station_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Ticket", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = station_station_widget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Ticket", "\345\216\206\346\227\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = station_station_widget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Ticket", "\345\225\206\345\212\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = station_station_widget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Ticket", "\344\270\200\347\255\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = station_station_widget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Ticket", "\344\272\214\347\255\211", Q_NULLPTR));
        date_label->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Ticket", "\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Ticket", "\350\264\255\347\245\250", Q_NULLPTR));
        label_4->setText(QApplication::translate("Ticket", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        ticket_train_edit->setText(QString());
        label_5->setText(QApplication::translate("Ticket", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        ticket_departure_edit->setText(QString());
        label_6->setText(QApplication::translate("Ticket", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        label_7->setText(QApplication::translate("Ticket", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
        label_8->setText(QApplication::translate("Ticket", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        label_9->setText(QApplication::translate("Ticket", "\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = passenger_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("Ticket", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = passenger_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("Ticket", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = passenger_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("Ticket", "\347\261\273\345\236\213", Q_NULLPTR));
        choose_passenger_button->setText(QApplication::translate("Ticket", "\351\200\211\346\213\251\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("Ticket", "\345\272\247\344\275\215\347\261\273\345\236\213", Q_NULLPTR));
        seat_type_combo_box->clear();
        seat_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Ticket", "\344\272\214\347\255\211", Q_NULLPTR)
         << QApplication::translate("Ticket", "\344\270\200\347\255\211", Q_NULLPTR)
         << QApplication::translate("Ticket", "\345\225\206\345\212\241", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("Ticket", "\351\200\211\345\272\247", Q_NULLPTR));
        label_14->setText(QApplication::translate("Ticket", "\347\254\2542\346\216\222", Q_NULLPTR));
        A2->setText(QString());
        B2->setText(QString());
        C2->setText(QString());
        D2->setText(QString());
        F2->setText(QString());
        label_10->setText(QApplication::translate("Ticket", "\351\235\240\347\252\227", Q_NULLPTR));
        label_12->setText(QApplication::translate("Ticket", "\350\277\207\351\201\223", Q_NULLPTR));
        label_11->setText(QApplication::translate("Ticket", "\351\235\240\347\252\227", Q_NULLPTR));
        label_13->setText(QApplication::translate("Ticket", "\347\254\2541\346\216\222", Q_NULLPTR));
        A1->setText(QString());
        B1->setText(QString());
        C1->setText(QString());
        D1->setText(QString());
        F1->setText(QString());
        submit_order_button->setText(QApplication::translate("Ticket", "\346\217\220\344\272\244\350\256\242\345\215\225", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Ticket", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("Ticket", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        search_departure_edit->setText(QString());
        search_button->setText(QApplication::translate("Ticket", "\346\237\245\350\257\242", Q_NULLPTR));
        search_arrival_edit->setText(QString());
        label_2->setText(QApplication::translate("Ticket", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
