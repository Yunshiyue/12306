/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *username_edit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *password_edit;
    QLabel *label_3;
    QLineEdit *password_edit2;
    QLabel *label_4;
    QLineEdit *name;
    QLabel *label_5;
    QComboBox *sex_comboBox;
    QLabel *label_6;
    QLineEdit *id_number_edit;
    QLabel *label_7;
    QLineEdit *phone_edit;
    QLabel *label_8;
    QLineEdit *email_edit;
    QPushButton *register_button;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(1297, 523);
        gridLayout = new QGridLayout(Register);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(537, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        username_edit = new QLineEdit(Register);
        username_edit->setObjectName(QStringLiteral("username_edit"));

        gridLayout->addWidget(username_edit, 1, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(537, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        label_2 = new QLabel(Register);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        password_edit = new QLineEdit(Register);
        password_edit->setObjectName(QStringLiteral("password_edit"));
        password_edit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_edit, 2, 2, 1, 2);

        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        password_edit2 = new QLineEdit(Register);
        password_edit2->setObjectName(QStringLiteral("password_edit2"));
        password_edit2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_edit2, 3, 2, 1, 2);

        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        name = new QLineEdit(Register);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 4, 2, 1, 2);

        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        sex_comboBox = new QComboBox(Register);
        sex_comboBox->setObjectName(QStringLiteral("sex_comboBox"));

        gridLayout->addWidget(sex_comboBox, 5, 2, 1, 2);

        label_6 = new QLabel(Register);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 1, 1, 1);

        id_number_edit = new QLineEdit(Register);
        id_number_edit->setObjectName(QStringLiteral("id_number_edit"));

        gridLayout->addWidget(id_number_edit, 6, 2, 1, 2);

        label_7 = new QLabel(Register);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 1, 1, 1);

        phone_edit = new QLineEdit(Register);
        phone_edit->setObjectName(QStringLiteral("phone_edit"));

        gridLayout->addWidget(phone_edit, 7, 2, 1, 2);

        label_8 = new QLabel(Register);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 1, 1, 1);

        email_edit = new QLineEdit(Register);
        email_edit->setObjectName(QStringLiteral("email_edit"));

        gridLayout->addWidget(email_edit, 8, 2, 1, 2);

        register_button = new QPushButton(Register);
        register_button->setObjectName(QStringLiteral("register_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/icon/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        register_button->setIcon(icon);

        gridLayout->addWidget(register_button, 9, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 126, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 10, 2, 1, 1);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "\345\247\223\345\220\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "\346\200\247\345\210\253", Q_NULLPTR));
        sex_comboBox->clear();
        sex_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("Register", "\345\245\263", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("Register", "\351\202\256\347\256\261", Q_NULLPTR));
        register_button->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H