#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#ifndef NETWORK_H
#define NETWORK_H

#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QDebug>

enum operation { REGISTER, LOGIN, INFORMATION, UPDATE_INFORMATION, CHANGE_PASSWORD, LOAD_PASSENGER,
CHANGE_PASSENGER, DELETE_PASSENGER, ADD_PASSENGER, SEARCH_TRAIN, SEARCH_STATION, STATION_STATION, SUBMIT_ORDER,
PAY_ORDER, SEARCH_ORDER, ORDER_INFORMATION, CANCEL_ORDER, CANCEL_TICKET, PAY_TICKET, CHANGE_TICKET, TRANSFER
};

class TrainSocket : public QTcpSocket
{
    Q_OBJECT

public:
    ~TrainSocket();

    static TrainSocket* GetSocket();
    static void SetUsername(QString);
    static QString GetUsername();

    QJsonObject sendData(QJsonObject);

    

private slots:


private:
    static TrainSocket* trainSocket;   
    TrainSocket();  //不允许构造
    int bytesToInt(QByteArray bytes);

    QString username;
};

#endif // NETWORK_H
