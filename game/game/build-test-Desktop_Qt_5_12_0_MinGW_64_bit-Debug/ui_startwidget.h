/********************************************************************************
** Form generated from reading UI file 'startwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWIDGET_H
#define UI_STARTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startwidget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *startwidget)
    {
        if (startwidget->objectName().isEmpty())
            startwidget->setObjectName(QString::fromUtf8("startwidget"));
        startwidget->resize(1000, 600);
        startwidget->setMinimumSize(QSize(1000, 600));
        startwidget->setMaximumSize(QSize(1000, 600));
        stackedWidget = new QStackedWidget(startwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 9, 982, 582));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 382, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 382, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 382, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 50));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(120, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton_3, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(pushButton_2, 1, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 2, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 2, 5, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextEdit {background-color: rgb(255, 132, 139,0);border-radius: 3px;color: rgb(0, 0, 0); }"));

        gridLayout_3->addWidget(textBrowser, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        retranslateUi(startwidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(startwidget);
    } // setupUi

    void retranslateUi(QWidget *startwidget)
    {
        startwidget->setWindowTitle(QApplication::translate("startwidget", "\344\272\224\345\255\220\346\243\213", nullptr));
        pushButton->setText(QApplication::translate("startwidget", "\345\205\263\344\272\216\346\270\270\346\210\217", nullptr));
        pushButton_3->setText(QApplication::translate("startwidget", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QApplication::translate("startwidget", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        textBrowser->setHtml(QApplication::translate("startwidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  </span><span style=\" font-family:'SimSun'; font-size:18pt;\"> </span><img src=\":/new/prefix1/d73066e8ff70539442867b598d09b982.gif\" /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Si"
                        "mSun'; font-size:28pt; font-weight:600; color:#55ffff;\">\346\234\254\346\270\270\346\210\217\344\270\272\345\255\246\344\271\240c++\350\200\214\345\206\231\357\274\214\345\270\214\346\234\233\345\222\214\345\244\247\345\256\266\344\272\244\346\265\201\345\255\246\344\271\240\357\274\201\357\274\201\357\274\201</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:28pt;\">              </span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">                                       </span><span style=\" font-family:'SimSun'; color:#ff5500;\"> </span><span style=\" font-family:'SimSun'; font-size:10pt; font-weight:600; color:#ff5500;\">\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232</span></p>\n"
"<p align=\"right\" style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; color:#ff5500;\">                            \345\246\202\346\236\234\344\275\240\344\270\215\345\260\217\345\277\203\346\214\211\350\277\233\346\235\245\344\272\206\357\274\214\345\217\263\351\224\256\351\200\200\345\207\272\345\223\246\357\274\201\345\260\217bug\350\277\230\350\257\267\350\247\201\350\260\205\357\274\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">                                       </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:18pt; color:#ffaa00;\">\344\275\234\350\200\205\357\274\232wwk</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:22pt; color:#ff5500;\">\344\275\234\350\200\205QQ\357\274\2321162431386</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:22pt; color:#ff55ff;\">\346\272\220\347\240\201\345\234\260\345\235\200\357\274\232</span><a href=\"https://github.com/1162431386/QT\"><span style=\" font-family:'SimSun'; font-size:18pt; text-decoration: underline; color:#00ffff;\">https://github.com/1162431386/QT</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startwidget: public Ui_startwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWIDGET_H
