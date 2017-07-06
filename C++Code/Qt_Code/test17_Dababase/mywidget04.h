#ifndef MYWIDGET04_H
#define MYWIDGET04_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QTableView>

class MyWidget04 : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget04(QWidget *parent = 0);
    QSqlQueryModel* _model;
    QTableView *_view;

signals:

public slots:
};

#endif // MYWIDGET04_H
