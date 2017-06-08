//智能指针	2016/8/18	21：05
#include <iostream>
#include<memory>//内存	auto_ptr

int main()
{
	for (int i = 0; i < 10000000; i++)
	{
		double * p = new double;	//位指针分配内存
		//创建智能指针管理指针p指向内存
		std::auto_ptr<double> autop(p);//必须寄生于一个指针	C++98
	}

	for (int i = 0; i < 10000000; i++)
	{
		std::unique_ptr<double> pdb(new double);	//C++11智能指针 
	}

	std::cin.get();
	return 0;
}