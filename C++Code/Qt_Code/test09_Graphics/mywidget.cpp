#include "mywidget.h"
#include <QApplication>
#include <QPixmap>
#include <QTimeLine>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QGraphicsLineItem * lineitem;
    QGraphicsTextItem * textitem;
    QGraphicsPixmapItem * pixmapitem;

    _view = new QGraphicsView(this);
    _view->setScene(_scene = new QGraphicsScene);

    _scene->addItem(lineitem = new QGraphicsLineItem(QLineF(QPointF(0,0), QPointF(100,100))));
    _scene->addItem(textitem = new QGraphicsTextItem("hello world"));
    _scene->addItem(pixmapitem = new QGraphicsPixmapItem(QPixmap("../a.jpg")));

/*
 * QT中的图像类 QPixmap性能最好
 * QPixmap, QImage, QBitmap, Qicture
*/

    textitem->setPos(QPointF(200, 300));
    textitem->setFont(QFont("aaa", 50, 700, true));

    pixmapitem->setPos(QPointF(300, 300));

    //Animation
//    QGraphicsItemAnimation * animation = new QGraphicsItemAnimation;
//    animation->setItem(pixmapitem);
//    QTimeLine * timeline = new QTimeLine(3000);
//    timeline->setLoopCount(1);
//    animation->setTimeLine(timeline);
//    animation->setTranslationAt(1, 200, 200);
//    timeline->start();

    //一直计时
    _timer = new QTimer;
    _timer->setInterval(2000);  //2秒
    connect(_timer, SIGNAL(timeout()), this, SLOT(slotTimeout()));
    _timer->start();

    //只计时一次
    QTimer::singleShot(2000, this, SLOT(slotTimeout()));
}

void MyWidget::slotTimeout()
{
    qDebug() << "time out";
}

void MyWidget::resizeEvent(QResizeEvent *)
{
    // set the size of _view = MyWidget::size
    _view->setGeometry(QRect(QPoint(0,0), size()));
}


void MyWidget::paintEvent(QPaintEvent *)
{

}


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget w;
//    w.show();
    w.showMaximized();

    return app.exec();
}

