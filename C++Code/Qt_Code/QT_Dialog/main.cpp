#include "dialog.h"
#include <QApplication>

class bigsmall
{
private:
    Dialog * p;
public:
    void setp(Dialog * p)
    {
        this->p = p;
    }

    void set(int x, int y)
    {
        p->resize(x, y);
    }

    void big()
    {
        for (int i = 0; i < 600; ++i)
        {
            p->resize(i, i);
        }
    }

    void small()
    {
        for (int i = 600; i >= 0; i--)
        {
            p->resize(i, i);
            //p->show();
        }
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog mydialog1;
    Dialog * pd1;
    pd1 = new Dialog;   //用指针创建窗口
    mydialog1.resize(600, 800);
    pd1->resize(800, 600);
    mydialog1.show();
    pd1->show();

    bigsmall big, small;
    big.setp(&mydialog1);
    small.setp(pd1);
    big.big();
    small.small();

    return a.exec();
}
