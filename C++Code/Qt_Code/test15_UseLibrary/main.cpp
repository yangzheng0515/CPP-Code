#include <QCoreApplication>
#include "../test14_Library/mylibrary.h"


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MyLibrary lib;
    lib.Encrypt();


    return app.exec();
}
