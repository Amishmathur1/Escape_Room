#include "puzzle2.h"
#include "ui_puzzle2.h"
#include "puzzle.h"

puzzle *obj3;

puzzle2::puzzle2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::puzzle2)
{
    ui->setupUi(this);
    ui->label_Text1->hide();
    ui->label_Text2->hide();
    ui->lineEdit_2->show();
    ui->label_5->show();
}

puzzle2::~puzzle2()
{
    delete ui;
}

void puzzle2::on_back_clicked()
{
    hide();
    obj3 = new puzzle(this);
    obj3->show();
}

void puzzle2::on_submit_clicked()
{
    QString move = ui->lineEdit_2->text();
    if (move == "f7" || move == "F7"){
        ui->label_Text1->show();
        ui->label_Text1->setStyleSheet("font-family:'Creepster'; font-size: 9pt; color:#ffffff;");
        ui->label_Text1->setText("Caesar Cipher");
    }
    else if(move == "h7" || move == "H7"){
        ui->label_Text2->show();
        ui->label_Text2->setStyleSheet("font-family:'Creepster'; font-size: 9pt; color:#ffffff;");
        ui->label_Text2->setText("Lewsvypun aol opkklu zljylaz huk\n"
                                 "jyfwapj zftivspzt ilopuk Slvuhykv \n"
                                 "kh Cpujp'z thzalywpljl, \n"
                                 "'Aol Shza Zbwwly. Jylhapvu Flhy..'");
    }
}

