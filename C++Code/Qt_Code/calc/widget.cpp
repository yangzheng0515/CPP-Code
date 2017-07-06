#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //layout4 = new QGridLayout(this);
    layout3 = new QVBoxLayout(this);
    layout1 = new QHBoxLayout;
    layout2 = new QHBoxLayout;
    layout3->addLayout(layout1);
    layout3->addLayout(layout2);
    but1 = new QPushButton;
    edit1 = new QLineEdit;
    edit2 = new QLineEdit;
    edit3 = new QLineEdit;
    label1 = new QLabel;
    layout1->addWidget(edit1);
    layout1->addWidget(edit2);
    layout1->addWidget(edit3);
    layout1->addWidget(but1);
    layout2->addWidget(label1);

//    layout4->addWidget(but1, 0, 0);
//    layout4->addWidget(edit1, 0, 1);
//    layout4->addWidget(edit2, 0, 2);
//    layout4->addWidget(edit3, 1, 0);
//    layout4->addWidget(label1, 1, 1);

    but1->setText("=");

    //当点击了btn1的时候就调用on_clicked()这个函数
    connect(but1, SIGNAL(clicked()), this, SLOT(on_clicked()));//实现控件与具体的槽函数关联
}

void Widget::on_clicked()
{
    int a = edit1->text().toInt();
    int b = edit3->text().toInt();
    if (edit2->text() == "+")
        label1->setText(QString::number(a + b));
    if (edit2->text() == "-")
        label1->setText(QString::number(a - b));
    if (edit2->text() == "*")
        label1->setText(QString::number(a * b));
    if (edit2->text() == "/")
        if (b != 0)
            label1->setText(QString::number(a / b));
}

Widget::~Widget()
{
    //delete layout1;在QT内部，不需要单独delete一个控件的指针
    //QT的窗口在退出的时候会自动delete他相关的子控件
}
