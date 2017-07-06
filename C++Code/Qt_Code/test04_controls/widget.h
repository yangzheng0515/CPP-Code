#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    QTextEdit * _textEdit;

public slots:
    void slotComboBoxIndexChanged(const QString &);

};

#endif // WIDGET_H
