/********************************************************************************
** Form generated from reading UI file 'mainWIndow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWIndowClass
{
public:

    void setupUi(QWidget *mainWIndowClass)
    {
        if (mainWIndowClass->objectName().isEmpty())
            mainWIndowClass->setObjectName(QStringLiteral("mainWIndowClass"));
        mainWIndowClass->resize(600, 400);

        retranslateUi(mainWIndowClass);

        QMetaObject::connectSlotsByName(mainWIndowClass);
    } // setupUi

    void retranslateUi(QWidget *mainWIndowClass)
    {
        mainWIndowClass->setWindowTitle(QApplication::translate("mainWIndowClass", "mainWIndow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWIndowClass: public Ui_mainWIndowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
