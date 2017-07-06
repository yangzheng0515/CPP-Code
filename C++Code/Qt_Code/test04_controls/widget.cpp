#include "widget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QRadioButton> //单选按钮
#include <QComboBox>    //下拉列表
#include <QCheckBox>
#include <QCompleter>
#include <QTextEdit>
#include <QTextBrowser> //readonly QTextEdit
#include <QGroupBox>
#include <QSlider>
#include <QSpinBox>
#include <QDebug>
#include <QPixmap>
#include <QLCDNumber>   //电子表数字  嵌入式常用

Widget::~Widget()
{

}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout * v_layout = new QVBoxLayout(this);
    QLabel * label;
    QPushButton * button;
    QRadioButton * radio;
    QComboBox * combo;
    QCheckBox * check;
    QTextEdit * textEdit;
    QGroupBox * group;
    QSlider * slider;
    QSpinBox * spin;

    //QLabel  可以显示静态文本、图片，支持HTML格式
    v_layout->addWidget(label = new QLabel("<h1><font color='red'>QLabel</font></h1>"));
    //QLabel显示图片
    //label->setPixmap(QPixmap("./a.png"));

    //加了很多槽函数会很烦
    //connect(label, SIGNAL(linkActivated(QString)), this, SLOT(/* 加槽函数 */));
    //在pro中加 CONFIG += C++11  用兰姆达表达式
    connect(label, &QLabel::linkActivated, [](QString str){
        //...
        qDebug() << str;
    });


    //QPushButton
    v_layout->addWidget(button = new QPushButton("QPushButton"));
    button->setStyleSheet("QPushButton {font:bold 16px; color:blue}");    //支持CSS控件风格，很多控件都支持

    //QRadioButton
    v_layout->addWidget(radio = new QRadioButton("QRadioButton"));

    connect(radio, QRadioButton::clicked, [](bool v){   //点击时
       qDebug() << v;
    });


    //QCheckBox
    v_layout->addWidget(check = new QCheckBox("QCheckBox"));

    //QComboBox
    v_layout->addWidget(combo = new QComboBox());
    combo->addItem("QComboBox item1");
    combo->addItem("QComboBox item2");
    combo->setEditable(true);   //设置可编辑
    QCompleter completer(combo->model());
//    completer.setFilterMode(Qt::MatchContains);
    combo->setCompleter(&completer);    //设置提示功能

//    connect(combo, &QComboBox::currentIndexChanged, [](QString str){
//        qDebug() << str;
//    });
    //当选项改变时
    connect(combo, SIGNAL(currentIndexChanged(QString)), this, SLOT(slotComboBoxIndexChanged(QString)));



    //QTextEdit  支持HTML,可以显示图片
    v_layout->addWidget(textEdit = new QTextEdit);
    textEdit->setText("<h1>QTextEdit</h1><table border='1'><tr><td>00</td><td>"
                      "01</td></tr><tr><td>10</td><td>11</td></tr></table>");

    _textEdit = textEdit;
    connect(textEdit, &QTextEdit::textChanged, [&](){    //当text改变时
        qDebug() << _textEdit->toPlainText();
    });

    //需要是出现滚动条
    textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);    //竖直方向需要时出现滚动条
    textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //水平不出现滚动条


    //QGroupBox
    v_layout->addWidget(group = new QGroupBox);
    QHBoxLayout * hBox;
    group->setLayout(hBox = new QHBoxLayout);
    hBox->addWidget(new QPushButton("aaa"));
    hBox->addWidget(new QPushButton("bbb"));
    group->setTitle("QGroupBox");

    //QSlider
    v_layout->addWidget(slider = new QSlider(Qt::Horizontal));//Vertical垂直（默认） Horizontal水平
    slider->setMaximum(100);
    slider->setMinimum(0);
    //slider->value()   //获取slider的值

    //QSpinBox
    v_layout->addWidget(spin = new QSpinBox);
    spin->setMaximum(100);
    spin->setMinimum(0);

    connect(slider, SIGNAL(valueChanged(int)), spin, SLOT(setValue(int)));   //通过slider改变spin
    connect(spin, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

    QLCDNumber * lcd;
    v_layout->addWidget(lcd = new QLCDNumber(10));
    lcd->display(12345);
}


void Widget::slotComboBoxIndexChanged(const QString & str)
{
    qDebug() << str;
}
