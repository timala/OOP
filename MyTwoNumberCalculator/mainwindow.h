#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ADD_clicked();

    void on_Number1Line_textChanged(const QString &arg1);

    void on_Number2Line_textChanged(const QString &arg1);

    void on_SUB_clicked();

    void on_MUL_clicked();

    void on_DIV_clicked();

private:
    Ui::MainWindow *ui;
    double luku1, luku2, result;
};
#endif // MAINWINDOW_H
