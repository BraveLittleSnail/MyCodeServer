//#include <iostream>
//#include <xutility>
//#include <string>
//#include <vector>
//
//int add(int&& a, int&& b)
//{
//	return a + b;
//}
//
//void main()
//{
//	std::string str = "Hello";
//	std::vector<std::string> v;
//	//调用常规的拷贝构造函数，新建字符数组，拷贝数据
//	v.push_back(str);
//	std::cout << "After copy, str is \"" << str << "\"\n";
//	//调用移动构造函数，掏空str，掏空后，最好不要使用str
//	v.push_back(std::move(str));
//	std::cout << "After move, str is \"" << str << "\"\n";
//	std::cout << "The contents of the vector are \"" << v[0]
//		<< "\", \"" << v[1] << "\"\n";
//
//	int a;
//	int b;
//
//	a = 3;
//	b = 4;
//	a = b;
//	b = a;
//
//	// 以下写法不合法。
//	3 = a;
//	a + b = 4;
//	int result = add(std::move(a),std::move(b));
//	int zzz = 0;
//}

#include <iostream>
using namespace std;
static float  global = 1.111f;//定义一个全局静态变量
void offset(float && f)//右值引用传递参数
{
	global += f;
}
float getFloat()
{
	float f = 4.444f;
	return f;
}
void offset(float& f)  //重载了offset函数，而且是左值传递
{
	global -= f;
}
int main()
{
	float u = 10.000f;
	cout << "global:" << global << endl;
	offset(3.333f);   ///语句1
	cout << "global:" << global << endl;
	offset(getFloat() + 2.222);
	cout << "global:" << global << endl;
	offset(u);   //语句2       执行的是按左值引用的offset函数,右值引用无法初始化为左值.
	cout << "global:" << global << endl;
	return 0;
}