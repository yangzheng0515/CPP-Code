#include <iostream>

using namespace std;

class A
{
public:
	A()//���캯�����������麯���������ٹ��죬û�а취���������еĸ������
	{
		std::cout << "a create" << std::endl;
	}
	virtual ~A()//�������������ø���ָ����ȷ���ͷ����������ڴ棬�����ڴ�й©
	{
		std::cout << "a delete" << std::endl;
	}
};

class B :public A
{
public:
	B()//B �����Զ�����A�Ĺ��캯��
	{
		std::cout << "b create" << std::endl;
	}
	~B()//B������ʱ����Զ�����A����������
	{
		std::cout << "b delete" << std::endl;
	}
};

int main()
{
	A * p = new B;
	delete p;

	std::cin.get();
	return 0;
}

