#include <QCoreApplication>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QProcess process;
    //process.start("E:\\C++\\C++Code\\QT_Code\\build-test04_controls-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\debug\\test04_controls.exe");
    //startDetached与父进程脱离，后台进程
    process.startDetached("E:\\C++\\C++Code\\QT_Code\\build-test04_controls-Desktop_Qt_5_8_0_MinGW_32bit-Debug\\debug\\test04_controls.exe");
    //process.waitForFinished();
    //可以用信号和槽来表示进程的结束 进程结束时调用slotProcessFinish
    //QObject::connect(&process, SIGNAL(finished(int)), this, SLOT(slotProcessFinish()));
    //qDebug() << process.readAll();
#if 0
//    process.start("ssh", QStringList() << "root@172.25.37.126" << "123");
    process.start("/home/yz/a.out");
    process.write("1\n", 2);    //往进程中写参数
    process.waitForFinished();
    qDebug() << process.readAll();
#endif




    //return app.exec();
}
