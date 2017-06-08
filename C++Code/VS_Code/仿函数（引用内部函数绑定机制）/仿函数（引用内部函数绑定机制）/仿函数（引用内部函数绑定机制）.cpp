//仿函数（引用内部函数绑定机制）
#include <iostream>
#include <functional>//处理函数
using namespace std::placeholders;

struct Mystruct
{
	void add1(int a)
	{
		std::cout << a << std::endl;
	}
	void add2(int a, int b)
	{
		std::cout << a + b << std::endl;
	}
	void add3(int a, int b, int c)
	{
		std::cout << a + b + c << std::endl;
	}
};

int main()
{
	Mystruct struct1;
	// auto自动变量，地址，函数指针，bind绑定
	//第一个参数引用内部函数，绑定一个实体对象
	auto fun1 = std::bind(&Mystruct::add1, &struct1, _1);
	auto fun2 = std::bind(&Mystruct::add2, &struct1, _1, _2);
	auto fun3 = std::bind(&Mystruct::add3, &struct1, _1, _2, _3);
	fun1(100);
	fun2(10, 11);
	fun3(1, 4, 7);

	Mystruct struct2;
	//创建函数指针，类结构体，数据私有，代码共享
	//函数通过调用，调用需要传递对象名进行区分
	void(Mystruct::*p)(int a) = &Mystruct::add1;	//这样也行，但是要明确知道函数指针类型

	std::cin.get();
	return 0;
}