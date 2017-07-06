#include "udp1.h"
#include <QDebug>
#include <QTimer>
#include <QDateTime>
Udp1::Udp1(QWidget *parent) : QWidget(parent)
{
    _udp = new QUdpSocket;
    _udp->bind(10001);//绑定端口

    connect(_udp, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));

    QTimer * timer = new QTimer;
    timer->setInterval(1000);
    timer->start();
    connect(timer, &QTimer::timeout, this, [&](){
        quint64 timestamp = QDateTime::currentMSecsSinceEpoch();
        QString str = QString::number(timestamp);   //数字转换为字符串
#if 1
        _udp->writeDatagram(str.toUtf8(), QHostAddress("127.0.0.1"), 10002);
#else
        //_udp->writeDatagram(str.toUtf8(), QHostAddress::Broadcast, 10002);//广播
        _udp->writeDatagram(str.toUtf8(), QHostAddress("224.0.0.131"), 10002);  //多播
#endif
    });
}


void Udp1::slotReadyRead()
{
    //接收
    while(_udp->hasPendingDatagrams())
    {
        quint32 datagramSize = _udp->pendingDatagramSize();//获取下个包的大小
        QByteArray buf(datagramSize, 0);
        _udp->readDatagram(buf.data(), buf.size());
        qDebug() << "udp1:" << buf;
    }


}
