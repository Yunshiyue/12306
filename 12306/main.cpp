#include "main_window.h"
#include <QApplication>
#include <QFile>
#include "train_socket.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString qss;
    QFile qssFile(":/new/qss/blue.css");  //":/qss/css.qss"//
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen())
    {
        qDebug() << "导入成功";
        qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();

    }
    MainWindow w;
    w.show();

    return a.exec();
}
