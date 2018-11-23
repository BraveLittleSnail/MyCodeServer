#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include "ui_mainWindow.h"
class QPainter;
class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
	~mainWindow();
	void mousePressEvent(QMouseEvent *e);

	void paintEvent(QPaintEvent *event);
protected Q_SLOTS:
	void Delete();
	void add();
private:
	Ui::mainWindowClass ui;

	QPainter* m_Painter;

	void temp();

	void drawPlane();

	int m_index;
};

#endif // MAINWINDOW_H
