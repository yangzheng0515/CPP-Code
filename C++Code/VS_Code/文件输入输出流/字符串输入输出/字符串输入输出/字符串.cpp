#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct MyStruct
{
	string str1;
	string str2;
	string str3;
	int num;
	char ch;
	double db;
};

int main()
{
	string mystring("china google baidu 123 A 1.11");
	MyStruct struct1;

	istringstream input(mystring);	//创建一个字符串扫描流
	input >> struct1.str1 >> struct1.str2 >> struct1.str3 >> struct1.num >> struct1.ch >> struct1.db;

	cout << struct1.str1 << endl;
	cout << struct1.str2 << endl;
	cout << struct1.str3 << endl;
	cout << struct1.num << endl;
	cout << struct1.ch << endl;
	cout << struct1.db << endl;

	cin.get();
	return 0;
}