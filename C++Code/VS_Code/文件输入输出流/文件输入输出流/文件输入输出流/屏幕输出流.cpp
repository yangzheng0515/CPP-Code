#include <iostream>
#include <iomanip>	//���������

using namespace std;

int main1()
{
	char str[30] = "123456789abcdef";
	cout.write(str, 10);	//�������10���ַ���������0

	cin.get();
	return 0;
}

int main2()
{
	//hex, oct, dec	��ʽ���Ʒ�
	int num = 01070;	//�˽�����
	cout << num << endl;	//Ĭ�����ʮ������

	cout << hex;	//ʮ������ǿ�Ʊ�ʶ��endl��������
	cout << num << endl;	

	cout << num << endl;	//�������ʮ��������

	cout << oct;	//�˽���
	cout << num << endl;

	cin.get();
	return 0;
}

int main3()
{
	double db = 7.585454131154469845;
	cout << db << endl;	//Ĭ��6λ��Ч����

	cout << setprecision(15) << db << endl;	//15λ��Ч���֣�����С���㾫ȷ��

	cin.get();
	return 0;
}

int main4()
{
	cout.width(40);	//�趨��ʾ���	
	cout.fill('*');	//����ַ�
	cout.setf(ios::left);	//������������
	cout << "hello world" << endl;

	cout.width(40);	//�趨��ʾ���	
	cout.fill('*');	//����ַ�
	cout.setf(ios::right);	//��������Ҷ��룬Ĭ�����Ҷ���
	cout << "hello world" << endl;

	cin.get();
	return 0;
}

int main6()
{
	double db = 100 / 7.0;
	cout.setf(ios::fixed, ios::showpoint);	//����
	cout << db << endl << endl;;

	for (int i = 1; i < 10; ++i)
	{
		cout.precision(i);	//������Ч����
		cout << db << endl;
	}

	db = 10000000000000000.0;
	cout.setf(ios::scientific, ios::fixed);		//��ѧ������
	cout << endl << db << endl;

	cin.get();
	return 0;
}