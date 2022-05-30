#include "writeValue.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    writeValue w;
    w.show();
    return a.exec();
}
