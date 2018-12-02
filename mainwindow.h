#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "cardinputdialog.h"
#include "givecashdialog.h"
#include <QMainWindow>
#include <stack>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void startSessionWithCard(const QString&);
    void backToLastMenu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void nextMenu(int previous,int next);
    void on_pushButton1GiveCashMenu_clicked();
    void on_pushButton2GiveCashMenu_clicked();
    void processGivingCash(int value);
    void on_lineEditGiveCashMenu_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    int * moneyNominalValueCount;
    CardInputDialog cardDial;
    GiveCashDialog giveCashDial;
    std::stack<int> menusStack;
};

#endif // MAINWINDOW_H
