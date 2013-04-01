/********************************************************************************
** Form generated from reading UI file 'data_about_a_person.ui'
**
** Created: Sun 17. Mar 14:04:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_ABOUT_A_PERSON_H
#define UI_DATA_ABOUT_A_PERSON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data_about_a_personClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *data_about_a_personClass)
    {
        if (data_about_a_personClass->objectName().isEmpty())
            data_about_a_personClass->setObjectName(QString::fromUtf8("data_about_a_personClass"));
        data_about_a_personClass->resize(600, 400);
        menuBar = new QMenuBar(data_about_a_personClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        data_about_a_personClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(data_about_a_personClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        data_about_a_personClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(data_about_a_personClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        data_about_a_personClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(data_about_a_personClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        data_about_a_personClass->setStatusBar(statusBar);

        retranslateUi(data_about_a_personClass);

        QMetaObject::connectSlotsByName(data_about_a_personClass);
    } // setupUi

    void retranslateUi(QMainWindow *data_about_a_personClass)
    {
        data_about_a_personClass->setWindowTitle(QApplication::translate("data_about_a_personClass", "data_about_a_person", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class data_about_a_personClass: public Ui_data_about_a_personClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_ABOUT_A_PERSON_H
