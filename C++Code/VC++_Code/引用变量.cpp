//引用变量  2016/7/9 0:09
# include <iostream>

using namespace::std;

int main()
{
	int intOne = 0;
	int& r_int_one = intOne;

	intOne = 5;

	cout << intOne << endl;
	cout << r_int_one << endl; 

	r_int_one = 7;

	cout << intOne << endl;
	cout << r_int_one << endl; 

	cout << &(intOne) << endl;
	cout << &(r_int_one) << endl; 

	return 0;
}

/*
--------
5
5
7
7
0018FF44
0018FF44
--------
引用操作
	& 只有在声明引用时是引用操作符，其他时候都是地址操作符

引用和变量指向同一个储存单元
	引用一旦初始化，它就维系在一定的目标上，再也不分开
作用：传统函数参数

指针和引用的差别
	指针是个变量，可以把它再赋值成指向别处的地址
	建立引用时必须进行初始化并且决不会再关联其他不同的变量
由于指针也是变量所以可以有指针变量的引用
	int * a = NULL;
	int* &p = a;
*/