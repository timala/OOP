#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "mythread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateListWidgetShowThreadData(QString listWidgetData);

private slots:
    void on_pushButtonStartThread_clicked();

    void on_pushButtonStopThread_clicked();

private:
    Ui::MainWindow *ui;
    MyThread *objectMyThread;
};
#endif // MAINWINDOW_H
