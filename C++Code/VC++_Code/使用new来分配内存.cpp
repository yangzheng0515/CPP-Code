//ʹ��new�������ڴ�		2016/7/13 16:05
//ʹ��new��������̬����
//ʹ��delete���ͷ��ڴ�
#include <iostream>

using namespace std;

int main()
{
	int * pn = new int;
	*pn = 1001;

	cout << "*pn = " << *pn << endl;

	double * pd = new double [3];	//new��������ص�һ��Ԫ�صĵ�ַ
	pd[0] = 1.0;
	pd[1] = 2.0;
	pd[2] = 3.0;
	cout << "pd[1] = " << pd[1] << endl;
	pd++;
	cout << "pd[1] = " << pd[1] << endl;
	pd--;

	delete pn;
	delete [] pd;
}
/*
-----------
*pn = 1001
pd[1] = 2
-----------
��C�����У�����ʹ�ÿ⺯��malloc()�������ڴ棬
��C++����Ȼ������ô������C++���и��õķ���--new�����

int * pn = new int;
new���������������ȷ����Ҫ�����ֽڵ��ڴ棬Ȼ�����ҵ��������ڴ棬���������ַ

ʹ��new��deleteʱ��Ӧ�������¹���
1����Ҫʹ��delete���ͷŲ���new������ڴ�
2����Ҫʹ��delete�ͷ�ͬһ���ڴ������
3�����ʹ��new[]Ϊ��������ڴ棬��Ӧʹ��delete[]���ͷ�
4�����ʹ��newΪһ��ʵ������ڴ棬��Ӧʹ��delete��û�÷����ţ����ͷ�
5���Կ�ָ��Ӧ��delete����ȫ��
*/