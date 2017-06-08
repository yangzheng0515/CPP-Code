/*
C++新添的强制转换格式 
2016/7/12 0:55
*/
#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);	//fixed-point//额，暂时不知道是干嘛的
	int i = 5;

	cout << i << endl;
	cout << (float)i << endl;	//纯粹的C语言格式
	cout << float(i) << endl;	//C++新格式，看起来像是函数调用
	cout << static_cast<float>(i) << endl;	//C++新格式，static_cast<类型>（变量）
}

/*
---------
5
5.000000
5.000000
5.000000
---------
强制类型转换不会修改变量本身，而是创建
一个新的、指定类型的值，可以在表达式中使用这个值
*/