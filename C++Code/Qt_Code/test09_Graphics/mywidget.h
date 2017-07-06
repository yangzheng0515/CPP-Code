#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsItemAnimation>   //动画
// display scene
#include <QGraphicsView>

//定时器
#include <QTimer>



class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);

    QGraphicsScene *_scene;   //date model
    QGraphicsView *_view;   //

    QTimer * _timer;

signals:

public slots:
    void slotTimeout();
};

#endif // MYWIDGET_H
