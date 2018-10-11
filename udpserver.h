#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>
#include <QUdpSocket>

class UdpServer : public QObject
{
    Q_OBJECT
public:
    explicit UdpServer(QObject *parent = 0);

    QUdpSocket *m_pus;

signals:

public slots:
    void readData();
};

#endif // UDPSERVER_H
