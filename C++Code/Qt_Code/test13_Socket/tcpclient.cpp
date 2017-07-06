#include "tcpclient.h"
#include <QHBoxLayout>
#include <QPushButton>


TcpClient::TcpClient(QWidget *parent) : QWidget(parent)
{
    _socket = new QTcpSocket(this);
    _socket->connectToHost("127.0.0.1", 9988);

    _line = new QLineEdit;
    QHBoxLayout * lay = new QHBoxLayout(this);
    lay->addWidget(_line);
    QPushButton * button = new QPushButton("send");
    lay->addWidget(button);

    connect(button, SIGNAL(clicked()), this, SLOT(slotButtonClick()));
    connect(_line, SIGNAL(returnPressed()), this, SLOT(slotButtonClick()));//回车键发送
}


void TcpClient::slotButtonClick()
{
    QString strText = _line->text();
    if (strText.isEmpty())
        return;
    _socket->write(strText.toUtf8());
    _line->clear();
}
