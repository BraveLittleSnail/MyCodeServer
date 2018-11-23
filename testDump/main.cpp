#include <iostream>
#include <assert.h>
class A
{
public:
	A()
	{
		m_value = 1;
	}
	void add()
	{
		std::cout << m_value << std::endl;
	}
protected:
private:
	int m_value;
};

double GenerateNaN()
{
	unsigned long nan[2] = { 0xffffffff, 0x7fffffff };    // code representing a NaN
	return *(double*)nan;
}
void main()
{
	double a = GenerateNaN();
	int b = 1;
	int aaaa = _isnan(b);
	assert(a!=1);

	//dump²âÊÔ
	A* pA = new A;
	pA = nullptr;
	pA->add();
	int zzz = 0;
}