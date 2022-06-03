#include <QtCore/QCoreApplication>

#include "ReaderCard.h"
#include "database.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	database * db = new database();

	ReaderCard::getInstance(db);	// Instancie le lecteur RFID

    return a.exec();
}