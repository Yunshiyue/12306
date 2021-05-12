/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            Information->setObjectName(QStringLiteral("Information"));
        Information->resize(1306, 789);
        horizontalLayout = new QHBoxLayout(Information);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Information);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username_edit = new QLineEdit(groupBox);
        username_edit->setObjectName(QStringLiteral("username_edit"));
        username_edit->setReadOnly(true);

        gridLayout->addWidget(username_edit, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name_edit = new QLineEdit(groupBox);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setReadOnly(true);

        gridLayout->addWidget(name_edit, 1, 1, 1, 2);

        sex_edit = new QLineEdit(groupBox);
        sex_edit->setObjectName(QStringLiteral("sex_edit"));
        sex_edit->setFrame(true);
        sex_edit->setReadOnly(true);

        gridLayout->addWidget(sex_edit, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        id_number_edit = new QLineEdit(groupBox);
        id_number_edit->setObjectName(QStringLiteral("id_number_edit"));
        id_number_edit->setReadOnly(true);

        gridLayout->addWidget(id_number_edit, 3, 1, 1, 2);

        phone_edit = new QLineEdit(groupBox);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));
        phone_edit->setReadOnly(true);

        gridLayout->addWidget(phone_edit, 4, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        email_edit = new QLineEdit(groupBox);
        email_edit->setObjectName(QStringLiteral("email_edit"));
        email_edit->setReadOnly(true);

        gridLayout->addWidget(email_edit, 5, 1, 1, 2);

        update_button = new QPushButton(groupBox);
        update_button->setObjectName(QStringLiteral("update_button"));

        gridLayout->addWidget(update_button, 6, 0, 1, 1);

        sure_button = new QPushButton(groupBox);
        sure_button->setObjectName(QStringLiteral("sure_button"));
        sure_button->setEnabled(false);

        gridLayout->addWidget(sure_button, 6, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        update_password_button = new QPushButton(groupBox);
        update_password_button->setObjectName(QStringLiteral("update_password_button"));

        gridLayout->addWidget(update_password_button, 7, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cancel_button = new QPushButton(groupBox);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setEnabled(false);

        gridLayout->addWidget(cancel_button, 6, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Information);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        passenger_table->setObjectName(QStringLiteral("passenger_table"));
        passenger_table->setSortingEnabled(false);
        passenger_table->setRowCount(0);

        verticalLayout->addWidget(passenger_table);

        change_passenger_button = new QPushButton(groupBox_2);
        change_passenger_button->setObjectName(QStringLiteral("change_passenger_button"));
        change_passenger_button->setEnabled(false);

        verticalLayout->addWidget(change_passenger_button);

        delete_passenger_button = new QPushButton(groupBox_2);
        delete_passenger_button->setObjectName(QStringLiteral("delete_passenger_button"));
        delete_passenger_button->setEnabled(false);

        verticalLayout->addWidget(delete_passenger_button);

        add_passenger_button = new QPushButton(groupBox_2);
        add_passenger_button->setObjectName(QStringLiteral("add_passenger_button"));

        verticalLayout->addWidget(add_passenger_button);


        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Information", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("Information", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Information", "\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("Information", "\346\200\247\345\210\253", Q_NULLPTR));
        label_4->setText(QApplication::translate("Information", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        update_button->setText(QApplication::translate("Information", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        sure_button->setText(QApplication::translate("Information", "\347\241\256\345\256\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Information", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        update_password_button->setText(QApplication::translate("Information", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("Information", "\351\202\256\347\256\261", Q_NULLPTR));
        cancel_button->setText(QApplication::translate("Information", "\345\217\226\346\266\210", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Information", "\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = passenger_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Information", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = passenger_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Information", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = passenger_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Information", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = passenger_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Information", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = passenger_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Information", "\347\261\273\345\236\213", Q_NULLPTR));
        change_passenger_button->setText(QApplication::translate("Information", "\344\277\256\346\224\271", Q_NULLPTR));
        delete_passenger_button->setText(QApplication::translate("Information", "\345\210\240\351\231\244", Q_NULLPTR));
        add_passenger_button->setText(QApplication::translate("Information", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
