#include "qttext.h"


QtText::QtText() {}

void QtText::writeFile(QString &fileName, QString input)
{
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly)){
        qDebug() << "Cannot open the file.";
        return;
    }
    QTextStream out(&file);
    QString str = input;
    out << str << "\n";

    file.close();
}


void QtText::readFile(QString &fileName)
{
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){
        qDebug() << "Cannot read the file.";
    }
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString fileLine = in.readLine();
        qDebug() << fileLine << "\n";
    }
    file.close();
}


void QtText::clearFile(QString &fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        file.close();
    }
}
