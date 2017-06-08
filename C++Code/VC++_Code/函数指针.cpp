//函数指针	2016/7/15	17:54
#include <iostream>

using namespace std;

double betsy(int);
void estimate(int lines, double (*pf)(int));

int main()
{
	int code;

	cout << "How many lines of code do you need? ";
    cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code, betsy);

	return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}
/*
---------------------------------------
How many lines of code do you need? 30
Here's Betsy's estimate:
30 lines will take 1.5 hour(s)
---------------------------------------
1.获取函数的地址
函数名就是函数的地址，如果think()是一个函数，则think()就是该函数的地址
2.声明函数指针
double (*pf)(int);
(*pf)相当于函数名，pf就是函数指针
为提供正确的运算符优先级，必须在声明中使用括号将*fp括起来，
如果写成double *pf(int)，则是一个返回指针的函数
3.使用指针类来调用函数
double (*pf)(5);
double pf(5);	这两种调用方式都可行
*/