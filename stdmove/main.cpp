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
//	//���ó���Ŀ������캯�����½��ַ����飬��������
//	v.push_back(str);
//	std::cout << "After copy, str is \"" << str << "\"\n";
//	//�����ƶ����캯�����Ϳ�str���Ϳպ���ò�Ҫʹ��str
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
//	// ����д�����Ϸ���
//	3 = a;
//	a + b = 4;
//	int result = add(std::move(a),std::move(b));
//	int zzz = 0;
//}

#include <iostream>
using namespace std;
static float  global = 1.111f;//����һ��ȫ�־�̬����
void offset(float && f)//��ֵ���ô��ݲ���
{
	global += f;
}
float getFloat()
{
	float f = 4.444f;
	return f;
}
void offset(float& f)  //������offset��������������ֵ����
{
	global -= f;
}
int main()
{
	float u = 10.000f;
	cout << "global:" << global << endl;
	offset(3.333f);   ///���1
	cout << "global:" << global << endl;
	offset(getFloat() + 2.222);
	cout << "global:" << global << endl;
	offset(u);   //���2       ִ�е��ǰ���ֵ���õ�offset����,��ֵ�����޷���ʼ��Ϊ��ֵ.
	cout << "global:" << global << endl;
	return 0;
}