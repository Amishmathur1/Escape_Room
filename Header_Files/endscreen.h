#ifndef ENDSCREEN_H
#define ENDSCREEN_H

#include <QDialog>

namespace Ui {
class endscreen;
}

class endscreen : public QDialog
{
    Q_OBJECT

public:
    explicit endscreen(QWidget *parent = nullptr);
    ~endscreen();

private slots:
    // void on_pushButton_clicked();

    void on_next_clicked();
    void on_run_clicked();
    void on_gotcha_clicked();



private:
    Ui::endscreen *ui;
};

#endif // ENDSCREEN_H
