#include "mywork.h"

MyWork::MyWork(QObject *parent) : QObject(parent)
{
    this->moveToThread(&_thread);   //切换多线程和单线程
    _thread.start();
    connect(&_thread, SIGNAL(finished()), this, SLOT(deleteLater()));
}
