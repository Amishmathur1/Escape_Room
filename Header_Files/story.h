#ifndef STORY_H
#define STORY_H

#include <QDialog>
#include <puzzle.h>

namespace Ui {
class story;
}

class story : public QDialog
{
    Q_OBJECT

public:
    explicit story(QWidget *parent = nullptr);
    ~story();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::story *ui;
    puzzle *Puzzle;
};

#endif // STORY_H
