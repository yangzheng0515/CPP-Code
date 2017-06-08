//指针与const	2016/7/15	10:52
#include <iostream>

using namespace std;

int main()
{
	int age = 22; 
	const int * pt = &age;	//pt指向一个const int，即*pt的值是const，不能被修改

	//cin >> *pt;	//error
	//*pt += 1;	//error
	age -= 1;	//对pt而言，这个值是个常量，而age不是常量，可以直接通过age来修改age的值
	cout << age << endl;

	return 0;
}
/*
两种不同的方式将const关键字用于指针：
1.让指针指向一个常量对象，这样可以防止使用指针来修改所指向的值
2.将指针本身声明为常量，这样可以防止改变指针指向的位置

int sloth = 3;
const int * ps = &sloth;	这种声明不允许ps修改sloth的值，但允许ps指向另一个位置
int * const finger = &sloth		这种声明格式使得finger只能指向sloth，但允许使用finger来修改sloth的值
简而言之，finger和*ps都是const，而*finger和ps不是。
*/