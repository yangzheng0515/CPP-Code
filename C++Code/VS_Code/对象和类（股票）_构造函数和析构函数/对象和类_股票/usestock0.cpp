//��Ͷ��� ���캯������������ thisָ��	2016/7/22	18��32
#include <iostream>
#include "stock20.h"

int main()
{
	//����ʹ�ô���飬ʹ���ȵ��������������ٹرճ��򣬴Ӷ���ʾ��Ӧ����Ϣ
	{
		using std::cout;
		cout << "Using constructors to creat new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);	//��ʽ�����������������������ʱ��ͬʱ��ֵ����������˹��캯���������Զ����ʼ�������û�д�����ϵͳ�Զ�����Ĭ�Ϲ��캯��
		stock1.show();
		Stock stock2 = Stock("Boffo Object", 2, 2.0);	//��ʾ������������
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;	//����ֵ
		stock1.show();
		stock2.show();

		cout << "Using a constructors to reset an object\n";
		stock1 = Stock("Niffy Foods", 10, 50.0);	//�ù��캯���Զ���ֵ
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done!\n";
	}
	//���������Զ�����
	getchar();
	return 0;
}
/*
���н���������������C++ Primer Plus��360ҳ
*/


