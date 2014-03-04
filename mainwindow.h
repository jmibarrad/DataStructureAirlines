#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMouseEvent>
#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int x,y;
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


    void mousePressEvent(QMouseEvent *);


    void on_btnAdd_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
