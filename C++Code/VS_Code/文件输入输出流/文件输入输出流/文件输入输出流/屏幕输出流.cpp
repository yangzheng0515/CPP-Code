#include <iostream>
#include <iomanip>	//控制输出流

using namespace std;

int main1()
{
	char str[30] = "123456789abcdef";
	cout.write(str, 10);	//限制输出10个字符，不包括0

	cin.get();
	return 0;
}

int main2()
{
	//hex, oct, dec	格式控制符
	int num = 01070;	//八进制数
	cout << num << endl;	//默认输出十进制数

	cout << hex;	//十六进制强制标识，endl结束不了
	cout << num << endl;	

	cout << num << endl;	//还是输出十六进制数

	cout << oct;	//八进制
	cout << num << endl;

	cin.get();
	return 0;
}

int main3()
{
	double db = 7.585454131154469845;
	cout << db << endl;	//默认6位有效数字

	cout << setprecision(15) << db << endl;	//15位有效数字，设置小数点精确度

	cin.get();
	return 0;
}

int main4()
{
	cout.width(40);	//设定显示宽度	
	cout.fill('*');	//填充字符
	cout.setf(ios::left);	//输出内容左对齐
	cout << "hello world" << endl;

	cout.width(40);	//设定显示宽度	
	cout.fill('*');	//填充字符
	cout.setf(ios::right);	//输出内容右对齐，默认是右对齐
	cout << "hello world" << endl;

	cin.get();
	return 0;
}

int main6()
{
	double db = 100 / 7.0;
	cout.setf(ios::fixed, ios::showpoint);	//定点
	cout << db << endl << endl;;

	for (int i = 1; i < 10; ++i)
	{
		cout.precision(i);	//设置有效数字
		cout << db << endl;
	}

	db = 10000000000000000.0;
	cout.setf(ios::scientific, ios::fixed);		//科学计数法
	cout << endl << db << endl;

	cin.get();
	return 0;
}