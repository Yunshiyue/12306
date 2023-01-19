/********************************************************************************
** Form generated from reading UI file 'changepassengerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSENGERDIALOG_H
#define UI_CHANGEPASSENGERDIALOG_H

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

class Ui_ChangePassenger
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *sex_edit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *name_edit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *id_number_edit;
    QComboBox *type_combo_box;
    QSpacerItem *horizontalSpacer;
    QLineEdit *phone_edit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ChangePassenger)
    {
        if (ChangePassenger->objectName().isEmpty())
            ChangePassenger->setObjectName(QString::fromUtf8("ChangePassenger"));
        ChangePassenger->resize(424, 331);
        gridLayout = new QGridLayout(ChangePassenger);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        sex_edit = new QLineEdit(ChangePassenger);
        sex_edit->setObjectName(QString::fromUtf8("sex_edit"));
        sex_edit->setEnabled(false);
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        sex_edit->setFont(font);

        gridLayout->addWidget(sex_edit, 2, 2, 1, 1);

        pushButton = new QPushButton(ChangePassenger);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\347\241\256\345\256\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 2, 1, 1);

        label = new QLabel(ChangePassenger);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(ChangePassenger);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        label_5 = new QLabel(ChangePassenger);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        label_3 = new QLabel(ChangePassenger);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 7, 3, 1, 2);

        name_edit = new QLineEdit(ChangePassenger);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        name_edit->setEnabled(false);
        name_edit->setFont(font);

        gridLayout->addWidget(name_edit, 1, 2, 1, 1);

        label_4 = new QLabel(ChangePassenger);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(144, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 0, 1, 2);

        id_number_edit = new QLineEdit(ChangePassenger);
        id_number_edit->setObjectName(QString::fromUtf8("id_number_edit"));
        id_number_edit->setEnabled(false);
        id_number_edit->setFont(font);

        gridLayout->addWidget(id_number_edit, 3, 2, 1, 1);

        type_combo_box = new QComboBox(ChangePassenger);
        type_combo_box->addItem(QString());
        type_combo_box->addItem(QString());
        type_combo_box->setObjectName(QString::fromUtf8("type_combo_box"));
        type_combo_box->setFont(font);

        gridLayout->addWidget(type_combo_box, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        phone_edit = new QLineEdit(ChangePassenger);
        phone_edit->setObjectName(QString::fromUtf8("phone_edit"));
        phone_edit->setFont(font);

        gridLayout->addWidget(phone_edit, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 2, 1, 1);


        retranslateUi(ChangePassenger);

        QMetaObject::connectSlotsByName(ChangePassenger);
    } // setupUi

    void retranslateUi(QDialog *ChangePassenger)
    {
        ChangePassenger->setWindowTitle(QCoreApplication::translate("ChangePassenger", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ChangePassenger", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("ChangePassenger", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("ChangePassenger", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("ChangePassenger", "\347\261\273\345\236\213", nullptr));
        label_3->setText(QCoreApplication::translate("ChangePassenger", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("ChangePassenger", "\346\211\213\346\234\272\345\217\267", nullptr));
        type_combo_box->setItemText(0, QCoreApplication::translate("ChangePassenger", "\346\210\220\344\272\272", nullptr));
        type_combo_box->setItemText(1, QCoreApplication::translate("ChangePassenger", "\345\255\246\347\224\237", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ChangePassenger: public Ui_ChangePassenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSENGERDIALOG_H
