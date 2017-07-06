#include <QCoreApplication>
#include <QtNetwork/QNetworkAccessManager>  //.pro QT += network
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);


    QNetworkAccessManager * manager = new QNetworkAccessManager;

    QNetworkRequest req;
    req.setUrl(QUrl("http://yz0515.com"));
    manager->get(req);
    QObject::connect(manager, &QNetworkAccessManager::finished, [](QNetworkReply * reply){
        if (reply->error() != QNetworkReply::NoError)
        {
            qDebug() << "Error: " << reply->errorString();
            return;
        }
        QByteArray buf = reply->readAll();
        qDebug() << buf;
    });

//    manager->post();


    return app.exec();
}
