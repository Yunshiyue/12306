#include "train_socket.h"

TrainSocket* TrainSocket::trainSocket = NULL;

void TrainSocket::SetUsername(QString name)
{
    trainSocket->username = name;
}

//构造函数
TrainSocket::TrainSocket() : username("")
{


//    connect(socket, &QTcpSocket::connected, this, SLOT(onConnect()));
    connect(this, &QTcpSocket::connected,
            [=]() {
        qDebug() << "连接成功";
    }

            );

    connect(this, &QTcpSocket::disconnected,
            [=]() {
        qDebug() << "断开连接";
    }

            );
}

//析构函数
TrainSocket::~TrainSocket()
{

}

//获取单例
TrainSocket* TrainSocket::GetSocket()
{
    if(trainSocket == NULL) {
        trainSocket = new TrainSocket();
    }
    return trainSocket;
}

//向服务器发送数据
QJsonObject TrainSocket::sendData(QJsonObject json)
{

    //建立连接
    connectToHost("127.0.0.1", 3333);

    //发送数据
    QJsonDocument doc(json);
    QByteArray data = doc.toJson();
    write(data);
    qDebug() << json;

    //接收消息
    QJsonObject message_json;
    QByteArray message;
    int total_length = 0;
    if (waitForReadyRead()) {
        QByteArray length_array = readAll();
        qDebug() << "length_array" << length_array.length();
        flush();
        total_length = QJsonDocument::fromJson(length_array).object().take("length").toInt();
        write(data);
    }
    while (waitForReadyRead(3000)) {
        message.append(readAll());
        flush();
        if (message.length() == total_length) {
            break;
        }

    }
    qDebug() << "数据：" << message.length();
    message_json = QJsonDocument::fromJson(message).object();
    qDebug() << "客户端接收数据：";
    qDebug() << message_json;
    //断开连接
    disconnectFromHost();
    return message_json;
}

int TrainSocket::bytesToInt(QByteArray bytes) {
    int addr = bytes[0] & 0x000000FF;
    addr |= ((bytes[1] << 8) & 0x0000FF00);
    addr |= ((bytes[2] << 16) & 0x00FF0000);
    addr |= ((bytes[3] << 24) & 0xFF000000);
    return addr;
}

QString TrainSocket::GetUsername()
{
    qDebug() << trainSocket->username;
    return trainSocket->username;
}
