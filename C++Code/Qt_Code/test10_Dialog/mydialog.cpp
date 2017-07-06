#include "mydialog.h"
#include <QPushButton>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>

// 有许多特殊的dailog：文件选择，MessageBox，颜色选择，字体选择，打印预览，打印

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton * button = new QPushButton("button", this);
    connect(button, SIGNAL(clicked()), this, SLOT(slotButtonClick()));


}

void MyDialog::slotButtonClick()
{
    //------------------------------------------------
    //在模块对话框中，exec有自己的消息循环，并且把app的消息循环接管了
    //如果Dialog是通过exec来显示，那么可以通过accept或者reject来关闭窗口
    //如果Dialog是通过show来显示，那么可以通过close来关闭窗口，这个和QWidget一样的。
#if 0
    QDialog * dlg = new QDialog;
    QPushButton* button = new QPushButton(dlg);
    connect(button, SIGNAL(clicked()), dlg, SLOT(reject()));    //accept
    int ret = dlg->exec();
    //dlg->show();

    if(ret == QDialog::Accepted)
    {
        qDebug() << "accepted";
    }
    if(ret == QDialog::Rejected)
    {
        qDebug() << "rejected";
    }
#endif

    //文件选择对话框
    //------------------------------------------------
    //保存文件
#if 0
    QString strFileName = QFileDialog::getSaveFileName(NULL,
                                                       "select file for save",  //窗口标题
                                                       _strDir,
                                                       "pic file (*.png *.jpg)");   //保存类型
#endif

    //选择文件
#if 0
    QString strFileName = QFileDialog::getOpenFileName(NULL,
                                                       "Select file for open",
                                                       _strDir,
                                                       "pic file (*.png *.jpg)");
#endif


    //选择目录
#if 0
    QString strFileName = QFileDialog::getExistingDirectory();

    if (strFileName.isEmpty())
    {
        qDebug() << "not select";
    }
    qDebug() << strFileName;
    QFileInfo fileInfo(strFileName);
    _strDir = fileInfo.filePath();
#endif

    //颜色选择对话框
    //------------------------------------------------
#if 0
    QColorDialog colorDialog;
    colorDialog.exec();
    QColor c = colorDialog.selectedColor();
#endif

    //字体选择对话框
    //------------------------------------------------
#if 0
    QFontDialog fontDialog;
    fontDialog.exec();
    QFont font = fontDialog.selectedFont();
#endif

    //提示、警告对话框
    //------------------------------------------------
    //QMessageBox::warning(this, "Error", "警告");
    //QMessageBox::information(this, "error", "提示");
    //QMessageBox::critical(this, "error", "致命错误");
    int ret = QMessageBox::question(this, "???", "确认");
    //自定义提示按钮
    //QMessageBox::question(this, "???", "ready do", QMessageBox::Yes, QMessageBox::No, QMessageBox::YesAll);
    //QMessageBox::question(this, "???", "ready do", QMessageBox::Yes| QMessageBox::No| QMessageBox::YesAll| /*...*/);
    if (ret == QMessageBox::Yes){}
}

MyDialog::~MyDialog()
{

}
