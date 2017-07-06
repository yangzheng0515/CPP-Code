#include "mywidget.h"
#include <QApplication>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QCryptographicHash>   //哈希

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    //md5加密
    QByteArray md5 = QCryptographicHash::hash(QByteArray("123"), QCryptographicHash::Md5);

    //生成Json
    QJsonObject obj;
    obj.insert("username", QString("yz"));
    obj.insert("password", QString(md5.toHex()));
    obj.insert("male", true);
    obj.insert("age", 20);

    QJsonDocument doc(obj);
    QByteArray json = doc.toJson(QJsonDocument::Indented);   //QJsonDocument::Compact

    qDebug() << json;

    //解析Json
    //QJsonDocument doc2 = QJsonDocument::fromJson(json);
    //QJsonObject obj2 = doc2.object();
    QJsonObject obj2 = QJsonDocument::fromJson(json).object();
    if (obj2.value("username").toString() == "yz")
    {
        qDebug() << "Yes!";
    }
}


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget w;
    w.show();

    return app.exec();
}
