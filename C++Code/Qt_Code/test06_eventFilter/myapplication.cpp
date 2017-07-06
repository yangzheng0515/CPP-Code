#include "myapplication.h"
#include <QDebug>

bool MyApplication::notify(QObject *o, QEvent *e)
{
    if (this->topLevelWidgets().count() <= 0)
        return false;

    QWidget * mainWindow = this->topLevelWidgets().at(0); //主窗口

    if (o == (QObject *)mainWindow && e->type() == QEvent::MouseButtonPress)
    {
        qDebug() << "mainWindow is clicked";
    }

    return QApplication::notify(o, e);
}
