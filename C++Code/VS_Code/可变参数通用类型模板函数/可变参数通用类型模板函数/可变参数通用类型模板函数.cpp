//可变参数通用类型模板函数	2016/8/17	13：26
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

//可变参数通用类型模板函数  处理不限定个数的参数， 处理不同类型

//设计可以修改原来参数的	T & value, Args &...args
//设计可以修改副本	T value, Arge...args
//设计不可以该原来的数据不可以修改副本  const T value, const Args ...args
//设计引用原来的数据不可以修改	const T & value, const Args &...args

void showall() {} //预留一个递归出口  空函数 接口 最好结束递归

template<typename T, typename...Args>
void showall(T value, Args...args)
{
	cout << value << endl;
	showall(args...);	//继续传递
}

int main()
{
	int n1 = 1, n2 = 2;
	double db = 1.5;
	char ch = 'A';
	char * str = "yangzheng";

	showall(n1, n2);
	cout << endl;
	showall(n1, db, ch);
	cout << endl;
	showall(n1, n2, db, ch, str);

	system("pause");
	return 0;
}
/*
----------
1
2

1
1.5
A

1
2
1.5
A
yangzheng
----------
*/