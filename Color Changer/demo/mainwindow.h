#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QImage image0;
    QList<QImage> list0;
    int a;
    QColor color0;
    QStringList file0;

    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionExit_triggered();

    void on_actionChange_Color_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
