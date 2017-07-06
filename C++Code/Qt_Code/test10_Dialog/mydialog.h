#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    MyDialog(QWidget *parent = 0);

    ~MyDialog();

    QString _strDir;


public slots:
    void slotButtonClick();

};

#endif // MYDIALOG_H
