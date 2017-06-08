//内联函数  2016/7/17 19:12
#include <iostream>

using namespace std;

inline double square(double x) { return x * x; }

int main()
{
	double a, b; 
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "square(c++) = " << square(c++) << endl;
	cout << "now c = " << c << endl;
	
	return 0;
}
/*
------------------
a = 25
b = 144
c = 13
square(c++) = 169
now c = 14
------------------
内联函数的编译代码与其他程序代码“内联”起来了。
也就是说，编译器将使用相应的函数代码替换函数调用，
这样，运行速度比常规函数稍快，但代价是需要占用更多的内存
使用方法：
在函数声明前加上关键字inline
在函数定义前加上关键字inline
*/