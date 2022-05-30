#include <QtCore/QCoreApplication>
#include "socket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	new socket(2569);

    return a.exec();
}
