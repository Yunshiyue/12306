/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *username_label;
    QLineEdit *username_edit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *password_label;
    QLineEdit *password_edit;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *login_button;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1311, 662);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(531, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        username_label = new QLabel(Login);
        username_label->setObjectName(QStringLiteral("username_label"));

        gridLayout->addWidget(username_label, 1, 1, 1, 2);

        username_edit = new QLineEdit(Login);
        username_edit->setObjectName(QStringLiteral("username_edit"));

        gridLayout->addWidget(username_edit, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(530, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(531, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        password_label = new QLabel(Login);
        password_label->setObjectName(QStringLiteral("password_label"));

        gridLayout->addWidget(password_label, 2, 1, 1, 1);

        password_edit = new QLineEdit(Login);
        password_edit->setObjectName(QStringLiteral("password_edit"));
        password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_edit, 2, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(530, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(531, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 0, 1, 1);

        login_button = new QPushButton(Login);
        login_button->setObjectName(QStringLiteral("login_button"));

        gridLayout->addWidget(login_button, 3, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(530, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 3, 4, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 272, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 4, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
        username_label->setBuddy(username_edit);
        password_label->setBuddy(password_edit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", Q_NULLPTR));
        username_label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        password_label->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        login_button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
