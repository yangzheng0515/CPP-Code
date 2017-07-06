#include "mymainwindow.h"
#include <QMenu>
#include <QMenuBar> //菜单栏
#include <QAction>
#include <QDebug>
#include <QFileDialog>
#include <QToolBar>
#include <QStatusBar>
#include <QPainter>
#include <QPixmap>
#include <QCursor>
#include <QMouseEvent>
#include <QIcon>

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /* 菜单栏 */
    QMenuBar * pMenuBar = menuBar();
    QMenu * menu = pMenuBar->addMenu("&FILE");
    _menu = menu;
    QAction * openAction = menu->addAction("&Open", this, SLOT(slotOpen()), QKeySequence::Open);   //Ctrl+O
    QAction * saveAction = menu->addAction("&Save", this, SLOT(slotOpen()), QKeySequence::Save);
    menu->addSeparator();   //加一条横线
    QAction * closeAction = menu->addAction("&Exit", this, SLOT(close()), QKeySequence::Close);

    /* 工具栏 */
    QToolBar * toolBar = this->addToolBar("MyToolBar");
    toolBar->addAction(openAction);
    toolBar->addAction(saveAction);
    toolBar->addAction(closeAction);
    closeAction->setToolTip("close windwo");

    /* 状态栏 */
    QStatusBar * pStatusBar = this->statusBar();
    pStatusBar->addWidget(_label = new QLabel("OK"));
    _label->setText("<font color=red>Processing...</font>");

    /* 别的控件占用了之后，剩下的区域都是CentralWidget */
    _view = new MyView;
    this->setCentralWidget(_view);

    /* 系统托盘图标 */
    _icon = new QSystemTrayIcon;
    _icon->setIcon(QIcon("../a.ico"));
    _icon->setToolTip("this is a tray icon test");
    _icon->show();
    _icon->setContextMenu(_menu);   //右击显示菜单

    connect(_icon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this, SLOT(slotActivated(QSystemTrayIcon::ActivationReason)));
}


void MyMainWindow::slotActivated(QSystemTrayIcon::ActivationReason reason)
{
    if(reason == QSystemTrayIcon::Trigger)  //点击
    {
        if (this->isHidden())
            this->show();
        else
            this->hide();
    }
}


void MyMainWindow::slotOpen()
{
    QString strFile = QFileDialog::getOpenFileName();
    qDebug() << strFile;
}

void MyMainWindow::mousePressEvent(QMouseEvent * ev)
{
    if (ev->button() == Qt::RightButton)
    {
        _menu->exec(QCursor::pos()); // QCursor.pos()鼠标的位置
    }
}


void MyMainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this);
}


MyMainWindow::~MyMainWindow()
{

}
