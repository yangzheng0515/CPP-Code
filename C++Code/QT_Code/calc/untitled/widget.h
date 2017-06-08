#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QHBoxLayout *layout1, *layout2;
    QVBoxLayout *layout3;
    QPushButton *but1;
    QLineEdit *edit1, *edit2, *edit3;
    QLabel *label1;
private slots:
    void on_clicked();
};

#endif // WIDGET_H
