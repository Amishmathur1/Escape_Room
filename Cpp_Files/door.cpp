#include "door.h"
#include <QMessageBox>
#include "ui_door.h"
#include "puzzle.h"
#include "endscreen.h"

puzzle *obj;
endscreen *obje;

door::door(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::door)
{
    ui->setupUi(this);
}

door::~door()
{
    delete ui;
}

void door::on_pushButton_1_clicked()
{
    QString code = ui->lineEdit->text();
    if (code == "1527") {
        QMessageBox::information(this,
                                 "Status",
                                 "You have guesses the correct code you escaped the room");
        hide();
        obje = new endscreen(this);
        obje->show();

    }
    else if (code == "1495"){
        QMessageBox::warning(this,
                             "SPECIAL ENDING",
                             "You Have Discoverd the Special Ending For this Room you survived..");
                            qTerminate();
    }
    else {
        QMessageBox::information(this,
                                 "Status",
                                 "Your Guess was wrong try again and think about the clues");
    }
}

void door::on_pushButton_2_clicked()
{
    hide();
    obj = new puzzle(this);
    obj->show();
}
