//函数包装器 2016/8/17  9：26
#include <iostream>
#include <stdlib.h>
#include <functional>

//函数包装器， T数据类型， F是函数
template<typename T, typename F>
T run(T t, F f)
{
	return f(t);
}

template<typename T,typename F>
T run(T a, T b, F f)
{
	return f(a, b);
}

int yangzheng(int a, int b)
{
	return a * b;
}

int main()
{
	using std::cout;
	using std::endl;
	using std::function;

	function<double(double)> fun1 = [](double d)	//第一个double是函数返回值类型，第二个是函数参数类型
	{
		return d * 2;
	};	//分号不能少

	function<int(int, int)> fun2 = [](int a, int b)
	{
		return a + b;
	};

	function<int(int, int)> fun3 = yangzheng;	//函数包装器管理外部函数
	
	cout << run(12.9, fun1) << endl;
	cout << run(5, 6, fun2) << endl;
	cout << run(7, 8, fun3) << endl;
	
	system("pause");
	return 0;
}
/*
-----
25.8
11
-----
*/

//函数包装器
//第一，设计执行接口,接口设计关卡（），计数
//第二，函数包装器依赖于函数模板，实现通用泛型
//第三，函数代码可以内嵌在另外一个函数，实现函数怀孕
//函数包装器，用于管理内嵌函数，外部函数调用