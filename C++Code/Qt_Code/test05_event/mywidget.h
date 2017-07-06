#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

    QPushButton * _button;
    QLineEdit * _lineEdit;

    /* widget's event handler (all event) */
    bool event(QEvent *);

    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
//    void mouseDoubleClickEvent(QMouseEvent *);  //双击  不要用

    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);

//    void closeEvent(QCloseEvent *);
//    void showEvent(QShowEvent *);
//    void hideEvent(QHideEvent *);
//    void resizeEvent(QResizeEvent *);   //最大最小化事件
//    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // MYWIDGET_H
