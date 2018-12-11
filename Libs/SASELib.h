#ifndef SASELib
#define SASELib
#include <QString>
#include <QProcess>
#include <QtWidgets>
#include<iostream>
#include <unistd.h>
/**
 * @attention Set this false to get rid of any error in the command line
 */
#define Debug true
/**
 * @brief SaSELib namespace that have Interface of using SASELib library
 */
namespace SaSELib {

 /**
 * @brief The SaSELinux class
 */
class SaSELinux {
private:

public:
     /**
     * @brief Execute the cmd command and return both stdout and stderr of it
     * @param cmd : The command to be excecuted
     * @param output : Stdout
     * @param error : Stderror
     */
    virtual void doJob(QStringList cmd, QString &output, QString &error);
};



}
#endif
