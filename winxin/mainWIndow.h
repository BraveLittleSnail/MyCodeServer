#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QWidget>
#include "ui_mainWIndow.h"

class mainWIndow : public QWidget
{
	Q_OBJECT

public:
	mainWIndow(QWidget *parent = 0);
	~mainWIndow();

private:
	Ui::mainWIndowClass ui;
};

#endif // MAINWINDOW_H
