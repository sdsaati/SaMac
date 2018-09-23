#include "mainwindow.h"
#include <QApplication>
#include "SASELib.h"
/**
 * @brief main : the main function
 * @param argc : the first arg
 * @param argv : the second arg
 * @return return the GUI loop
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //SaSELinux s;
    return a.exec();
}
