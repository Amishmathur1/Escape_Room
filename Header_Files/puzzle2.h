#ifndef PUZZLE2_H
#define PUZZLE2_H

#include <QDialog>

namespace Ui {
class puzzle2;
}

class puzzle2 : public QDialog
{
    Q_OBJECT

public:
    explicit puzzle2(QWidget *parent = nullptr);
    ~puzzle2();

private slots:
    void on_back_clicked();

    void on_submit_clicked();

private:
    Ui::puzzle2 *ui;
};

#endif // PUZZLE2_H
