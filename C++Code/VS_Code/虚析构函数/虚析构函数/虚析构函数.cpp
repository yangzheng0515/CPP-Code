#include <iostream>

using namespace std;

class A
{
public:
	A()//构造函数不可以是虚函数，不会再构造，没有办法创建子类中的父类对象
	{
		std::cout << "a create" << std::endl;
	}
	virtual ~A()//虚析构函数，让父类指针正确的释放子类对象的内存，避免内存泄漏
	{
		std::cout << "a delete" << std::endl;
	}
};

class B :public A
{
public:
	B()//B 创建自动调用A的构造函数
	{
		std::cout << "b create" << std::endl;
	}
	~B()//B析构的时候会自动调用A的析构函数
	{
		std::cout << "b delete" << std::endl;
	}
};

int main()
{
	A * p = new B;
	delete p;

	std::cin.get();
	return 0;
}

