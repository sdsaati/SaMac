#include "mainwindow.h"
#include <QApplication>
#include "SASELib.h"
using namespace SaSELib;

std::string Tostr(QString s){
    return s.toUtf8().constData();
}
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


    SaSELinux s;
    QString out,err;
    s.doJob(QStringList()<< "ls -l",out,err);
    std::cout << Tostr(out);
    return a.exec();
}
