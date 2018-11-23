#include <D:\\Program Files (x86)\\Python35-32\\include\\python.h>
#include "LoginDlg.h"
#include <QDebug>




LoginDlg::LoginDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//加载python脚本，登录微信
	Py_Initialize();

	if (!Py_IsInitialized())
	{
		int zz = 0;
	}
	std::string pyfile = "from wxpy import *\n";
	pyfile += "	bot = Bot()";
	PyRun_SimpleString(pyfile.c_str());
	Py_Finalize();
	//加载微信二维码，显示在界面上

	//扫描登录后，关闭dlg。完成登录操作

	int zzz = 0;
}

LoginDlg::~LoginDlg()
{

}
