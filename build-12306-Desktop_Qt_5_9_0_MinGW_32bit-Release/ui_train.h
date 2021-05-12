/********************************************************************************
** Form generated from reading UI file 'train.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAIN_H
#define UI_TRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_Train
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *train_id_edit;
    QPushButton *search_button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTableWidget *train_widget;
    QLabel *train_id_label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Train)
    {
        if (Train->objectName().isEmpty())
            Train->setObjectName(QStringLiteral("Train"));
        Train->resize(1305, 791);
        Train->setMinimumSize(QSize(200, 0));
        gridLayout_2 = new QGridLayout(Train);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(Train);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        train_id_edit = new QLineEdit(groupBox);
        train_id_edit->setObjectName(QStringLiteral("train_id_edit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        train_id_edit->setFont(font);

        gridLayout->addWidget(train_id_edit, 0, 2, 1, 1);

        search_button = new QPushButton(groupBox);
        search_button->setObjectName(QStringLiteral("search_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\220\234\347\264\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon);

        gridLayout->addWidget(search_button, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(335, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Train);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(600, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        train_widget = new QTableWidget(groupBox_2);
        if (train_widget->columnCount() < 5)
            train_widget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        train_widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        train_widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        train_widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        train_widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        train_widget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        train_widget->setObjectName(QStringLiteral("train_widget"));
        train_widget->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(11);
        train_widget->setFont(font1);

        gridLayout_3->addWidget(train_widget, 2, 0, 1, 1);

        train_id_label = new QLabel(groupBox_2);
        train_id_label->setObjectName(QStringLiteral("train_id_label"));
        train_id_label->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\273\217\351\273\221\347\256\200\344\275\223"));
        font2.setPointSize(20);
        train_id_label->setFont(font2);
        train_id_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(train_id_label, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(334, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        groupBox->raise();
        groupBox_2->raise();
        train_id_label->raise();

        retranslateUi(Train);

        QMetaObject::connectSlotsByName(Train);
    } // setupUi

    void retranslateUi(QWidget *Train)
    {
        Train->setWindowTitle(QApplication::translate("Train", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Train", "\350\276\223\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("Train", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        search_button->setText(QApplication::translate("Train", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Train", "\350\275\246\346\254\241\344\277\241\346\201\257", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = train_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Train", "\345\201\234\351\235\240\350\275\246\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = train_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Train", "\345\210\260\346\227\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = train_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Train", "\345\217\221\346\227\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = train_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Train", "\345\201\234\347\225\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = train_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Train", "\345\216\206\346\227\266", Q_NULLPTR));
        train_id_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Train: public Ui_Train {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAIN_H
