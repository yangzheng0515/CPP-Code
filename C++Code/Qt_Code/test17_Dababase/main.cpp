#include <QApplication>
#include <QtSql/QSqlDatabase>   //.pro  QT += sql
#include <QDebug>
#include <QStringList>
#include <QtSql/QSqlError>

#include "mywidget01.h"
#include "mywidget02.h"
#include "mywidget03.h"
#include "mywidget04.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /* ("QSQLITE", "QMYSQL", "QMYSQL3", "QODBC", "QODBC3", "QPSQL", "QPSQL7") */
#if 0
    QStringList drivers = QSqlDatabase::drivers();
    qDebug() << drivers;
#endif

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");  //MySQL
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("zz");
    db.setDatabaseName("d0718");
    bool bRet = db.open();
    if (bRet == false)
    {
        qDebug() << "open database error" << db.lastError();
        exit(0);
    }
    qDebug() << "open database success";

//    db.exec("insert into student_table(username, password) values('yz', '123')");


//    MyWidget01 w;
//    w.show();

    MyWidget02 w;
    w.show();

    return app.exec();
}
