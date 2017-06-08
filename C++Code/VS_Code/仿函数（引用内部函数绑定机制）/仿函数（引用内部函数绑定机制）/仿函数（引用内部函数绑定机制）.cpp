//�º����������ڲ������󶨻��ƣ�
#include <iostream>
#include <functional>//������
using namespace std::placeholders;

struct Mystruct
{
	void add1(int a)
	{
		std::cout << a << std::endl;
	}
	void add2(int a, int b)
	{
		std::cout << a + b << std::endl;
	}
	void add3(int a, int b, int c)
	{
		std::cout << a + b + c << std::endl;
	}
};

int main()
{
	Mystruct struct1;
	// auto�Զ���������ַ������ָ�룬bind��
	//��һ�����������ڲ���������һ��ʵ�����
	auto fun1 = std::bind(&Mystruct::add1, &struct1, _1);
	auto fun2 = std::bind(&Mystruct::add2, &struct1, _1, _2);
	auto fun3 = std::bind(&Mystruct::add3, &struct1, _1, _2, _3);
	fun1(100);
	fun2(10, 11);
	fun3(1, 4, 7);

	Mystruct struct2;
	//��������ָ�룬��ṹ�壬����˽�У����빲��
	//����ͨ�����ã�������Ҫ���ݶ�������������
	void(Mystruct::*p)(int a) = &Mystruct::add1;	//����Ҳ�У�����Ҫ��ȷ֪������ָ������

	std::cin.get();
	return 0;
}