//#include<Python.h>
#include <D:\\Program Files (x86)\\Python35-32\\include\\python.h>
#include <string>
#include <windows.h>

#pragma comment(lib, "python35_d.lib")
//不要忘记在使用完wchar_t*后delete[]释放内存
wchar_t *multiByteToWideChar(std::string& pKey)
{
	const char* pCStrKey = pKey.c_str();
	//第一次调用返回转换后的字符串长度，用于确认为wchar_t*开辟多大的内存空间
	int pSize = MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, NULL, 0);
	wchar_t *pWCStrKey = new wchar_t[pSize];
	//第二次调用将单字节字符串转换成双字节字符串
	MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, pWCStrKey, pSize);
	return pWCStrKey;
}

void main()
{
	//test1
	{
		std::string path = "D:\\Program Files (x86)\\Python35-32";
		wchar_t * aaa = multiByteToWideChar(path);
		Py_SetPythonHome(aaa);

		//
		Py_Initialize();

		if (!Py_IsInitialized())
		{
			int zz = 0;
		}
		std::string pyfile = "from wxpy import *\n";
		pyfile += "bot = Bot()";
		PyRun_SimpleString(pyfile.c_str());
		Py_Finalize();
	}
	//test2
	{
		Py_Initialize();
		PyRun_SimpleString("import sys; sys.path.append('.')");
		PyRun_SimpleString("import mytest;");
		PyRun_SimpleString("print( mytest.myabs(-2.0))");
		Py_Finalize();
	}
	int  zzz = 0;
}