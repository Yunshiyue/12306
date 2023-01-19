/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *login;
    QAction *ticket;
    QAction *station;
    QAction *order;
    QAction *information;
    QAction *Train;
    QAction *register_2;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1297, 665);
        login = new QAction(MainWindow);
        login->setObjectName(QString::fromUtf8("login"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icon/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon);
        ticket = new QAction(MainWindow);
        ticket->setObjectName(QString::fromUtf8("ticket"));
        ticket->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icon/ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        ticket->setIcon(icon1);
        station = new QAction(MainWindow);
        station->setObjectName(QString::fromUtf8("station"));
        station->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icon/station.png"), QSize(), QIcon::Normal, QIcon::Off);
        station->setIcon(icon2);
        order = new QAction(MainWindow);
        order->setObjectName(QString::fromUtf8("order"));
        order->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icon/order.png"), QSize(), QIcon::Normal, QIcon::Off);
        order->setIcon(icon3);
        information = new QAction(MainWindow);
        information->setObjectName(QString::fromUtf8("information"));
        information->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icon/my.png"), QSize(), QIcon::Normal, QIcon::Off);
        information->setIcon(icon4);
        Train = new QAction(MainWindow);
        Train->setObjectName(QString::fromUtf8("Train"));
        Train->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icon/train.png"), QSize(), QIcon::Normal, QIcon::Off);
        Train->setIcon(icon5);
        register_2 = new QAction(MainWindow);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icon/icon/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        register_2->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 1281, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(horizontalLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(login);
        toolBar->addAction(register_2);
        toolBar->addAction(ticket);
        toolBar->addAction(Train);
        toolBar->addAction(station);
        toolBar->addAction(order);
        toolBar->addAction(information);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        ticket->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\350\275\246\347\245\250", nullptr));
        station->setText(QCoreApplication::translate("MainWindow", "\350\275\246\347\253\231", nullptr));
        order->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225", nullptr));
        information->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        Train->setText(QCoreApplication::translate("MainWindow", "\350\275\246\346\254\241", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
