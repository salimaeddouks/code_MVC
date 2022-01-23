#include "models.h"
#include "ui_models.h"
#include "dialog2.h"
#include "ui_dialog2.h"
#include <QMessageBox>



models::models(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::models)
{


    ui->setupUi(this);

   // auto MODEL1 = new QIconSystemModel();
   // MODEL1->setRootPath("to day.jpg");
    model1=new QStringListModel(this);
    QStringList list1;
    list1 <<"Groupe1"<<"Groupe2"<<"Groupe3";
model1->setStringList(list1);
ui->listView->setModel(model1);
//ui->listView->setModel(MODEL1);

ui->comboBox->setModel(model1);
//ui->listView->setModel(MODEL1);


ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);




model2=new QStringListModel(this);
QStringList list2;
list2 <<"Groupe1"<<"Groupe2"<<"Groupe3";
model2->setStringList(list2);


ui->listView_2->setModel(model2);



ui->comboBox_2->setModel(model2);

ui->listView_2->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);





model3=new QStringListModel(this);
QStringList list3;
list3 <<"Groupe1"<<"Groupe2"<<"Groupe3";
model3->setStringList(list3);

ui->listView_3->setModel(model3);



ui->comboBox_3->setModel(model3);

ui->listView_3->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);



}

models::~models()
{
    delete ui;
}




void models::on_pushButton_10_clicked()
{
    Dialog2 f;

     auto reply =  f.exec();
}

void models::on_pushButton_7_clicked()
{
    //add1

    int row =model1->rowCount();
    model1->insertRows(row,1);
    QModelIndex index=model1->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
ui->comboBox->setModel(model1);

}

void models::on_pushButton_8_clicked()
{
    //add2
    int row =model2->rowCount();
    model2->insertRows(row,1);
    QModelIndex index=model2->index(row);
    ui->listView_2->setCurrentIndex(index);
    ui->listView_2->edit(index);
}

void models::on_pushButton_9_clicked()
{
    //add3
    int row =model3->rowCount();
    model3->insertRows(row,1);
    QModelIndex index=model3->index(row);
    ui->listView_3->setCurrentIndex(index);
    ui->listView_3->edit(index);
}

void models::on_pushButton_clicked()
{

    //delete1

    model1->removeRows(ui->listView->currentIndex().row(),1);
}

void models::on_pushButton_2_clicked()
{
    //delete2
     model2->removeRows(ui->listView_2->currentIndex().row(),1);
}

void models::on_pushButton_3_clicked()
{
    //delete3
     model3->removeRows(ui->listView_3->currentIndex().row(),1);
}

void models::on_pushButton_5_clicked()
{
    //insert1
    int row =ui->listView->currentIndex().row();
    model1->insertRows(row,1);
    QModelIndex index= model1->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void models::on_pushButton_4_clicked()
{
    //insert2
    int row =ui->listView_2->currentIndex().row();
    model2->insertRows(row,1);
    QModelIndex index= model2->index(row);
    ui->listView_2->setCurrentIndex(index);
    ui->listView_2->edit(index);

}

void models::on_pushButton_6_clicked()
{
    //insert3
    int row =ui->listView_3->currentIndex().row();
    model3->insertRows(row,1);
    QModelIndex index= model3->index(row);
    ui->listView_3->setCurrentIndex(index);
    ui->listView_3->edit(index);

}


void models::on_pushButton_11_clicked()
{
  // Login conn;


}






void models::on_pushButton_12_clicked()
{
    S t1;
    t1.Date=(ui->dateEdit->date()).toString();
    t1.Description=ui->lineEdit->text();
   t1.Tag= ui->comboBox_4->currentText();
 model5.ok(t1);
 ui->listView->setModel(&model5);
 ui->comboBox->setModel(&model5);


}

void models::on_pushButton_13_clicked()
{
    S t2;
    t2.Date=(ui->dateEdit_2->date()).toString();
    t2.Description=ui->lineEdit_2->text();
   t2.Tag= ui->comboBox_5->currentText();
 model6.ok(t2);
 ui->listView_2->setModel(&model6);

 ui->comboBox_2->setModel(&model6);


}


void models::on_pushButton_14_clicked()
{
    S t3;
    t3.Date=(ui->dateEdit_3->date()).toString();
    t3.Description=ui->lineEdit_3->text();
   t3.Tag= ui->comboBox_6->currentText();
 model7.ok(t3);
 ui->listView_3->setModel(&model7);
 ui->comboBox_3->setModel(&model7);



}

