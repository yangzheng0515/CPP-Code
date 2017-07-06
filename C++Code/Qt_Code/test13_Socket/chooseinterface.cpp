#include "chooseinterface.h"
#include <QNetworkInterface>
#include <QHBoxLayout>
#include <QMessageBox>


ChooseInterface::ChooseInterface(QDialog *parent) : QDialog(parent)
{
    /* get all interface */
    QList<QHostAddress> addrList = QNetworkInterface::allAddresses();

#if 0
    QList<QNetworkInterface> infList =  QNetworkInterface::allInterfaces();//网口
    QList<QNetworkAddressEntry> entryList = infList.at(0).addressEntries();
    entryList.at(0).broadcast();
#endif

    _comboBox = new QComboBox;
    QHBoxLayout * lay = new QHBoxLayout(this);
    lay->addWidget(_comboBox);

    foreach (QHostAddress addr, addrList)
    {
        //_comboBox->addItem(addr.toString());
        quint32 ipaddr = addr.toIPv4Address();
        if (ipaddr == 0)
            continue;
        _comboBox->addItem(QHostAddress(ipaddr).toString());
    }

    connect(_comboBox, SIGNAL(currentIndexChanged(QString)),
            this, SLOT(slotComboBoxChanged(QString)));
}


void ChooseInterface::slotComboBoxChanged(QString str)
{
    this->_strSelect = str;
    int ret = QMessageBox::question(NULL, "确定吗？", "you select the ip: " + str);
    if (ret == QMessageBox::Yes)
        close();
}
