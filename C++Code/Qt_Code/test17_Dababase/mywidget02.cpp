#include "mywidget02.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlDatabase>
#include <QHBoxLayout>

MyWidget02::MyWidget02(QWidget *parent) : QWidget(parent)
{
    _model = new QSqlTableModel;
    _model->setTable("student_model");
    _model->select();
    _model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //设置提交策略  OnManualSubmit手动提交 OnRowChange行改变时提交
    //enum EditStrategy {OnFieldChange, OnRowChange, OnManualSubmit};

    //更改
    _model->setHeaderData(0, Qt::Horizontal, "编号");
    _model->setHeaderData(1, Qt::Horizontal, "用户名");
    _model->setHeaderData(2, Qt::Horizontal, "密码");

    _view = new QTableView;
    _view->setModel(_model);
    //_view->hideColumn(2);   //隐藏某列

    QVBoxLayout * lay = new QVBoxLayout(this);
    lay->addWidget(_view);

    QHBoxLayout * hBox = new QHBoxLayout;
    lay->addWidget(hBox);

    QPushButton * button = new QPushButton("submit");
    connect(button, SIGNAL(clicked(bool)), this, SLOT(slotSubmitClicked()));
    hBox->addWidget(button);

    QPushButton * delButton = new QPushButton("Delete");
    connect(delButton, SIGNAL(clicked(bool)), this, SLOT(slotDelClicked()));

    QPushButton* add = new QPushButton("add");
    connect(add, SIGNAL(clicked()), this, SLOT(slotAddClicked()));
    hBox->addWidget(add);
}

void MyWidget02::slotAddClicked()
{
    // start transaction
    _model->database().transaction();

    QSqlRecord record = _model->record();
    _model->insertRecord(-1, record);
}

void MyWidget02::slotSubmitClicked()
{
    if ( !_model->submitAll() )
    {
        QMessageBox::critical(this, "Error", QSqlDatabase.lastError().text());
        _model->database().rollback();
    }
    else
    {
        _model->database().commit();
    }
}


void MyWidget02::slotDelClicked()
{
    //通过view获取被选中的部分的数据model
    QItemSelectionModel * selectModel = _view->selectionModel();
    //通过选中的数据结构获取这些格子的ModelIndex
    QModelIndexList selectList = selectModel->selectedIndexes();
    QList<int> delRow;

    //遍历这些格子，获取格子所在的行；因为可能存在相同的行，所以要去重
    for (int i=0; i<selectList.size(); ++i)
    {
        QModelIndex index = selectList.ad(i);
        _model->removeRow(index.row());
        delRow << index.row();
    }

    while (delRow)
    {
        int row = delRow.at(0);
        delRow.removeAll(row);
        _model->revertAll();
    }

    _model->submitAll();
}
