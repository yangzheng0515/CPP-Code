//将引用变量作为函数参数 与普通变量和指针变量作为作为参数比较  2016/7/17  19:29
#include <iostream>

using namespace std;

void swapr(int & a, int & b);   // a, b are aliases for ints
void swapp(int * p, int * q);   // p, q are addresses of ints
void swapv(int a, int b);	//a, b are new variables

int main()
{
	int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);   // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);   // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swapp(int * p, int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

void swapv(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
/*
---------------------------------------
wallet1 = $300 wallet2 = $350

Using references to swap contents:
wallet1 = $350 wallet2 = $300

Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350

Trying to use passing by value:
wallet1 = $300 wallet2 = $350
---------------------------------------
显然，只有传递普通变量是不能完成两个数字的交换
但是，使用引用和指针变量都可以
void swapr(int & a, int & b)	//使得a、b分别为wallet1、wallet2的别名
{
	...
}
*/