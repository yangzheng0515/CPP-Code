#ifndef MYWORK_H
#define MYWORK_H

#include <QObject>
#include <QDebug>
#include <QThread>

class MyWork : public QObject
{
    Q_OBJECT
public:
    explicit MyWork(QObject *parent = 0);

    QThread _thread;

signals:

public slots:
    void doWork()
    {
        // do ......
        qDebug() << QThread::currentThread();
    }
};

#endif // MYWORK_H
