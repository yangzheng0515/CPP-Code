#include <iostream>
#include <stdlib.h>
using namespace std;

int main5()
{
	int num1;
	cin.setf(ios::hex, ios::basefield);		//��������Ϊʮ������
	cin >> num1;
	cout.setf(ios::hex, ios::basefield);	//�������Ϊʮ������
	cout << num1 << endl;

	int num2;
	cin.setf(ios::dec, ios::basefield);		//��������Ϊʮ����
	cin >> num2;
	cout.setf(ios::dec, ios::basefield);	//�������Ϊʮ����
	cout << num2 << endl;

	int num3;
	cin.setf(ios::oct, ios::basefield);		//��������Ϊ�˽���
	cin >> num3;
	cout.setf(ios::oct, ios::basefield);	//�������Ϊ�˽���
	cout << num3 << endl;

	system("pause");
	return 0;
}