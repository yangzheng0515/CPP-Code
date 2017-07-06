//2017/06/20 周二

//应用程序抽象类
#include <QApplication>
//窗口类
#include <QWidget>
//按钮
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //构造窗口对象
    QWidget w;
    w.setWindowTitle("HelloWorld");

    //按钮也是一个窗口
    QPushButton button;
    button.setText("button");
    //窗口对象的父子关系，影响显示位置
    button.setParent(&w);
//    button.show();

    //设置坐标、大小
    button.setGeometry(50, 50, 100, 50);

    //QT 对 C++ 的拓展
    //std::bind std::function
    QObject::connect(&button, SIGNAL(clicked()), &w, SLOT(close()));


    //显示窗口
    w.show();



    //在exec中有一个消息循环
    return app.exec();
}
