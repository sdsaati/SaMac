#include "mainwindow.h"
#include <QApplication>
#include "SASELib.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // SaSELinux s;
    return a.exec();
}
