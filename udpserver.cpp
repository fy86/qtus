#include "udpserver.h"

UdpServer::UdpServer(QObject *parent) : QObject(parent)
{

    m_pus = new QUdpSocket(this);

    connect(m_pus,SIGNAL(readyRead()),this,SLOT(readData()));

    m_pus->bind(QHostAddress::LocalHost,7755);

}

void UdpServer::readData()
{
    qDebug(" run server read data");
}
