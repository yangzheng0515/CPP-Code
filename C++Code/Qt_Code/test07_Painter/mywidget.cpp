#include "mywidget.h"
#include <QApplication>
#include <QPainter>
#include <QPixmap>
#include <QMouseEvent>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

/*
void MyWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    QTransform transform;
    transform.translate(10, 10);    //偏移
    transform.rotate(30);   //旋转
    transform.scale(0.5, 0.5);  //缩放
    p.setTransform(transform);

    p.translate(100, 100);  //偏移所有绘制，相当于原点偏移了
    p.translate(-100, -100);

    p.setRenderHint(QPainter::Antialiasing);    //消锯齿

    p.setPen(QPen(Qt::red, 2, Qt::DashLine));
    p.setBrush(Qt::yellow);
    p.setFont(QFont("aaa", 40, 700, true));

    p.drawLine(QPoint(0, 0), QPoint(50, 50));
    p.drawEllipse(QPoint(50, 50), 30, 30);
    p.drawText(QPoint(50, 200), "hello world");
    //p.drawPixmap(QPoint(50, 100), QPixmap("../aaa.png"));
    //p.drawRect(QRect(100, 50, 110, 60));
    p.drawRoundRect(QRect(100, 50, 110, 60));
}
*/

void MyWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    for (int i = 0; i < _lines.size(); ++i)
    {
        const QVector <QPoint> & line = _lines.at(i);
        for (int j = 0; j < line.size() - 1; j++)
        {
            p.drawLine(line.at(j), line.at(j + 1));
        }
    }
}


void MyWidget::mouseMoveEvent(QMouseEvent *ev)
{
    QVector <QPoint> & lastline = _lines.last();
    lastline.append(ev->pos());
    update();
}

void MyWidget::mousePressEvent(QMouseEvent *ev)
{
    QVector <QPoint> line;
    _lines.append(line);
    QVector <QPoint> & lastline = _lines.last();
    lastline.append(ev->pos());
}

void MyWidget::mouseReleaseEvent(QMouseEvent *ev)
{
    QVector <QPoint> & lastline = _lines.last();
    lastline.append(ev->pos());
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWidget w;
    w.show();

    return app.exec();
}

