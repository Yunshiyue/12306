/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *old_password_edit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *new_password_edit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *sure_password_edit;
    QPushButton *sure_button;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName(QString::fromUtf8("ChangePasswordDialog"));
        ChangePasswordDialog->resize(400, 300);
        gridLayout = new QGridLayout(ChangePasswordDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        label = new QLabel(ChangePasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        old_password_edit = new QLineEdit(ChangePasswordDialog);
        old_password_edit->setObjectName(QString::fromUtf8("old_password_edit"));
        old_password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(old_password_edit, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label_2 = new QLabel(ChangePasswordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        new_password_edit = new QLineEdit(ChangePasswordDialog);
        new_password_edit->setObjectName(QString::fromUtf8("new_password_edit"));
        new_password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(new_password_edit, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        label_3 = new QLabel(ChangePasswordDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        sure_password_edit = new QLineEdit(ChangePasswordDialog);
        sure_password_edit->setObjectName(QString::fromUtf8("sure_password_edit"));
        sure_password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(sure_password_edit, 3, 2, 1, 1);

        sure_button = new QPushButton(ChangePasswordDialog);
        sure_button->setObjectName(QString::fromUtf8("sure_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\347\241\256\345\256\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        sure_button->setIcon(icon);

        gridLayout->addWidget(sure_button, 4, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(old_password_edit);
        label_2->setBuddy(new_password_edit);
        label_3->setBuddy(sure_password_edit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QCoreApplication::translate("ChangePasswordDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangePasswordDialog", "\345\216\237\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("ChangePasswordDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        sure_button->setText(QCoreApplication::translate("ChangePasswordDialog", "\347\241\256\345\256\232\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
