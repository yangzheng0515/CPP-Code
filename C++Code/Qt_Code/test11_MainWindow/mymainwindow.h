#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "myview.h"
#include <QMenu>
#include <QSystemTrayIcon>

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = 0);
    ~MyMainWindow();

    QLabel * _label;
    MyView * _view;
    QMenu * _menu;
    QSystemTrayIcon * _icon;    //系统托盘图标

    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);

public slots:
    void slotOpen();
    void slotActivated(QSystemTrayIcon::ActivationReason reason);
};

#endif // MYMAINWINDOW_H
