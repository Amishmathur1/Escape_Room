#include "table.h"
#include "ui_table.h"
#include "puzzle.h"
puzzle *Puzzle;
table::table(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::table)
{
    ui->setupUi(this);
}

table::~table()
{
    delete ui;
}

void table::on_pushButton_clicked()
{
    hide();
    Puzzle = new puzzle(this);
    Puzzle->show();
}

