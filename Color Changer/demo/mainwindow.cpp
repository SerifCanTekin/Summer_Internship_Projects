#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStringList>
#include <QFileDialog>
#include <QColorDialog>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QFile>
#include <QDir>
#include <QString>

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
    file0 = QFileDialog::getOpenFileNames(this, "Open", "C://", "Images (*.jpg *.png)");

    for(int i=0; i < file0.length() ; i++ )
    {
        image0 =QImage(file0[i]);
        list0.append(image0);


    }
    a = 0;
    QPixmap pixmap0 = QPixmap::fromImage(list0[a]);

    ui->label->setPixmap(pixmap0);
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionChange_Color_triggered()
{
    color0 = QColorDialog::getColor(Qt::white,this,"Choose color");

    for(int i = 0; i < list0.length();i++){
        if(!color0.isValid()){
            break;
        }
        QPainter painter0(&list0[i]);
        painter0.setCompositionMode(QPainter::CompositionMode_SourceIn);
        painter0.fillRect(list0[i].rect(),color0);

        painter0.end();
    }
    QPixmap pixmap0 = QPixmap::fromImage(list0[a]);

    ui->label->setPixmap(pixmap0);

}


void MainWindow::on_pushButton_clicked()
{


    if(a == 0){}
    else{
        a--;
        QPixmap pixmap0 = QPixmap::fromImage(list0[a]);

        ui->label->setPixmap(pixmap0);
    }

}


void MainWindow::on_pushButton_2_clicked()
{

    if(a == list0.length()-1){}
    else{
        a++;
        QPixmap pixmap0 = QPixmap::fromImage(list0[a]);

        ui->label->setPixmap(pixmap0);
    }

}


void MainWindow::on_actionSave_triggered()
{
    QString name0 = color0.name();
    QStringList strl;
    int i =0;
    QDir dir0("C:\\Users\\serif\\Desktop\\" + name0);
    if(!dir0.exists()){
        dir0.mkdir("C:\\Users\\serif\\Desktop\\" + name0);
    }


    for(; i < list0.length();i++){
        strl = file0[i].split("/") ;
        list0[i].save("C:\\Users\\serif\\Desktop\\" + name0 + "\\"+  strl.last());

}
}


