#include <QCoreApplication>
#include "mythread.h"
#include "mywork.h"
#include <QTimer>
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

#if 0
    qDebug() << "main thread is:" << QThread::currentThread();
    MyThread thread;
    thread.start(); //foo在主线程中执行
    thread.foo();   //子线程
/*
输出：
main thread is: QThread(0x84b1698)
QThread(0x84b1698)
thread is running
MyThread(0x6dfe70)
*/
#endif


    qDebug() << "main thread is"<< QThread::currentThread();
    MyWork* worker = new MyWork();
    QTimer* timer = new QTimer;

#if 0
    QThread thread;
    worker->moveToThread(&thread);  //转移线程 默认在主线程中执行
    thread.start();

    QObject::connect(&thread, SIGNAL(finished()), worker, SLOT(deleteLater()));
#endif



    QObject::connect(timer, SIGNAL(timeout()), worker, SLOT(doWork()));
    timer->setInterval(1000);
    timer->start();

    return app.exec();
}
