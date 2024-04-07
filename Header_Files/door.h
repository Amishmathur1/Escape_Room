#ifndef DOOR_H
#define DOOR_H

#include <QDialog>


namespace Ui {
class door;
}

class door : public QDialog
{
    Q_OBJECT

public:
    explicit door(QWidget *parent = nullptr);
    ~door();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::door *ui;
};

#endif // DOOR_H
