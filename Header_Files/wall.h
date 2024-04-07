#ifndef WALL_H
#define WALL_H

#include <QDialog>

namespace Ui {
class wall;
}

class wall : public QDialog
{
    Q_OBJECT

public:
    explicit wall(QWidget *parent = nullptr);
    ~wall();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wall *ui;
};

#endif // WALL_H
