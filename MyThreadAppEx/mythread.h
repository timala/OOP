#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTimer>
#include <QObject>

class MainWindow;

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(MainWindow *mainWnd = nullptr);
protected:
    virtual void run() override;
private:
    MainWindow *objectMainWindow;
    QTimer *objectQTimer;
public slots:
    void sendDataToUi();
};

#endif // MYTHREAD_H
