#include "story.h"
#include "ui_story.h"


story::story(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::story)
{
    ui->setupUi(this);
    ui->label_2->hide();
    ui->pushButton_2->hide();
}

story::~story()
{
    delete ui;
}

void story::on_pushButton_clicked()
{
    ui->label_1->hide();
    ui->label_2->show();
    ui->pushButton->hide();
    ui->pushButton_2->show();
}


void story::on_pushButton_2_clicked()
{
    hide();
    Puzzle = new puzzle(this);
    Puzzle->show();
}

