#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QDebug>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject * parent = 0);

    void foo()
    {
        qDebug() << QThread::currentThread();
    }


    void run()
    {
        qDebug() << "thread is running";
        foo();
    }


};

#endif // MYTHREAD_H
