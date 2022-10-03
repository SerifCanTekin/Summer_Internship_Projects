#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QFile>
#include <QFileDialog>
#include "xlsxdocument.h"
#include <QDir>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    MainWindow *addnew = new MainWindow;
        addnew->show();

}


void MainWindow::on_actionOpen_triggered()
{
    excel_file0 = QFileDialog::getOpenFileName(this, "Open", "C://", "Documents (*.xlsx)");



}


void MainWindow::on_actionSave_triggered()
{

        QXlsx::Document xlsx0;

        int i = 1;
        for(i = 1; i <= list1.length();i++){

            xlsx0.write(i,1, list1[i-1]);
        }
        for(i = 1; i <= list2.length();i++){

            xlsx0.write(i,2,list2[i-1]);
        }
        xlsx0.saveAs("docOfComparer");
        // This file will be in "build-project-Desktop_Qt_6_4_0_MinGW_64_bit-Debug". You can look there.

}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();

}


void MainWindow::on_pushButton_clicked()
{
    ui->textEdit_5->clear();
    ui->textEdit_6->clear();
    list1.clear();
    list2.clear();
    int c1,c2,l1,l2;
    int i = 0;
    int j = 0;
    QString sc1,sc2,sl1,sl2;

    sc1 = ui->textEdit->toPlainText();
    sc2 = ui->textEdit_3->toPlainText();
    sl1 = ui->textEdit_2->toPlainText();
    sl2 = ui->textEdit_4->toPlainText();
    c1 = sc1.toInt();
    c2 = sc2.toInt();
    l1 = sl1.toInt();
    l2 = sl2.toInt();
    QXlsx::Document *xlsx_database = new QXlsx::Document(excel_file0);

    QVariant cell1;
    QVariant cell2;
    for(i = 1; i <= l1 ; i++){
        cell1 = xlsx_database->read(i, c1);
        list1 << cell1.toString();

    }

    for(i = 1; i <= l2 ; i++){
        cell2 = xlsx_database->read(i, c2);
        list2 << cell2.toString();

    }

    delete xlsx_database;

    for(j = 0; j < list1.length();j++){
       ui->textEdit_5->append(list1[j]);
    }
    for(j = 0; j < list2.length();j++){
       ui->textEdit_6->append(list2[j]);
    }


}









void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit_5->clear();
    ui->textEdit_6->clear();

}

