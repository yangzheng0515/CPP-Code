//������װ�� 2016/8/17  9��26
#include <iostream>
#include <stdlib.h>
#include <functional>

//������װ���� T�������ͣ� F�Ǻ���
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

	function<double(double)> fun1 = [](double d)	//��һ��double�Ǻ�������ֵ���ͣ��ڶ����Ǻ�����������
	{
		return d * 2;
	};	//�ֺŲ�����

	function<int(int, int)> fun2 = [](int a, int b)
	{
		return a + b;
	};

	function<int(int, int)> fun3 = yangzheng;	//������װ�������ⲿ����
	
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

//������װ��
//��һ�����ִ�нӿ�,�ӿ���ƹؿ�����������
//�ڶ���������װ�������ں���ģ�壬ʵ��ͨ�÷���
//�������������������Ƕ������һ��������ʵ�ֺ�������
//������װ�������ڹ�����Ƕ�������ⲿ��������