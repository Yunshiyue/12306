/********************************************************************************
** Form generated from reading UI file 'addpassengerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSENGERDIALOG_H
#define UI_ADDPASSENGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddPassengerDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QComboBox *sex_combo_box;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *id_number_edit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *phone_edit;
    QLabel *label_5;
    QComboBox *passenger_type_combo_box;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *add_button;

    void setupUi(QDialog *AddPassengerDialog)
    {
        if (AddPassengerDialog->objectName().isEmpty())
            AddPassengerDialog->setObjectName(QString::fromUtf8("AddPassengerDialog"));
        AddPassengerDialog->resize(363, 294);
        gridLayout = new QGridLayout(AddPassengerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 4, 1, 1);

        label = new QLabel(AddPassengerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        name_edit = new QLineEdit(AddPassengerDialog);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        name_edit->setFont(font);

        gridLayout->addWidget(name_edit, 1, 3, 1, 2);

        label_2 = new QLabel(AddPassengerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        sex_combo_box = new QComboBox(AddPassengerDialog);
        sex_combo_box->addItem(QString());
        sex_combo_box->addItem(QString());
        sex_combo_box->setObjectName(QString::fromUtf8("sex_combo_box"));
        sex_combo_box->setFont(font);

        gridLayout->addWidget(sex_combo_box, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(85, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        label_3 = new QLabel(AddPassengerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 2);

        id_number_edit = new QLineEdit(AddPassengerDialog);
        id_number_edit->setObjectName(QString::fromUtf8("id_number_edit"));
        id_number_edit->setFont(font);

        gridLayout->addWidget(id_number_edit, 3, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(84, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 5, 1, 1);

        label_4 = new QLabel(AddPassengerDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 2);

        phone_edit = new QLineEdit(AddPassengerDialog);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));
        phone_edit->setFont(font);

        gridLayout->addWidget(phone_edit, 4, 3, 1, 2);

        label_5 = new QLabel(AddPassengerDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        passenger_type_combo_box = new QComboBox(AddPassengerDialog);
        passenger_type_combo_box->addItem(QString());
        passenger_type_combo_box->addItem(QString());
        passenger_type_combo_box->setObjectName(QString::fromUtf8("passenger_type_combo_box"));
        passenger_type_combo_box->setFont(font);

        gridLayout->addWidget(passenger_type_combo_box, 5, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 7, 5, 1, 1);

        add_button = new QPushButton(AddPassengerDialog);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\267\273\345\212\240.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_button->setIcon(icon);

        gridLayout->addWidget(add_button, 7, 3, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(name_edit);
        label_2->setBuddy(sex_combo_box);
        label_3->setBuddy(id_number_edit);
        label_4->setBuddy(phone_edit);
        label_5->setBuddy(passenger_type_combo_box);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AddPassengerDialog);

        QMetaObject::connectSlotsByName(AddPassengerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPassengerDialog)
    {
        AddPassengerDialog->setWindowTitle(QCoreApplication::translate("AddPassengerDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddPassengerDialog", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("AddPassengerDialog", "\346\200\247\345\210\253", nullptr));
        sex_combo_box->setItemText(0, QCoreApplication::translate("AddPassengerDialog", "\347\224\267", nullptr));
        sex_combo_box->setItemText(1, QCoreApplication::translate("AddPassengerDialog", "\345\245\263", nullptr));

        label_3->setText(QCoreApplication::translate("AddPassengerDialog", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("AddPassengerDialog", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("AddPassengerDialog", "\347\261\273\345\236\213", nullptr));
        passenger_type_combo_box->setItemText(0, QCoreApplication::translate("AddPassengerDialog", "\346\210\220\344\272\272", nullptr));
        passenger_type_combo_box->setItemText(1, QCoreApplication::translate("AddPassengerDialog", "\345\255\246\347\224\237", nullptr));

        add_button->setText(QCoreApplication::translate("AddPassengerDialog", "\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPassengerDialog: public Ui_AddPassengerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSENGERDIALOG_H
