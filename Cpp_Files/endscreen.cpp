#include "endscreen.h"
#include "ui_endscreen.h"
#include <QTimer>

endscreen::endscreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::endscreen)
{
    ui->setupUi(this);
    ui->hide->hide();
    ui->run->hide();
    ui->gotcha->hide();
}

endscreen::~endscreen()
{
    delete ui;
}


void endscreen::on_next_clicked()
{
    ui->label_2->setStyleSheet("font-family:'Courier New';font-size:10pt; color:#ffffff;");
    ui->label_2->setText("You Looked around yourself it is pitch black around you\n"
                         "Under the dim lights of the alley, a figure emerges from the\n"
                         "shadows,its gaze piercing through the darkness.");
    ui->label->setStyleSheet("border-image: url(':/img/images/allay.jpg');");
    ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0.5);");
    ui->next->hide();
    ui->hide->show();
    ui->run->show();

}


void endscreen::on_run_clicked()
{
    QTimer::singleShot(5000, this, [=]() {
        ui->hide->hide();
        ui->run->hide();
        ui->label_2->setText("");
        ui->label_3->hide();
        ui->gotcha->show();
    });
}

void endscreen::on_gotcha_clicked()
{
    ui->gotcha->hide();
    ui->label->setStyleSheet("border-image: url(':/img/images/ghost.jpg')");
    QTimer::singleShot(5000, this, [=]() {
        qTerminate();
    });
}

