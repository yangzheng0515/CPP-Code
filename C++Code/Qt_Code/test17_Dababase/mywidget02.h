#ifndef MYWIDGET02_H
#define MYWIDGET02_H

#include <QWidget>
#include <QSqlTableModel>
#include <QTableView> // show table data


class MyWidget02 : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget02(QWidget *parent = 0);

    QSqlTableModel * _model;
    QTableView * _view;

signals:

public slots:
    void slotSubmitClicked();
    void slotDelClicked();
    void slotAddClicked();
};

#endif // MYWIDGET02_H
