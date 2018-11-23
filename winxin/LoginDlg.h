#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include "ui_LoginDlg.h"

class LoginDlg : public QDialog
{
	Q_OBJECT

public:
	LoginDlg(QWidget *parent = 0);
	~LoginDlg();

private:
	Ui::LoginDlg ui;
};

#endif // LOGINDLG_H
