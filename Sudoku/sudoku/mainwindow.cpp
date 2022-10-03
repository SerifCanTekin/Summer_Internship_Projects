#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

 //   list << QList<int>(); farklı bir liste oluşturmaya gerek kalmadan böyle yapabilirsin



}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_3_clicked()
{// new game
    i++;
    if(i == 16) i=1;
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    ui->textEdit_3->clear();
    ui->textEdit_4->clear();
    ui->textEdit_5->clear();
    ui->textEdit_6->clear();
    ui->textEdit_7->clear();
    ui->textEdit_8->clear();
    ui->textEdit_9->clear();
    ui->textEdit_10->clear();
    ui->textEdit_11->clear();
    ui->textEdit_12->clear();
    ui->textEdit_13->clear();
    ui->textEdit_14->clear();
    ui->textEdit_15->clear();
    ui->textEdit_16->clear();
    ui->textEdit_17->clear();
    ui->textEdit_18->clear();
    ui->textEdit_19->clear();
    ui->textEdit_20->clear();
    ui->textEdit_21->clear();
    ui->textEdit_22->clear();
    ui->textEdit_23->clear();
    ui->textEdit_24->clear();
    ui->textEdit_25->clear();
    switch(i){

    case 1:
        ui->textEdit->append("2");
        ui->textEdit_2->append("4");
        ui->textEdit_9->append("5");
        ui->textEdit_13->append("2");
        ui->textEdit_16->append("5");
        ui->textEdit_20->append("2");
        ui->textEdit_23->append("3");
        ui->textEdit_25->append("1");
        break;
    case 2:
        ui->textEdit_2->append("1");
        ui->textEdit_5->append("4");
        ui->textEdit_8->append("3");
        ui->textEdit_13->append("1");
        ui->textEdit_16->append("5");
        ui->textEdit_21->append("4");
        ui->textEdit_25->append("2");
        break;
    case 3:
        ui->textEdit->append("2");
        ui->textEdit_3->append("4");
        ui->textEdit_5->append("1");
        ui->textEdit_6->append("5");
        ui->textEdit_10->append("2");
        ui->textEdit_12->append("4");
        ui->textEdit_17->append("2");
        ui->textEdit_24->append("5");
        ui->textEdit_25->append("3");
        break;
    case 4:
        ui->textEdit->append("1");
        ui->textEdit_2->append("3");
        ui->textEdit_6->append("5");
        ui->textEdit_10->append("2");
        ui->textEdit_12->append("2");
        ui->textEdit_14->append("4");
        ui->textEdit_16->append("2");
        ui->textEdit_18->append("1");
        ui->textEdit_25->append("3");
        break;
    case 5:
        ui->textEdit_2->append("5");
        ui->textEdit_4->append("1");
        ui->textEdit_6->append("4");
        ui->textEdit_10->append("5");
        ui->textEdit_13->append("3");
        ui->textEdit_20->append("1");
        ui->textEdit_22->append("2");
        ui->textEdit_23->append("4");
        break;
    case 6:
        ui->textEdit->append("1");
        ui->textEdit_2->append("4");
        ui->textEdit_9->append("3");
        ui->textEdit_13->append("2");
        ui->textEdit_15->append("5");
        ui->textEdit_16->append("2");
        ui->textEdit_20->append("3");
        ui->textEdit_22->append("1");
        break;
    case 7:
        ui->textEdit_2->append("4");
        ui->textEdit_8->append("4");
        ui->textEdit_11->append("1");
        ui->textEdit_14->append("5");
        ui->textEdit_17->append("2");
        ui->textEdit_20->append("3");
        ui->textEdit_21->append("2");
        ui->textEdit_25->append("5");
        break;
    case 8:
        ui->textEdit_4->append("3");
        ui->textEdit_5->append("5");
        ui->textEdit_6->append("2");
        ui->textEdit_13->append("1");
        ui->textEdit_17->append("4");
        ui->textEdit_22->append("5");
        ui->textEdit_24->append("2");
        ui->textEdit_25->append("1");
        break;
    case 9:
        ui->textEdit_4->append("3");
        ui->textEdit_5->append("2");
        ui->textEdit_7->append("3");
        ui->textEdit_11->append("1");
        ui->textEdit_16->append("5");
        ui->textEdit_23->append("5");
        ui->textEdit_24->append("1");
        break;
    case 10:
        ui->textEdit_6->append("1");
        ui->textEdit_10->append("4");
        ui->textEdit_14->append("2");
        ui->textEdit_18->append("3");
        ui->textEdit_20->append("1");
        ui->textEdit_21->append("2");
        ui->textEdit_22->append("5");
        break;
    case 11:
        ui->textEdit_3->append("5");
        ui->textEdit_4->append("3");
        ui->textEdit_10->append("2");
        ui->textEdit_11->append("5");
        ui->textEdit_12->append("1");
        ui->textEdit_19->append("4");
        ui->textEdit_22->append("3");
        ui->textEdit_23->append("4");
        break;
    case 12:
        ui->textEdit->append("3");
        ui->textEdit_4->append("4");
        ui->textEdit_8->append("2");
        ui->textEdit_10->append("1");
        ui->textEdit_14->append("1");
        ui->textEdit_17->append("3");
        ui->textEdit_21->append("5");
        break;
    case 13:
        ui->textEdit->append("4");
        ui->textEdit_9->append("2");
        ui->textEdit_10->append("1");
        ui->textEdit_12->append("1");
        ui->textEdit_18->append("3");
        ui->textEdit_21->append("1");
        ui->textEdit_23->append("3");
        ui->textEdit_25->append("5");
        break;
    case 14:
        ui->textEdit->append("5");
        ui->textEdit_3->append("1");
        ui->textEdit_10->append("5");
        ui->textEdit_12->append("4");
        ui->textEdit_19->append("2");
        ui->textEdit_22->append("2");
        ui->textEdit_25->append("3");
        break;
    case 15:
        ui->textEdit_5->append("2");
        ui->textEdit_6->append("1");
        ui->textEdit_9->append("3");
        ui->textEdit_11->append("1");
        ui->textEdit_12->append("4");
        ui->textEdit_18->append("2");
        ui->textEdit_21->append("5");
        break;
    default:
        break;
}
}


