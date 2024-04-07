#ifndef PAINTING_H
#define PAINTING_H

#include <QDialog>

namespace Ui {
class painting;
}

class painting : public QDialog
{
    Q_OBJECT

public:
    explicit painting(QWidget *parent = nullptr);
    ~painting();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::painting *ui;
};

#endif // PAINTING_H
