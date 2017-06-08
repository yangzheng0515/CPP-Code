//数组的替代品 模板类vector、模板类array	2016/7/14 9:26
#include <iostream>
#include <vector>	//STL C++98
#include <array>	//C++ 11

using namespace std;

int main()
{
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };

	vector<double> a2(4);	//vector<typeName> vt(n_elem); n_elem可以是整形常量，也可以是整形变量
	a2[0] = 1.0;
	a2[1] = 2.0;
	a2[2] = 3.0;
	a2[3] = 4.0;

	array<double, 4> a3 = { 1.1, 2.2, 3.3, 4.4 };		//array<typeName, n_elem> arr; n_elem不能是变量
	array<double, 4> a4;
	a4 = a3;	//可以将一个array对象赋给另一个array对象

	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	system("pause");
}
/*
-----------------------
a1[2]: 3.6 at 0037FD0C
a2[2]: 3 at 007E93A0
a3[2]: 3.3 at 0037FCCC
a4[2]: 3.3 at 0037FCA4
-----------------------
1.无论是数组、vector对象还是array对象，都可以使用标准数组表示法来访问各个元素
2.由地址可知，array对象和数组存储在相同的内存区域（即栈）中，而vector对象存储在另一个区域（自由储存区或堆）
3.可以将一个array对象赋给另一个array对象，而对于数组，必须逐个元素复制数据
*/