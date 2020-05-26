/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QWidget *page_4;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QWidget *page_5;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;
    QWidget *page_6;
    QGridLayout *gridLayout_5;
    QTextBrowser *textBrowser_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button1;
    QPushButton *button4;
    QPushButton *button7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *button2;
    QPushButton *button5;
    QPushButton *button8;
    QVBoxLayout *verticalLayout_6;
    QPushButton *button3;
    QPushButton *button6;
    QPushButton *button9;
    QVBoxLayout *verticalLayout_7;
    QPushButton *button_del;
    QPushButton *button_piont;
    QPushButton *button0;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(417, 400);
        MainWindow->setMinimumSize(QSize(417, 400));
        MainWindow->setMaximumSize(QSize(417, 400));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setScaledContents(true);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_2->addWidget(widget);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        comboBox = new QComboBox(page);
        comboBox->addItem(QString::fromUtf8("15"));
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_6 = new QSpacerItem(125, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(37, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_8 = new QSpacerItem(37, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(37, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_2 = new QGridLayout(page_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_3 = new QGridLayout(page_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textBrowser = new QTextBrowser(page_5);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_3->addWidget(textBrowser, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_5 = new QGridLayout(page_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        textBrowser_2 = new QTextBrowser(page_6);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        gridLayout_5->addWidget(textBrowser_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_9->addWidget(progressBar);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_8->addWidget(textEdit);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        button1 = new QPushButton(page_2);
        button1->setObjectName(QString::fromUtf8("button1"));

        verticalLayout_3->addWidget(button1);

        button4 = new QPushButton(page_2);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setMaximumSize(QSize(91, 16777215));

        verticalLayout_3->addWidget(button4);

        button7 = new QPushButton(page_2);
        button7->setObjectName(QString::fromUtf8("button7"));

        verticalLayout_3->addWidget(button7);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        button2 = new QPushButton(page_2);
        button2->setObjectName(QString::fromUtf8("button2"));

        verticalLayout_4->addWidget(button2);

        button5 = new QPushButton(page_2);
        button5->setObjectName(QString::fromUtf8("button5"));

        verticalLayout_4->addWidget(button5);

        button8 = new QPushButton(page_2);
        button8->setObjectName(QString::fromUtf8("button8"));

        verticalLayout_4->addWidget(button8);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        button3 = new QPushButton(page_2);
        button3->setObjectName(QString::fromUtf8("button3"));

        verticalLayout_6->addWidget(button3);

        button6 = new QPushButton(page_2);
        button6->setObjectName(QString::fromUtf8("button6"));

        verticalLayout_6->addWidget(button6);

        button9 = new QPushButton(page_2);
        button9->setObjectName(QString::fromUtf8("button9"));

        verticalLayout_6->addWidget(button9);


        gridLayout->addLayout(verticalLayout_6, 0, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        button_del = new QPushButton(page_2);
        button_del->setObjectName(QString::fromUtf8("button_del"));

        verticalLayout_7->addWidget(button_del);

        button_piont = new QPushButton(page_2);
        button_piont->setObjectName(QString::fromUtf8("button_piont"));

        verticalLayout_7->addWidget(button_piont);

        button0 = new QPushButton(page_2);
        button0->setObjectName(QString::fromUtf8("button0"));

        verticalLayout_7->addWidget(button0);


        gridLayout->addLayout(verticalLayout_7, 0, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout);

        stackedWidget->addWidget(page_2);

        verticalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 417, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_3->addAction(action_3);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\347\202\271\350\277\231\351\207\214!", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\350\277\231\351\207\214\357\274\201", nullptr));
        label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#00aaff;\">\347\214\234\346\225\260\345\255\227\346\270\270\346\210\217</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa7f;\">\351\200\211\346\213\251\346\227\266\351\227\264(s)</span></p></body></html>", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "30", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "45", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "60", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "75", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "90", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "120", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "150", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">                               </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#00aaff;\">                                \345\243\260\346\230\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">   </span><span style=\" font-size:18pt; color:#00ffff;\">\345\210\266\344\275\234\346\270\270"
                        "\346\210\217\347\272\257\345\261\236\345\255\246\344\271\240QT\345\222\214\344\270\252\344\272\272\347\210\261\345\245\275</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">                        </span><span style=\" font-size:18pt; color:#55007f;\">\344\275\234\350\200\205\357\274\232wwk</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">       </span><span style=\" font-size:18pt; color:#ffaa7f;\">\344\270\252\344\272\272\347\275\221\347\253\231</span><span style=\" font-size:18pt;\">\357\274\232</span><a href=\"www.kaiww.club\"><span style=\" font-size:18pt; text-decoration: underline; color:#0000ff;\">www.kaiww.club</span></a></p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; color:#55aaff;\">\346\270\270\346\210\217\345\270\256\345\212\251</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; color:#55aaff;\">   \346\234\254\346\270\270\346\210\217\346\230\257\350\256\251\347\224\250\346\210\267\350\276\223\345\205\245\345\233\233\344\275\215\346\225\260\345\255\227\346\240\271\346\215\256\347\224\265\350\204\221\346\217\220\347\244\272\350\277\233\350\241\214\347\214\234\346"
                        "\265\213</span></p></body></html>", nullptr));
        button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        button_del->setText(QApplication::translate("MainWindow", " del", nullptr));
        button_piont->setText(QApplication::translate("MainWindow", "\346\217\220\347\244\272", nullptr));
        button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
