#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/UEMF/Documents/Models/calendar.PNG");

    ui->label_pic->setPixmap(pix);
}

Dialog2::~Dialog2()
{
    delete ui;
}
