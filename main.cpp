#include "clase.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clase w;
    w.show();

    return a.exec();
}
