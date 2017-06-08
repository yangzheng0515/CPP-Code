//函数模板  可变参数	2016/8/16	20:25
#include <iostream>
#include <cstdarg>

template<typename T>
T get_max(T * p, const int n)
{
	T max(p[0]);
	for (int i = 0; i < n; ++i)
	{
		if (max < p[i])
			max = p[i];
	}
	return max;
}

//函数模板  可变参数
//参数至少要有一个是模板类型
template<class NT>
NT sum(int count, NT data ...)//累加
{
	va_list arg_ptr;//参数列表的指针
	va_start(arg_ptr, count);//限定从count开始,限定多少个参数
	NT sumres(0);
	for (int i = 0; i < count; ++i)
	{
		sumres += va_arg(arg_ptr, NT);
	}
	va_end(arg_ptr);//结束
	return sumres;
}

int main()
{
	int num1[5] = {1, 2, 13, 4, 5};
	std::cout << get_max(num1, 5) << std::endl;

	double num2[6] = {1.0, 2.0, 34.0, 5.0, 6.0, 7.0};
	std::cout << get_max(num2, 6) << std::endl;

	std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl;
	std::cout << sum(6, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0) << std::endl;

	return 0;
}