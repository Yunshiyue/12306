/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_Transfer
{
public:
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *transfer_table;
    QLabel *date_label;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_9;
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
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QLabel *label_15;
    QLineEdit *ticket_train_edit_2;
    QLabel *label_16;
    QLineEdit *ticket_departure_edit_2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_17;
    QLineEdit *ticket_departure_time_edit_2;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_18;
    QLineEdit *ticket_arrival_edit_2;
    QLabel *label_19;
    QLineEdit *ticket_arrival_time_edit_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLabel *label_9;
    QTableWidget *passenger_widget;
    QPushButton *choose_passenger_button;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *seat_type_combo_box;
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
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_4;
    QLabel *label_20;
    QComboBox *seat_type_combo_box_2;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_5;
    QLabel *label_21;
    QCheckBox *A2_2;
    QCheckBox *B2_2;
    QCheckBox *C2_2;
    QCheckBox *D2_2;
    QCheckBox *F2_2;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QCheckBox *A1_2;
    QCheckBox *B1_2;
    QCheckBox *C1_2;
    QCheckBox *D1_2;
    QCheckBox *F1_2;
    QPushButton *submit_order_button;

    void setupUi(QWidget *Transfer)
    {
        if (Transfer->objectName().isEmpty())
            Transfer->setObjectName(QStringLiteral("Transfer"));
        Transfer->resize(1408, 906);
        gridLayout_12 = new QGridLayout(Transfer);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        groupBox_2 = new QGroupBox(Transfer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        transfer_table = new QTableWidget(groupBox_2);
        if (transfer_table->columnCount() < 11)
            transfer_table->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        transfer_table->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        transfer_table->setObjectName(QStringLiteral("transfer_table"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        transfer_table->setFont(font);

        gridLayout_2->addWidget(transfer_table, 2, 0, 1, 1);

        date_label = new QLabel(groupBox_2);
        date_label->setObjectName(QStringLiteral("date_label"));
        date_label->setMinimumSize(QSize(0, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\273\217\351\273\221\347\256\200\344\275\223"));
        font1.setPointSize(20);
        date_label->setFont(font1);
        date_label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(date_label, 1, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(Transfer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_9 = new QGridLayout(groupBox_5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 0, 1, 1, 1);

        ticket_train_edit = new QLineEdit(groupBox_5);
        ticket_train_edit->setObjectName(QStringLiteral("ticket_train_edit"));
        ticket_train_edit->setEnabled(false);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        ticket_train_edit->setFont(font2);

        gridLayout_9->addWidget(ticket_train_edit, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_9->addWidget(label_5, 1, 1, 1, 1);

        ticket_departure_edit = new QLineEdit(groupBox_5);
        ticket_departure_edit->setObjectName(QStringLiteral("ticket_departure_edit"));
        ticket_departure_edit->setEnabled(false);
        ticket_departure_edit->setFont(font2);

        gridLayout_9->addWidget(ticket_departure_edit, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_9->addWidget(label_6, 2, 1, 1, 1);

        ticket_departure_time_edit = new QLineEdit(groupBox_5);
        ticket_departure_time_edit->setObjectName(QStringLiteral("ticket_departure_time_edit"));
        ticket_departure_time_edit->setEnabled(false);
        ticket_departure_time_edit->setFont(font2);

        gridLayout_9->addWidget(ticket_departure_time_edit, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_9->addWidget(label_7, 3, 1, 1, 1);

        ticket_arrival_edit = new QLineEdit(groupBox_5);
        ticket_arrival_edit->setObjectName(QStringLiteral("ticket_arrival_edit"));
        ticket_arrival_edit->setEnabled(false);
        ticket_arrival_edit->setFont(font2);

        gridLayout_9->addWidget(ticket_arrival_edit, 3, 2, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_9->addWidget(label_8, 4, 1, 1, 1);

        ticket_arrival_time_edit = new QLineEdit(groupBox_5);
        ticket_arrival_time_edit->setObjectName(QStringLiteral("ticket_arrival_time_edit"));
        ticket_arrival_time_edit->setEnabled(false);
        ticket_arrival_time_edit->setFont(font2);

        gridLayout_9->addWidget(ticket_arrival_time_edit, 4, 2, 1, 1);


        gridLayout_11->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_10->addWidget(label_15, 0, 1, 1, 1);

        ticket_train_edit_2 = new QLineEdit(groupBox_6);
        ticket_train_edit_2->setObjectName(QStringLiteral("ticket_train_edit_2"));
        ticket_train_edit_2->setEnabled(false);
        ticket_train_edit_2->setFont(font2);

        gridLayout_10->addWidget(ticket_train_edit_2, 0, 2, 1, 1);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_10->addWidget(label_16, 1, 1, 1, 1);

        ticket_departure_edit_2 = new QLineEdit(groupBox_6);
        ticket_departure_edit_2->setObjectName(QStringLiteral("ticket_departure_edit_2"));
        ticket_departure_edit_2->setEnabled(false);
        ticket_departure_edit_2->setFont(font2);

        gridLayout_10->addWidget(ticket_departure_edit_2, 1, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_11, 2, 0, 1, 1);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_10->addWidget(label_17, 2, 1, 1, 1);

        ticket_departure_time_edit_2 = new QLineEdit(groupBox_6);
        ticket_departure_time_edit_2->setObjectName(QStringLiteral("ticket_departure_time_edit_2"));
        ticket_departure_time_edit_2->setEnabled(false);
        ticket_departure_time_edit_2->setFont(font2);

        gridLayout_10->addWidget(ticket_departure_time_edit_2, 2, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_12, 2, 3, 1, 1);

        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_10->addWidget(label_18, 3, 1, 1, 1);

        ticket_arrival_edit_2 = new QLineEdit(groupBox_6);
        ticket_arrival_edit_2->setObjectName(QStringLiteral("ticket_arrival_edit_2"));
        ticket_arrival_edit_2->setEnabled(false);
        ticket_arrival_edit_2->setFont(font2);

        gridLayout_10->addWidget(ticket_arrival_edit_2, 3, 2, 1, 1);

        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_10->addWidget(label_19, 4, 1, 1, 1);

        ticket_arrival_time_edit_2 = new QLineEdit(groupBox_6);
        ticket_arrival_time_edit_2->setObjectName(QStringLiteral("ticket_arrival_time_edit_2"));
        ticket_arrival_time_edit_2->setEnabled(false);
        ticket_arrival_time_edit_2->setFont(font2);

        gridLayout_10->addWidget(ticket_arrival_time_edit_2, 4, 2, 1, 1);


        gridLayout_11->addWidget(groupBox_6, 1, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        passenger_widget = new QTableWidget(groupBox_7);
        if (passenger_widget->columnCount() < 3)
            passenger_widget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        passenger_widget->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        passenger_widget->setObjectName(QStringLiteral("passenger_widget"));
        passenger_widget->setFont(font);

        gridLayout_7->addWidget(passenger_widget, 0, 1, 1, 1);

        choose_passenger_button = new QPushButton(groupBox_7);
        choose_passenger_button->setObjectName(QStringLiteral("choose_passenger_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\267\273\345\212\240\344\271\230\350\275\246\344\272\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        choose_passenger_button->setIcon(icon);

        gridLayout_7->addWidget(choose_passenger_button, 1, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(groupBox);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_6 = new QGridLayout(groupBox_8);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout = new QGridLayout(groupBox_9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_9);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        seat_type_combo_box = new QComboBox(groupBox_9);
        seat_type_combo_box->setObjectName(QStringLiteral("seat_type_combo_box"));

        gridLayout->addWidget(seat_type_combo_box, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_9);
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


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 2);


        gridLayout_6->addWidget(groupBox_9, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(groupBox_8);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        gridLayout_4 = new QGridLayout(groupBox_10);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_20 = new QLabel(groupBox_10);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_4->addWidget(label_20, 0, 0, 1, 1);

        seat_type_combo_box_2 = new QComboBox(groupBox_10);
        seat_type_combo_box_2->setObjectName(QStringLiteral("seat_type_combo_box_2"));

        gridLayout_4->addWidget(seat_type_combo_box_2, 0, 1, 1, 1);

        groupBox_11 = new QGroupBox(groupBox_10);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        gridLayout_5 = new QGridLayout(groupBox_11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_21 = new QLabel(groupBox_11);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        A2_2 = new QCheckBox(groupBox_11);
        A2_2->setObjectName(QStringLiteral("A2_2"));
        A2_2->setIcon(icon1);
        A2_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(A2_2, 0, 1, 1, 1);

        B2_2 = new QCheckBox(groupBox_11);
        B2_2->setObjectName(QStringLiteral("B2_2"));
        B2_2->setIcon(icon2);
        B2_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(B2_2, 0, 2, 1, 1);

        C2_2 = new QCheckBox(groupBox_11);
        C2_2->setObjectName(QStringLiteral("C2_2"));
        C2_2->setIcon(icon3);
        C2_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(C2_2, 0, 3, 1, 1);

        D2_2 = new QCheckBox(groupBox_11);
        D2_2->setObjectName(QStringLiteral("D2_2"));
        D2_2->setIcon(icon4);
        D2_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(D2_2, 0, 5, 1, 1);

        F2_2 = new QCheckBox(groupBox_11);
        F2_2->setObjectName(QStringLiteral("F2_2"));
        F2_2->setIcon(icon5);
        F2_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(F2_2, 0, 6, 1, 1);

        label_22 = new QLabel(groupBox_11);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_5->addWidget(label_22, 1, 0, 1, 1);

        label_23 = new QLabel(groupBox_11);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_5->addWidget(label_23, 1, 4, 1, 1);

        label_24 = new QLabel(groupBox_11);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_5->addWidget(label_24, 1, 7, 1, 1);

        label_25 = new QLabel(groupBox_11);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_5->addWidget(label_25, 2, 0, 1, 1);

        A1_2 = new QCheckBox(groupBox_11);
        A1_2->setObjectName(QStringLiteral("A1_2"));
        A1_2->setIcon(icon1);
        A1_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(A1_2, 2, 1, 1, 1);

        B1_2 = new QCheckBox(groupBox_11);
        B1_2->setObjectName(QStringLiteral("B1_2"));
        B1_2->setIcon(icon2);
        B1_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(B1_2, 2, 2, 1, 1);

        C1_2 = new QCheckBox(groupBox_11);
        C1_2->setObjectName(QStringLiteral("C1_2"));
        C1_2->setIcon(icon3);
        C1_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(C1_2, 2, 3, 1, 1);

        D1_2 = new QCheckBox(groupBox_11);
        D1_2->setObjectName(QStringLiteral("D1_2"));
        D1_2->setIcon(icon4);
        D1_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(D1_2, 2, 5, 1, 1);

        F1_2 = new QCheckBox(groupBox_11);
        F1_2->setObjectName(QStringLiteral("F1_2"));
        F1_2->setIcon(icon5);
        F1_2->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(F1_2, 2, 6, 1, 1);


        gridLayout_4->addWidget(groupBox_11, 1, 0, 1, 2);


        gridLayout_6->addWidget(groupBox_10, 0, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_8, 1, 0, 1, 1);


        gridLayout_11->addWidget(groupBox, 2, 0, 1, 1);

        submit_order_button = new QPushButton(groupBox_4);
        submit_order_button->setObjectName(QStringLiteral("submit_order_button"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icon/icon/\346\217\220\344\272\244\350\256\242\345\215\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        submit_order_button->setIcon(icon6);

        gridLayout_11->addWidget(submit_order_button, 3, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_4, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(ticket_train_edit);
        label_5->setBuddy(ticket_departure_edit);
        label_6->setBuddy(ticket_departure_time_edit);
        label_7->setBuddy(ticket_arrival_edit);
        label_8->setBuddy(ticket_arrival_time_edit);
        label_15->setBuddy(ticket_train_edit);
        label_16->setBuddy(ticket_departure_edit);
        label_17->setBuddy(ticket_departure_time_edit);
        label_18->setBuddy(ticket_arrival_edit);
        label_19->setBuddy(ticket_arrival_time_edit);
        label_9->setBuddy(passenger_widget);
        label_3->setBuddy(seat_type_combo_box);
        label_20->setBuddy(seat_type_combo_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(Transfer);

        QMetaObject::connectSlotsByName(Transfer);
    } // setupUi

    void retranslateUi(QWidget *Transfer)
    {
        Transfer->setWindowTitle(QApplication::translate("Transfer", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Transfer", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = transfer_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Transfer", "\346\226\271\346\241\210", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = transfer_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Transfer", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = transfer_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Transfer", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = transfer_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Transfer", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = transfer_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = transfer_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = transfer_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Transfer", "\345\216\206\346\227\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = transfer_table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Transfer", "\345\225\206\345\212\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = transfer_table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Transfer", "\344\270\200\347\255\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = transfer_table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Transfer", "\344\272\214\347\255\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = transfer_table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Transfer", "\346\200\273\345\216\206\346\227\266", Q_NULLPTR));
        date_label->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Transfer", "\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Transfer", "\347\254\254\344\270\200\347\250\213\350\275\246\347\245\250", Q_NULLPTR));
        label_4->setText(QApplication::translate("Transfer", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("Transfer", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        label_6->setText(QApplication::translate("Transfer", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        label_7->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
        label_8->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Transfer", "\347\254\254\344\272\214\347\250\213\350\275\246\347\245\250", Q_NULLPTR));
        label_15->setText(QApplication::translate("Transfer", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        label_16->setText(QApplication::translate("Transfer", "\345\207\272\345\217\221\347\253\231", Q_NULLPTR));
        label_17->setText(QApplication::translate("Transfer", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        label_18->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\347\253\231", Q_NULLPTR));
        label_19->setText(QApplication::translate("Transfer", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Transfer", "\350\256\242\345\215\225\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("Transfer", "\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        label_9->setText(QApplication::translate("Transfer", "\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = passenger_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("Transfer", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = passenger_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("Transfer", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = passenger_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("Transfer", "\347\261\273\345\236\213", Q_NULLPTR));
        choose_passenger_button->setText(QApplication::translate("Transfer", "\351\200\211\346\213\251\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("Transfer", "\345\272\247\344\275\215", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("Transfer", "\347\254\254\344\270\200\347\250\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("Transfer", "\345\272\247\344\275\215\347\261\273\345\236\213", Q_NULLPTR));
        seat_type_combo_box->clear();
        seat_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Transfer", "\344\272\214\347\255\211", Q_NULLPTR)
         << QApplication::translate("Transfer", "\344\270\200\347\255\211", Q_NULLPTR)
         << QApplication::translate("Transfer", "\345\225\206\345\212\241", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("Transfer", "\351\200\211\345\272\247", Q_NULLPTR));
        label_14->setText(QApplication::translate("Transfer", "\347\254\2542\346\216\222", Q_NULLPTR));
        A2->setText(QString());
        B2->setText(QString());
        C2->setText(QString());
        D2->setText(QString());
        F2->setText(QString());
        label_10->setText(QApplication::translate("Transfer", "\351\235\240\347\252\227", Q_NULLPTR));
        label_12->setText(QApplication::translate("Transfer", "\350\277\207\351\201\223", Q_NULLPTR));
        label_11->setText(QApplication::translate("Transfer", "\351\235\240\347\252\227", Q_NULLPTR));
        label_13->setText(QApplication::translate("Transfer", "\347\254\2541\346\216\222", Q_NULLPTR));
        A1->setText(QString());
        B1->setText(QString());
        C1->setText(QString());
        D1->setText(QString());
        F1->setText(QString());
        groupBox_10->setTitle(QApplication::translate("Transfer", "\347\254\254\344\272\214\347\250\213", Q_NULLPTR));
        label_20->setText(QApplication::translate("Transfer", "\345\272\247\344\275\215\347\261\273\345\236\213", Q_NULLPTR));
        seat_type_combo_box_2->clear();
        seat_type_combo_box_2->insertItems(0, QStringList()
         << QApplication::translate("Transfer", "\344\272\214\347\255\211", Q_NULLPTR)
         << QApplication::translate("Transfer", "\344\270\200\347\255\211", Q_NULLPTR)
         << QApplication::translate("Transfer", "\345\225\206\345\212\241", Q_NULLPTR)
        );
        groupBox_11->setTitle(QApplication::translate("Transfer", "\351\200\211\345\272\247", Q_NULLPTR));
        label_21->setText(QApplication::translate("Transfer", "\347\254\2542\346\216\222", Q_NULLPTR));
        A2_2->setText(QString());
        B2_2->setText(QString());
        C2_2->setText(QString());
        D2_2->setText(QString());
        F2_2->setText(QString());
        label_22->setText(QApplication::translate("Transfer", "\351\235\240\347\252\227", Q_NULLPTR));
        label_23->setText(QApplication::translate("Transfer", "\350\277\207\351\201\223", Q_NULLPTR));
        label_24->setText(QApplication::translate("Transfer", "\351\235\240\347\252\227", Q_NULLPTR));
        label_25->setText(QApplication::translate("Transfer", "\347\254\2541\346\216\222", Q_NULLPTR));
        A1_2->setText(QString());
        B1_2->setText(QString());
        C1_2->setText(QString());
        D1_2->setText(QString());
        F1_2->setText(QString());
        submit_order_button->setText(QApplication::translate("Transfer", "\346\217\220\344\272\244\350\256\242\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
