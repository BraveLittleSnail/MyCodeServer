#include <D:\\Program Files (x86)\\Python35-32\\include\\python.h>
#include "LoginDlg.h"
#include <QDebug>




LoginDlg::LoginDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//����python�ű�����¼΢��
	Py_Initialize();

	if (!Py_IsInitialized())
	{
		int zz = 0;
	}
	std::string pyfile = "from wxpy import *\n";
	pyfile += "	bot = Bot()";
	PyRun_SimpleString(pyfile.c_str());
	Py_Finalize();
	//����΢�Ŷ�ά�룬��ʾ�ڽ�����

	//ɨ���¼�󣬹ر�dlg����ɵ�¼����

	int zzz = 0;
}

LoginDlg::~LoginDlg()
{

}
