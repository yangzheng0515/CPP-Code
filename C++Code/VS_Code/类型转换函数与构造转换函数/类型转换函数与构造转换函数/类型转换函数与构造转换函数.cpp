//����ת�������빹��ת������	2016/8/22	10:40
#include <iostream>
#include "fushu.h"
#include "mianji.h"


int main()
{
	fushu fushu1 = 5;	//����ת������
	fushu1.show();

	mianji mianji1(10, 10);
	fushu fushu2 = mianji1;		//����ת������
	fushu2.show();	

	int num = fushu1;		//����ת������
	std::cout << num << std::endl;		

	mianji mianji2 = fushu2;	//����ת������
	mianji2.show();

	std::cin.get();
	return 0;
}