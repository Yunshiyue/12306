/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1297, 665);
        login = new QAction(MainWindow);
        login->setObjectName(QStringLiteral("login"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/icon/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon);
        ticket = new QAction(MainWindow);
        ticket->setObjectName(QStringLiteral("ticket"));
        ticket->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/icon/ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        ticket->setIcon(icon1);
        station = new QAction(MainWindow);
        station->setObjectName(QStringLiteral("station"));
        station->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/icon/station.png"), QSize(), QIcon::Normal, QIcon::Off);
        station->setIcon(icon2);
        order = new QAction(MainWindow);
        order->setObjectName(QStringLiteral("order"));
        order->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/icon/order.png"), QSize(), QIcon::Normal, QIcon::Off);
        order->setIcon(icon3);
        information = new QAction(MainWindow);
        information->setObjectName(QStringLiteral("information"));
        information->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/icon/my.png"), QSize(), QIcon::Normal, QIcon::Off);
        information->setIcon(icon4);
        Train = new QAction(MainWindow);
        Train->setObjectName(QStringLiteral("Train"));
        Train->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icon/icon/train.png"), QSize(), QIcon::Normal, QIcon::Off);
        Train->setIcon(icon5);
        register_2 = new QAction(MainWindow);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/icon/icon/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        register_2->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 1281, 631));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(horizontalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        ticket->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\350\275\246\347\245\250", Q_NULLPTR));
        station->setText(QApplication::translate("MainWindow", "\350\275\246\347\253\231", Q_NULLPTR));
        order->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225", Q_NULLPTR));
        information->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        Train->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", Q_NULLPTR));
        register_2->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H