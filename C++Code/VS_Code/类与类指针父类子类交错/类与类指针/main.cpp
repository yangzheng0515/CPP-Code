//������ָ��_�������ཻ��	2016/8/23	21��17
#include <iostream>

#include"fu.h"
#include "zi.h"

//dynamic�������麯��

//����ԣ�������˽�У������ǹ��е�
//ָ��Ϊ�գ�ָ��һ���࣬����ֱ�ӵ��÷���
//�漰�ڲ���Ա����������漰����ִ��

//����ָ�����ø��������ȫ��������
//����ָ������������󣬸��Ǹ����ͬ������
//����ָ�������������ֻ�����ø����еĺ���
//����ָ�룬���ø���������಻�漰�ڲ����ݵĺ�������óɹ�
//�漰���ڲ����ݵĻ���óɹ���ִ��ʧ��
//����ָ��������ø���Ĳ������ĺ���
//����ָ�루����pzi->fu::print();�������޷����ø����ͬ������

void main()
{
	{
		//fu *pfu = new fu;
		//delete pfu;
	}
	{
	   ///  zi  *pzi = new zi;
		// delete pzi;
	}
	{
		//fu *pfu = new zi;
		//delete pfu;//�ڴ�й©
	}
	{
		//fu *pfu = new fu;
	    zi *pzi = static_cast<zi *>(new fu);
		delete pzi;//�ڴ�Խ��,���������ͷ��ڴ棬��ʱ������ʱ�޴�    
	}

	std::cin.get();
}

void main3()
{
	zi *pzi(nullptr);
	pzi->zizi();

	std::cin.get();
}

void main4()
{
	fu *pfu = new fu;
	zi *pzi = static_cast<zi *>(pfu);	//������ָ��ֻ�о���ǿ������ת���󣬲������û������
	pzi->fufu();
	
	pzi->zizi();
	pzi->fu::print();

	//pzi->print();		//������ͻ

	//std::cout << pzi->strzi << std::endl;

	//pzi->print();

	std::cin.get();
}

void main2()
{
	fu *pfu = new zi;
	pfu->print();	//����ָ�������������ֻ�����ø����еĺ���
	pfu->fufu();

	std::cin.get();
}

void main1()
{
	fu *pfu = new fu;
	pfu->print();
	pfu->fufu();

	zi *pzi = new zi;
	pzi->print();//���า�Ǹ���
	pzi->zizi();
	pzi->fufu();

	/*
	fu fu1;
	fu1.print();
	fu1.fufu();
	*/
	std::cin.get();
}