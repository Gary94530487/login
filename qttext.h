#ifndef QTTEXT_H
#define QTTEXT_H

#include <QString>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <bits/stdc++.h>
class QtText
{
public:
    QtText *t;
    QtText();
    void writeFile(QString &fileName, QString input);

    void readFile(QString &fileName);

    void clearFile(QString &fileName);
};

#endif // QTTEXT_H
