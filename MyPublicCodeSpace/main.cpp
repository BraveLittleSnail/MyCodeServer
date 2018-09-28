#include <iostream>

//在version_0_0_1在main中调用了一个函数
int Add(int a, int b)
{
	return a + b;
}

void main()
{
	std::cout << "Hello Git @ github" << std::endl;

	std::cout << "I am version_0_0_1 branch" << std::endl;


	int temp = Add(1, 1);


}