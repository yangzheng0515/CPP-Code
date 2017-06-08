//类型转换函数与构造转换函数	2016/8/22	10:40
#include <iostream>
#include "fushu.h"
#include "mianji.h"


int main()
{
	fushu fushu1 = 5;	//构造转换函数
	fushu1.show();

	mianji mianji1(10, 10);
	fushu fushu2 = mianji1;		//构造转换函数
	fushu2.show();	

	int num = fushu1;		//类型转换函数
	std::cout << num << std::endl;		

	mianji mianji2 = fushu2;	//类型转换函数
	mianji2.show();

	std::cin.get();
	return 0;
}