#include "mywidget.h"
#include <QApplication>
#include <QDebug>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
#if 0
    //鼠标不需要按下，mouseMove就能得到调用
    this->setMouseTracking(true);

    _button = new QPushButton("OK", this);
    _button->setDefault(true);//默认

    connect(_button, &QPushButton::clicked, this, [](){
        qDebug() << "button press";
    });
#endif
    QVBoxLayout * v_layout = new QVBoxLayout(this);
    v_layout->addWidget(_lineEdit = new QLineEdit);
    connect(_lineEdit, &QLineEdit::returnPressed, this, [](){
        qDebug() << "lineEdit return Press";    //按回车有效果
    });

}

/*
 * 消息的流程：
 * QApplication先得到->具体应该处理的窗口::event()->event()根据消息类型来调用具体的虚函数
 * 1、可以重载具体的虚函数，来实现对消息的响应
 * 2、可以重载event函数，用来处理或截取消息
*/


//截取消息
bool MyWidget::event(QEvent * ev)
{

    //判断鼠标具体事件
//    if (ev->type() == QEvent::MouseButtonPress) //鼠标点击 包括左右点击
//    {
//        QMouseEvent * ev1 = (QMouseEvent *)ev;
//        qDebug() << "mouse press";
//    }

    //截取消息
//    if(ev->type() == QEvent::MouseButtonPress)
//    {
//        return true;
//    }

    return QWidget::event(ev);
}

void MyWidget::mousePressEvent(QMouseEvent * ev)
{
    QPoint pt = ev->pos();
    qDebug() << pt;

    if (ev->button() == Qt::LeftButton) //左击
    {
        if(ev->modifiers() == Qt::ShiftModifier)    //伴随键
        {
            qDebug() << "Shift + Left Press";
            return;
        }

        if (ev->modifiers() == Qt::ControlModifier)
        {
            qDebug() << "Ctrl + Left press";
            return;
        }
        qDebug() << "Left Press";
    }


}

void MyWidget::mouseReleaseEvent(QMouseEvent *)
{

}


void MyWidget::mouseMoveEvent(QMouseEvent *)
{
    static int i = 0;
    //默认是点击移动
    qDebug() << "mouse move" + i;
}

void MyWidget::keyPressEvent(QKeyEvent * ev)
{
    ev->modifiers();
    int key = ev->key();
    qDebug() << key;
    char a = key;
    qDebug() << (char)a;
}

void MyWidget::keyReleaseEvent(QKeyEvent *)
{

}

void MyWidget::closeEvent(QCloseEvent *)
{
    qDebug() << "close event";
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget w;
    w.show();

    return app.exec();
}

