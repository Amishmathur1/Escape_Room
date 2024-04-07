#include "wall.h"
#include "ui_wall.h"
#include "puzzle.h"
puzzle *obj1;

wall::wall(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wall)
{
    ui->setupUi(this);
}

wall::~wall()
{
    delete ui;
}

void wall::on_pushButton_clicked()
{
    hide();
    obj1 = new puzzle(this);
    obj1->show();
}

