/********************************************************************************
** Form generated from reading UI file 'station.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATION_H
#define UI_STATION_H

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

class Ui_Station
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *station_edit;
    QPushButton *search_button;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *station_label;
    QTableWidget *station_widget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Station)
    {
        if (Station->objectName().isEmpty())
            Station->setObjectName(QStringLiteral("Station"));
        Station->resize(1313, 834);
        gridLayout_3 = new QGridLayout(Station);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(Station);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 70));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(279, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        station_edit = new QLineEdit(groupBox);
        station_edit->setObjectName(QStringLiteral("station_edit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        station_edit->setFont(font);

        gridLayout_2->addWidget(station_edit, 0, 2, 1, 1);

        search_button = new QPushButton(groupBox);
        search_button->setObjectName(QStringLiteral("search_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/\346\220\234\347\264\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon);

        gridLayout_2->addWidget(search_button, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(279, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(Station);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(1000, 700));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        station_label = new QLabel(groupBox_2);
        station_label->setObjectName(QStringLiteral("station_label"));
        station_label->setMinimumSize(QSize(0, 20));
        station_label->setMaximumSize(QSize(16777215, 1677215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\273\217\351\273\221\347\256\200\344\275\223"));
        font1.setPointSize(20);
        station_label->setFont(font1);
        station_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(station_label, 0, 0, 1, 1);

        station_widget = new QTableWidget(groupBox_2);
        if (station_widget->columnCount() < 9)
            station_widget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        station_widget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        station_widget->setObjectName(QStringLiteral("station_widget"));
        station_widget->setMaximumSize(QSize(16777215, 1677215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(11);
        station_widget->setFont(font2);

        gridLayout->addWidget(station_widget, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(139, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);


        retranslateUi(Station);

        QMetaObject::connectSlotsByName(Station);
    } // setupUi

    void retranslateUi(QWidget *Station)
    {
        Station->setWindowTitle(QApplication::translate("Station", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Station", "\350\276\223\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("Station", "\350\275\246\347\253\231\345\220\215", Q_NULLPTR));
        search_button->setText(QApplication::translate("Station", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Station", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        station_label->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = station_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Station", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = station_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Station", "\350\265\267\345\247\213\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = station_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Station", "\351\246\226\345\217\221\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = station_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Station", "\347\273\217\350\277\207\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = station_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Station", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = station_widget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Station", "\345\274\200\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = station_widget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Station", "\345\201\234\347\225\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = station_widget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Station", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = station_widget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Station", "\347\273\210\345\210\260\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Station: public Ui_Station {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATION_H