void MainWindow::on_pushButton_clicked()
{//clear
    i--;
    on_pushButton_3_clicked();

}


void MainWindow::on_pushButton_2_clicked()
{//check
    int s = 0,t = 0;
    {if(ui->textEdit->toPlainText() == "") s++;
    if(ui->textEdit_2->toPlainText() == "") s++;
    if(ui->textEdit_3->toPlainText() == "") s++;
    if(ui->textEdit_4->toPlainText() == "") s++;
    if(ui->textEdit_5->toPlainText() == "") s++;
    if(ui->textEdit_6->toPlainText() == "") s++;
    if(ui->textEdit_7->toPlainText() == "") s++;
    if(ui->textEdit_8->toPlainText() == "") s++;
    if(ui->textEdit_9->toPlainText() == "") s++;
    if(ui->textEdit_10->toPlainText() == "") s++;
    if(ui->textEdit_11->toPlainText() == "") s++;
    if(ui->textEdit_12->toPlainText() == "") s++;
    if(ui->textEdit_13->toPlainText() == "") s++;
    if(ui->textEdit_14->toPlainText() == "") s++;
    if(ui->textEdit_15->toPlainText() == "") s++;
    if(ui->textEdit_16->toPlainText() == "") s++;
    if(ui->textEdit_17->toPlainText() == "") s++;
    if(ui->textEdit_18->toPlainText() == "") s++;
    if(ui->textEdit_19->toPlainText() == "") s++;
    if(ui->textEdit_20->toPlainText() == "") s++;
    if(ui->textEdit_21->toPlainText() == "") s++;
    if(ui->textEdit_22->toPlainText() == "") s++;
    if(ui->textEdit_23->toPlainText() == "") s++;
    if(ui->textEdit_24->toPlainText() == "") s++;
    if(ui->textEdit_25->toPlainText() == "") s++;}
    if(s != 0){
        QMessageBox::about(this,"Warning","Unsolved");
        return;
    }













    else{
        list0.clear();
        list1.clear();
        list2.clear();
        list3.clear();
        list4.clear();
        list0 << ui->textEdit->toPlainText().toInt();
        list0 << ui->textEdit_2->toPlainText().toInt();
        list0 << ui->textEdit_3->toPlainText().toInt();
        list0 << ui->textEdit_4->toPlainText().toInt();
        list0 << ui->textEdit_5->toPlainText().toInt();
        list1 << ui->textEdit_6->toPlainText().toInt();
        list1 << ui->textEdit_7->toPlainText().toInt();
        list1 << ui->textEdit_8->toPlainText().toInt();
        list1 << ui->textEdit_9->toPlainText().toInt();
        list1 << ui->textEdit_10->toPlainText().toInt();
        list2 << ui->textEdit_11->toPlainText().toInt();
        list2 << ui->textEdit_12->toPlainText().toInt();
        list2 << ui->textEdit_13->toPlainText().toInt();
        list2 << ui->textEdit_14->toPlainText().toInt();
        list2 << ui->textEdit_15->toPlainText().toInt();
        list3 << ui->textEdit_16->toPlainText().toInt();
        list3 << ui->textEdit_17->toPlainText().toInt();
        list3 << ui->textEdit_18->toPlainText().toInt();
        list3 << ui->textEdit_19->toPlainText().toInt();
        list3 << ui->textEdit_20->toPlainText().toInt();
        list4 << ui->textEdit_21->toPlainText().toInt();
        list4 << ui->textEdit_22->toPlainText().toInt();
        list4 << ui->textEdit_23->toPlainText().toInt();
        list4 << ui->textEdit_24->toPlainText().toInt();
        list4 << ui->textEdit_25->toPlainText().toInt();



    }
    for(s=0; s < 5 ; s++){
        if(list0[s] < 1 || list1[s] < 1 || list2[s] < 1 || list3[s] < 1 || list4[s] < 1 || list0[s] > 5 || list1[s] > 5 || list2[s] > 5 || list3[s] > 5 || list4[s] > 5 ){
            QMessageBox::about(this,"Warning","Failed");
            return;
        }
    }
    for(s=0 ; s < 5; s++){
        for(t = s+1; t < 5 ; t++){
            if(list0[s] == list0[t] || list1[s] == list1[t] || list2[s] == list2[t] || list3[s] == list3[t] || list4[s] == list4[t]){
                QMessageBox::about(this,"Warning","Failed");
                return;
            }
        }

    }
    list << list0;
    list << list1;
    list << list2;
    list << list3;
    list << list4;


    for(s = 0; s < 5 ; s++){
        for(t = s+1 ; t < 5 ; t++){
            if(list[s][0] == list[t][0] || list[s][1] == list[t][1] || list[s][2] == list[t][2] || list[s][3] == list[t][3] || list[s][4] == list[t][4]){
                QMessageBox::about(this,"Warning","Failed");
                return;
            }
        }

    }
    QMessageBox::about(this,"Warning","Good Job");
    return;





}
























