#include "painting.h"
#include "ui_painting.h"

#include "puzzle.h"
puzzle *P;

painting::painting(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::painting)
{
    ui->setupUi(this);
}

painting::~painting()
{
    delete ui;
}

void painting::on_pushButton_clicked()
{
    ui->label_4->setStyleSheet("font-family:'Courier New'; font-size:9pt; font-weight:700; color:#ffffff");
    ui->label_4->setText("Results dosent matter if you die at the end..\n"
                         "Of zit hkodqkn ofztkyqet, yoct eigoetl qvqoz\n
                         rolegctkn, gft gy vioei sxkal egfetqstr voziof\n
                         zit xhhtk styz jxqrkqfz");

}


void painting::on_pushButton_2_clicked()
{
    hide();
    P = new puzzle(this);
    P->show();
}

