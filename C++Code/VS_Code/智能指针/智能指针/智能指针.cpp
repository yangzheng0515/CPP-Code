//����ָ��	2016/8/18	21��05
#include <iostream>
#include<memory>//�ڴ�	auto_ptr

int main()
{
	for (int i = 0; i < 10000000; i++)
	{
		double * p = new double;	//λָ������ڴ�
		//��������ָ�����ָ��pָ���ڴ�
		std::auto_ptr<double> autop(p);//���������һ��ָ��	C++98
	}

	for (int i = 0; i < 10000000; i++)
	{
		std::unique_ptr<double> pdb(new double);	//C++11����ָ�� 
	}

	std::cin.get();
	return 0;
}