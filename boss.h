#ifndef BOSS_H
#define BOSS_H

#include <QDialog>

namespace Ui {
class Boss;
}

class Boss : public QDialog
{
    Q_OBJECT
    
public:
    explicit Boss(QWidget *parent = 0);
    ~Boss();
    
private slots:
    void on_btnAdmin_clicked();

    void on_btnClient_clicked();

private:
    Ui::Boss *ui;
};

#endif // BOSS_H
