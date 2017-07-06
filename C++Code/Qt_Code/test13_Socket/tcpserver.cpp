#include "tcpserver.h"
#include <QHBoxLayout>
#include <QNetworkInterface>
#include "chooseinterface.h"

TcpServer::TcpServer(QWidget *parent) : QWidget(parent)
{
    ChooseInterface dlg;
    dlg.exec();

    // 创建服务器并监听
    _server = new QTcpServer;
    //_server->listen(QHostAddress::Any, 9988); //接受所有
    _server->listen(QHostAddress(dlg._strSelect), 9988);    //接受指定网口
    //当有客户端连接时，调用slotNetConnection函数
    connect(_server, SIGNAL(newConnection()), this, SLOT(slotNetConnection()));

    QHBoxLayout * lay = new QHBoxLayout(this);
    _show = new QTextBrowser;
    lay->addWidget(_show);
}


void TcpServer::slotNetConnection()
{
    //判断是否有未处理的连接
    //必须把所有的server全取出来，这里用死循环
    while (_server->hasPendingConnections())
    {
        //调用nextPendingConnection去获得连接的socket
        _socket = _server->nextPendingConnection();
        _show->append("[new connection...]");
        //为新的socket提供槽函数，来接受数据
        connect(_socket, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    }
}

void TcpServer::slotReadyRead()
{
    //接受数据，判断是否有数据，如果有，通过readAll获取数据
    while (_socket->bytesAvailable() > 0)   //有数据
    {
        _show->append("[data arrived...]");
        QByteArray buf = _socket->readAll();
        _show->append(buf);
    }
}
