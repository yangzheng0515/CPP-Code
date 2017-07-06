#include <QtSql/QSqlDatabase>   //.pro  QT += sql
#include <QDebug>
#include <QStringList>
#include <QtSql/QSqlError>
#include <QSqlQuery>
#include <QSqlResult>
#include <QSqlTableModel>
#include <QSqlRecord>
#include "mywidget01.h"

MyWidget01::MyWidget01(QWidget *parent) : QWidget(parent)
{
    //低端的写法，一般不用了。
#if 0
    QSqlQuery query = db.exec("select * from student_table");
    bool b = query.first();
    while (b)
    {
        QSqlResult * result = query.result();
        QVector<QVariant> values = result->boundValues();
        qDebug() << values;

        b = query.next();
    }
#endif

    //查询
#if 0
    //QSqlTableModel 数据表对应的数据结构
    QSqlTableModel model;
    model.setTable("d0718");
    //model.setFilter("id = 0");  //相当于sql语句中的 where后面的语句
    model.select(); // 执行查询
    int ret = model.rowCount();
    for (int i = 0; i < ret; ++i)
    {
        QSqlRecord record = model.record();
        for (int j = 0; j < record.count(); j++)
        {
            qDebug() << record.value(j);
        }
    }
#endif

    //更新数据
#if 0
    model.setData(model.index(0, 1), "cookie");
    model.submitAll();
#endif

    //插入数据
    QSqlTableModel model;
    QSqlRecord record = model.record();
    record.setValue("username", "newuser");
    record.setValue("password", "newpwd");
    model.insertRecord(-1, record);
    model.submitAll();
}

