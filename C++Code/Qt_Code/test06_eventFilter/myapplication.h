#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H
#include <QApplication>

class MyApplication : public QApplication
{
public:
    MyApplication(int argc, char *argv[]) : QApplication(argc, argv) {}

    bool notify(QObject *, QEvent *);

};

#endif // MYAPPLICATION_H
