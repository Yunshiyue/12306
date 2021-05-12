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
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *username_label;
    QLineEdit *username_edit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *password_label;
    QLineEdit *password_edit;
    QPushButton *login_button;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(472, 422);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 154, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        username_label = new QLabel(Login);
        username_label->setObjectName(QStringLiteral("username_label"));

        gridLayout->addWidget(username_label, 1, 1, 1, 1);

        username_edit = new QLineEdit(Login);
        username_edit->setObjectName(QStringLiteral("username_edit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        username_edit->setFont(font);

        gridLayout->addWidget(username_edit, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 2, 1);

        password_label = new QLabel(Login);
        password_label->setObjectName(QStringLiteral("password_label"));

        gridLayout->addWidget(password_label, 2, 1, 1, 1);

        password_edit = new QLineEdit(Login);
        password_edit->setObjectName(QStringLiteral("password_edit"));
        password_edit->setFont(font);
        password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_edit, 2, 2, 1, 1);

        login_button = new QPushButton(Login);
        login_button->setObjectName(QStringLiteral("login_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/icon/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_button->setIcon(icon);

        gridLayout->addWidget(login_button, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 153, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

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
