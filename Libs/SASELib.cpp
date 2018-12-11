#include "SASELib.h"
using namespace SaSELib;

void SaSELinux::doJob(QStringList cmd, QString &output, QString &error){
 cmd = QStringList() << "-c" << cmd;
    QProcess process;
    process.start("sh", cmd);
    process.waitForFinished();
    usleep(1000);
    output = process.readAllStandardOutput();
    /* std::cout << "Output is : " << output.toUtf8().constData(); */
    error = process.readAllStandardError();
#if Debug == true
    std::cout <<error.toUtf8().constData();
#endif
}
