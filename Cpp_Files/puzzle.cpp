#include "puzzle.h"
#include "ui_puzzle.h"
#include <QMessageBox>
#include <QTimer>

puzzle::puzzle(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::puzzle)
{
    ui->setupUi(this);

}

puzzle::~puzzle()
{
    delete ui;
}

void puzzle::on_pushButton_door_clicked()
{
    hide();
    Door = new door(this);
    Door->show();

}

void puzzle::on_pushButton_painting_clicked()
{
    hide();
    Painting = new painting(this);
    Painting->show();
}


void puzzle::on_pushButton_table_clicked()
{
    hide();
    Table = new table(this);
    Table->show();
}


void puzzle::on_pushButton_wall_clicked()
{
    hide();
    Wall = new wall(this);
    Wall->show();
}

void puzzle::on_suprise_clicked()
{
    // Schedule the button for deletion
    ui->suprise->deleteLater();

    // Wait for 5 seconds before proceeding
    QTimer::singleShot(5000, this, [=]() {
        // Hide the current window
        hide();

        // Create and show the next puzzle window
        Puzzle2 = new puzzle2(this);
        Puzzle2->show();
    });
}
