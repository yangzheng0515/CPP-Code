#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

class myclass : public QLabel, public QPushButton, public MainWindow
{
public:
    myclass(char * str) :QLabel(str), QPushButton(str)
    {
        MainWindow::setWindowTitle(str);
    }

};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myclass my1("hello");
  //my1.QLabel::move(0, 0);
    my1.QLabel::show();

    my1.QPushButton::show();
    my1.MainWindow::show();
    return a.exec();
}
