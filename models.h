#ifndef MODELS_H
#define MODEL
#include <QtCore>
#include <QtGui>
#include <QDialog>
#include"dialogue1.h"



#include <QMainWindow>
//#include<QIconSystemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class models; }
QT_END_NAMESPACE

class models : public QMainWindow
{
    Q_OBJECT

public:
    models(QWidget *parent = nullptr);
    ~models();

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();




    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

protected:

private:
    Ui::models *ui;
    dialogue1  model5;
     dialogue1  model6;
      dialogue1  model7;
  //QIconSystemModel * MODEL1;
      QStringListModel *model1;
       QStringListModel *model2;
        QStringListModel *model3;




};
#endif // MODELS_H
