#include <QCoreApplication>

#include <QDebug>
#include <QUdpSocket>

#include "udpserver.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    UdpServer us;

    return a.exec();
}

