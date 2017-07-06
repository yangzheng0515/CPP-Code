#include "mywidget.h"
#include <QIODevice>
#include <QApplication>
#include <QFile>
#include <QBuffer>
#include <QDebug>
#include <QPixmap>
#include <QLabel>
#include <QDataStream>
#include <QTextStream>

/*
QFile
QBuffer  //memory file
QTcpSocket
QUdpSocket

QDataStream
QTextStream
*/


MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    //文件
#if 0
    QFile file("../MyTest.txt");
    file.open(QIODevice::ReadWrite);
    file.write("abc");
    file.close();
#endif

    //写在内存中，而不是硬盘
#if 0
    QBuffer buffer;
    buffer.open(QIODevice::ReadWrite);
    buffer.write("12233");
    buffer.write("abccc");
    buffer.close();

    qDebug() << buffer.buffer();
#endif

    //send side
#if 0
    QBuffer buffer;
    buffer.open(QIODevice::ReadWrite);
    QPixmap pixmap("../a.png");
    pixmap.save(&buffer, "JPG");
    buffer.close();

    qDebug() << buffer.buffer();
    qDebug() << buffer.size();

    //recv side
    QPixmap pixmap2;
    pixmap2.loadFromData(buffer.buffer(), "png");
    QLabel * label = new QLabel(this);
    label->setPixmap(pixmap2);
#endif


    // QTextStream
    //写入文件 不会乱码，但是不方便读取  适合输出日志信息
#if 0
    QFile file("../textstream.txt");
    file.open(QIODevice::ReadWrite);
    QTextStream textStream(&file);
    textStream << 123 << "abc" << 99.9 << QString("ffff");
    file.close();
#endif

    // QDataStream 适合一次性读写
#if 0
    //写入文件 乱码
    QFile file1("../datastream.txt");
    file1.open(QIODevice::ReadWrite);
    QDataStream dataStream1(&file);
    dataStream1 << 123 << "abc" << 99.9 << QString("ffff") << QPoint(10, 10);
    file1.close();

    //读取文件 不需要类型转化
    QFile file2("../datastream.txt");
    file2.open(QIODevice::ReadWrite);
    QDataStream dataStream2(&file);
    int i;
    double db;
    char * str;
    QString qstr;
    QPoint point;

    dataStream2 >> i >> str >> db >> qstr >> point;
    qDebug() << i << str << db << qstr << point;
/*
文件内容：   {   abc @X鶛櫃櫄    f f f f
qDebug输出：123 abc 99.9 "ffff" QPoint(10,10)
*/
    delete[] str;
    file2.close();
#endif

    //virtual memory  适合不断的读写
    QFile file("../map.txt");
    file.open(QIODevice::ReadWrite);
    //file.resize(65535);
    //填充
    file.seek(65535);
    //file.write("1");
    file.close();
    file.open(QIODevice::ReadWrite);
    uchar * ptr = file.map(0, 64*1024);
    //write file
    *ptr = 'y';
    ptr[1] = 'z';

    //read file
    uchar * ch = ptr;

    file.unmap(ptr);
    file.close();
}


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget w;
    w.show();

    return app.exec();
}
