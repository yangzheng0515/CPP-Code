//2017/06/20 周二

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>  //水平
#include <QVBoxLayout>  //垂直
#include <QGridLayout>  //格子

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget w;
    w.setWindowTitle("HelloWorld");


    QPushButton button;
    button.setText("button");
//    button.setParent(&w);
//    button.show();
//    button.setGeometry(50, 50, 100, 50);

    QLineEdit edit;
//    edit.setParent(&w);

#if 0
    QHBoxLayout h_layout;
    h_layout.addStretch(1);
    h_layout.addWidget(&button, 1);
    h_layout.addSpacing(50); //50px
    h_layout.addWidget(&edit, 1);  //1 设置所占的比重
    h_layout.addStretch(1); //弹簧
#endif
    QGridLayout g_layout;
    g_layout.addWidget(&button, 1, 1);
    g_layout.addWidget(&edit, 1, 2);
    g_layout.addWidget(new QPushButton("20"), 2, 1);
    g_layout.addWidget(new QLineEdit(), 2, 2);

    //通过加各种弹簧和比例，来调整布局
    g_layout.setColumnStretch(0, 1);
    g_layout.setColumnStretch(3, 1);
    g_layout.setRowStretch(0, 1);
    g_layout.setRowStretch(5, 1);

    g_layout.addWidget(new QPushButton("aaa"), 3, 1, 1, 2); //占两列

    QHBoxLayout * hBox;
    //layout可以嵌套
    g_layout.addLayout(hBox = new QHBoxLayout, 4, 2);
    hBox->addStretch(1);
    hBox->addWidget(new QPushButton("bbb"));



//    QObject::connect(&button, SIGNAL(clicked()), &w, SLOT(close()));

    w.show();
//    w.setLayout(&h_layout);
    w.setLayout(&g_layout);

    return app.exec();
}
