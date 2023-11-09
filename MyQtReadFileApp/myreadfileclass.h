#ifndef MYREADFILECLASS_H
#define MYREADFILECLASS_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class MyReadFileClass : public QObject
{
    Q_OBJECT
public:
    explicit MyReadFileClass(QObject *parent = nullptr);
    void readFile();

signals:
    void finishProgram();

public slots:
};

#endif // MYREADFILECLASS_H
