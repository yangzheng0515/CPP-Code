//使用new来分配内存		2016/7/13 16:05
//使用new来创建动态数组
//使用delete来释放内存
#include <iostream>

using namespace std;

int main()
{
	int * pn = new int;
	*pn = 1001;

	cout << "*pn = " << *pn << endl;

	double * pd = new double [3];	//new运算符返回第一个元素的地址
	pd[0] = 1.0;
	pd[1] = 2.0;
	pd[2] = 3.0;
	cout << "pd[1] = " << pd[1] << endl;
	pd++;
	cout << "pd[1] = " << pd[1] << endl;
	pd--;

	delete pn;
	delete [] pd;
}
/*
-----------
*pn = 1001
pd[1] = 2
-----------
在C语言中，可以使用库函数malloc()来分配内存，
在C++中仍然可以这么做，但C++还有更好的方法--new运算符

int * pn = new int;
new运算符根据类型来确定需要多少字节的内存，然后它找到这样的内存，并返回其地址

使用new和delete时，应遵守以下规则：
1、不要使用delete来释放不是new分配的内存
2、不要使用delete释放同一个内存块两次
3、如果使用new[]为数组分配内存，则应使用delete[]来释放
4、如果使用new为一个实体分配内存，则应使用delete（没用方括号）来释放
5、对空指针应用delete还安全的
*/