#ifndef PUZZLE_H
#define PUZZLE_H

#include <QDialog>
#include "table.h"
#include "painting.h"
#include "door.h"
#include "wall.h"
#include "puzzle2.h"

namespace Ui {
class puzzle;
}

class puzzle : public QDialog
{
    Q_OBJECT

public:
    explicit puzzle(QWidget *parent = nullptr);
    ~puzzle();

private slots:
    void on_pushButton_door_clicked();

    void on_pushButton_painting_clicked();

    void on_pushButton_table_clicked();

    void on_pushButton_wall_clicked();

    void on_suprise_clicked();

private:
    Ui::puzzle *ui;
    table *Table;
    painting *Painting;
    door *Door;
    wall *Wall;
    puzzle2 *Puzzle2;
};

#endif // PUZZLE_H
