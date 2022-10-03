/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(824, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/new_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/645-6451683_file-folder-icon-vector-png-download-open-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/44-441675_save-button-png-transparent-image-save-as-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 261, 306));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        textEdit->setFont(font1);

        verticalLayout->addWidget(textEdit);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setFont(font1);

        verticalLayout->addWidget(textEdit_3);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setFont(font1);

        verticalLayout->addWidget(textEdit_2);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setFont(font1);

        verticalLayout->addWidget(textEdit_4);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(290, 10, 381, 301));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_5 = new QTextEdit(layoutWidget1);
        textEdit_5->setObjectName("textEdit_5");
        QFont font2;
        font2.setPointSize(18);
        textEdit_5->setFont(font2);

        horizontalLayout_2->addWidget(textEdit_5);

        textEdit_6 = new QTextEdit(layoutWidget1);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setFont(font2);

        horizontalLayout_2->addWidget(textEdit_6);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 340, 271, 161));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 824, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Column 1:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Column 2:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Line Number 1:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Line Number 2:", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:28pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:28pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:28pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:28pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Compare", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
