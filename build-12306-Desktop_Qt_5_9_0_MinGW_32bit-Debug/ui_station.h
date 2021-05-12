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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Station
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *station_edit;
    QPushButton *search_button;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTableWidget *station_widget;
    QLabel *station_label;

    void setupUi(QWidget *Station)
    {
        if (Station->objectName().isEmpty())
            Station->setObjectName(QStringLiteral("Station"));
        Station->resize(1314, 785);
        gridLayout_3 = new QGridLayout(Station);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(Station);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        station_edit = new QLineEdit(groupBox);
        station_edit->setObjectName(QStringLiteral("station_edit"));

        gridLayout_2->addWidget(station_edit, 0, 1, 1, 1);

        search_button = new QPushButton(groupBox);
        search_button->setObjectName(QStringLiteral("search_button"));

        gridLayout_2->addWidget(search_button, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Station);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        station_widget = new QTableWidget(groupBox_2);
        if (station_widget->columnCount() < 8)
            station_widget->setColumnCount(8);
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
        station_widget->setObjectName(QStringLiteral("station_widget"));
        station_widget->setMaximumSize(QSize(16777215, 735));

        gridLayout->addWidget(station_widget, 1, 1, 1, 1);

        station_label = new QLabel(groupBox_2);
        station_label->setObjectName(QStringLiteral("station_label"));

        gridLayout->addWidget(station_label, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);


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
        QTableWidgetItem *___qtablewidgetitem = station_widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Station", "\350\275\246\346\254\241\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = station_widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Station", "\350\265\267\345\247\213\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = station_widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Station", "\345\217\221\350\275\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = station_widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Station", "\347\273\217\350\277\207\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = station_widget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Station", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = station_widget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Station", "\347\273\210\347\202\271\347\253\231", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = station_widget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Station", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = station_widget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Station", "\345\216\206\346\227\266", Q_NULLPTR));
        station_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Station: public Ui_Station {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATION_H
