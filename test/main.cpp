#include "TestForQtComponent.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestForQtComponent w;
    w.show();
    return a.exec();
}