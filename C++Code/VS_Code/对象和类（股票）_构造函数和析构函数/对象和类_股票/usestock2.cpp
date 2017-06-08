/*//对象数组	2016/7/24	22：29
#include <iostream>
#include <string>
#include "stock20.h"

const int STKS = 4;

int main()
{
	//初始化对象数组
	Stock stocks[STKS] = {		
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	
	std::cout << "Stock holdings:\n";
	int st;
	//输出数组
	for (st = 0; st < STKS; st++)
		stocks[st].show();

	const Stock * top = &stocks[0];		//top指针来跟踪值最高的元素
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	std::cout << "\nMost valuable holding:\n";
	top->show();	//输出最高的元素
	getchar();
	return 0;
}
//运行结果及结果分析见《C++ Primer Plus》369页
*/