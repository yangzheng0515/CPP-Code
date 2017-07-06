#include <QApplication>
#include "tcpclient.h"
#include "tcpserver.h"
#include "udp1.h"
#include "udp2.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TcpServer server;
    server.setWindowTitle("server");
    server.show();

    TcpClient client;
    client.setWindowTitle("client");
    client.show();

//    Udp1 udp1;
//    Udp2 udp2;


    return app.exec();
}
