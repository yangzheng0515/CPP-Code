//类和对象 构造函数和析构函数 this指针	2016/7/22	18：32
#include <iostream>
#include "stock20.h"

int main()
{
	//这里使用代码块，使得先调用析构函数，再关闭程序，从而显示相应的消息
	{
		using std::cout;
		cout << "Using constructors to creat new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);	//隐式调用析构函数，创建对象的时候同时赋值，如果创建了构造函数，则必须对对象初始化，如果没有创建，系统自动调用默认构造函数
		stock1.show();
		Stock stock2 = Stock("Boffo Object", 2, 2.0);	//显示调用析构函数
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;	//对象赋值
		stock1.show();
		stock2.show();

		cout << "Using a constructors to reset an object\n";
		stock1 = Stock("Niffy Foods", 10, 50.0);	//用构造函数对对象赋值
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done!\n";
	}
	//析构函数自动调用
	getchar();
	return 0;
}
/*
运行结果及结果分析见《C++ Primer Plus》360页
*/


