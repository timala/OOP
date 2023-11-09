#ifndef EKALUOKKA_H
#define EKALUOKKA_H

#include<QThread>
#include<QDebug>

class EkaLuokka : public QThread
{
public:
    EkaLuokka();
protected:
    virtual void run() override;
};

#endif // EKALUOKKA_H
