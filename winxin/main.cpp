#include <QtWidgets/QApplication>
#include "mainWIndow.h"
#include "LoginDlg.h"
#pragma comment(lib, "python35_d.lib")

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	LoginDlg pLoginDlg;
	pLoginDlg.show();
	return a.exec();
}
