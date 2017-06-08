#include <iostream>
#include <stdlib.h>
using namespace std;

int main5()
{
	int num1;
	cin.setf(ios::hex, ios::basefield);		//设置输入为十六进制
	cin >> num1;
	cout.setf(ios::hex, ios::basefield);	//设置输出为十六进制
	cout << num1 << endl;

	int num2;
	cin.setf(ios::dec, ios::basefield);		//设置输入为十进制
	cin >> num2;
	cout.setf(ios::dec, ios::basefield);	//设置输出为十进制
	cout << num2 << endl;

	int num3;
	cin.setf(ios::oct, ios::basefield);		//设置输入为八进制
	cin >> num3;
	cout.setf(ios::oct, ios::basefield);	//设置输出为八进制
	cout << num3 << endl;

	system("pause");
	return 0;
}