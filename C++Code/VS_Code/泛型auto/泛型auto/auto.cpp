//����auto  2016/8/15 16��51
#include <iostream>
#include <stdlib.h>

void main()
{
	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto data : num)//����C++�﷨��ѭ��һά����
	{
		std::cout << data << std::endl;
	}

	double num1[2][5] = { 1.0, 2.0, 3.0, 4.5, 5, 6, 7, 8, 9, 10 };
	for (auto data : num1)
	{
		std::cout << data << std::endl;
		for (int i = 0; i < 5; ++i)
		{
			std::cout << *(data + i) << std::endl;
		}
	}

	system("pause");
}

//�Զ��������Զ���ȡ���ͣ����������
//�Զ�����������ʵ���Զ�ѭ��һά����
//�Զ�ѭ����ʱ�򣬶�Ӧ�ı����ǳ���