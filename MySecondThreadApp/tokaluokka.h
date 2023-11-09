#ifndef TOKALUOKKA_H
#define TOKALUOKKA_H

#include<QThread>
#include<QDebug>

class TokaLuokka : public QThread
{
public:
    TokaLuokka();
protected:
    virtual void run() override;
};

#endif // TOKALUOKKA_H
