#include "mywidget.h"
#include <QApplication>
#include <QWidget>
#include "myapplication.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    //app是全局变量，通过qApp调用
    //qApp->postEvent();

    _button = new QPushButton("button", this);

    connect(_button, SIGNAL(clicked()), this, SLOT(close()));

    /* button给自己装了一个消息过滤器，那么经过button消息，都先要调用它的过滤器的eventFilter函数 */
    _button->installEventFilter(this);
}

bool MyWidget::eventFilter(QObject *o, QEvent *e)
{
    if (o == (QObject *)_button
            &&(e->type() == QEvent::MouseButtonPress
               || e->type() == QEvent::MouseButtonRelease
               || e->type() == QEvent::MouseButtonDblClick) )
    {
        return true;    //这样点击鼠标，窗口不会再关闭了
    }

    return QWidget::eventFilter(o, e);
}

bool MyWidget::event(QEvent *event)
{
    if (event->type() == QEvent::User)
    {
        qDebug() << "User event is comming";
    }
    return QWidget::event(event);
}

int main(int argc, char *argv[])
{
    MyApplication app(argc, argv);

    MyWidget w;
    w.show();

    /* 发送一个Event给MyWidget */
    qDebug() << "begin send";
//    app.postEvent(&w, new QEvent(QEvent::User));    //加入到消息队列中，不会立刻处理
    app.sendEvent(&w, new QEvent(QEvent::User));    //立刻处理
    qDebug() << "end send";

    return app.exec();
}

