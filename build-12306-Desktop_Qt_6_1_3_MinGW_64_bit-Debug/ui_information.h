/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username_edit;
    QLabel *label_2;
    QLineEdit *name_edit;
    QLineEdit *sex_edit;
    QLabel *label_3;
    QLineEdit *id_number_edit;
    QLineEdit *phone_edit;
    QLabel *label_4;
    QLineEdit *email_edit;
    QPushButton *update_button;
    QPushButton *sure_button;
    QLabel *label_5;
    QPushButton *update_password_button;
    QLabel *label_6;
    QPushButton *cancel_button;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *passenger_table;
    QPushButton *change_passenger_button;
    QPushButton *delete_passenger_button;
    QPushButton *add_passenger_button;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(1306, 789);
        horizontalLayout = new QHBoxLayout(Information);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Information);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(350, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username_edit = new QLineEdit(groupBox);
        username_edit->setObjectName(QString::fromUtf8("username_edit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        username_edit->setFont(font);
        username_edit->setReadOnly(true);

        gridLayout->addWidget(username_edit, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name_edit = new QLineEdit(groupBox);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        name_edit->setFont(font);
        name_edit->setReadOnly(true);

        gridLayout->addWidget(name_edit, 1, 1, 1, 2);

        sex_edit = new QLineEdit(groupBox);
        sex_edit->setObjectName(QString::fromUtf8("sex_edit"));
        sex_edit->setFont(font);
        sex_edit->setFrame(true);
        sex_edit->setReadOnly(true);

        gridLayout->addWidget(sex_edit, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        id_number_edit = new QLineEdit(groupBox);
        id_number_edit->setObjectName(QString::fromUtf8("id_number_edit"));
        id_number_edit->setFont(font);
        id_number_edit->setReadOnly(true);

        gridLayout->addWidget(id_number_edit, 3, 1, 1, 2);

        phone_edit = new QLineEdit(groupBox);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));
        phone_edit->setFont(font);
        phone_edit->setReadOnly(true);

        gridLayout->addWidget(phone_edit, 4, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        email_edit = new QLineEdit(groupBox);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setFont(font);
        email_edit->setReadOnly(true);

        gridLayout->addWidget(email_edit, 5, 1, 1, 2);

        update_button = new QPushButton(groupBox);
        update_button->setObjectName(QString::fromUtf8("update_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\344\277\256\346\224\271.png"), QSize(), QIcon::Normal, QIcon::Off);
        update_button->setIcon(icon);

        gridLayout->addWidget(update_button, 6, 0, 1, 1);

        sure_button = new QPushButton(groupBox);
        sure_button->setObjectName(QString::fromUtf8("sure_button"));
        sure_button->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icon/\347\241\256\345\256\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        sure_button->setIcon(icon1);

        gridLayout->addWidget(sure_button, 6, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        update_password_button = new QPushButton(groupBox);
        update_password_button->setObjectName(QString::fromUtf8("update_password_button"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icon/\345\257\206\347\240\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        update_password_button->setIcon(icon2);

        gridLayout->addWidget(update_password_button, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cancel_button = new QPushButton(groupBox);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icon/\345\217\226\346\266\210.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel_button->setIcon(icon3);

        gridLayout->addWidget(cancel_button, 6, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Information);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(600, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        passenger_table = new QTableWidget(groupBox_2);
        if (passenger_table->columnCount() < 5)
            passenger_table->setColumnCount(5);
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
        passenger_table->setObjectName(QString::fromUtf8("passenger_table"));
        passenger_table->setMaximumSize(QSize(600, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(11);
        passenger_table->setFont(font1);
        passenger_table->setSortingEnabled(false);
        passenger_table->setRowCount(0);

        verticalLayout->addWidget(passenger_table);

        change_passenger_button = new QPushButton(groupBox_2);
        change_passenger_button->setObjectName(QString::fromUtf8("change_passenger_button"));
        change_passenger_button->setEnabled(false);
        change_passenger_button->setIcon(icon);

        verticalLayout->addWidget(change_passenger_button);

        delete_passenger_button = new QPushButton(groupBox_2);
        delete_passenger_button->setObjectName(QString::fromUtf8("delete_passenger_button"));
        delete_passenger_button->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icon/\345\210\240\351\231\244.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_passenger_button->setIcon(icon4);

        verticalLayout->addWidget(delete_passenger_button);

        add_passenger_button = new QPushButton(groupBox_2);
        add_passenger_button->setObjectName(QString::fromUtf8("add_passenger_button"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icon/\346\267\273\345\212\240.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_passenger_button->setIcon(icon5);

        verticalLayout->addWidget(add_passenger_button);


        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QCoreApplication::translate("Information", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Information", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Information", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Information", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Information", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("Information", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        update_button->setText(QCoreApplication::translate("Information", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        sure_button->setText(QCoreApplication::translate("Information", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QCoreApplication::translate("Information", "\346\211\213\346\234\272\345\217\267", nullptr));
        update_password_button->setText(QCoreApplication::translate("Information", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("Information", "\351\202\256\347\256\261", nullptr));
        cancel_button->setText(QCoreApplication::translate("Information", "\345\217\226\346\266\210", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Information", "\344\271\230\350\275\246\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = passenger_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Information", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = passenger_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Information", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = passenger_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Information", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = passenger_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Information", "\346\211\213\346\234\272\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = passenger_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Information", "\347\261\273\345\236\213", nullptr));
        change_passenger_button->setText(QCoreApplication::translate("Information", "\344\277\256\346\224\271", nullptr));
        delete_passenger_button->setText(QCoreApplication::translate("Information", "\345\210\240\351\231\244", nullptr));
        add_passenger_button->setText(QCoreApplication::translate("Information", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
