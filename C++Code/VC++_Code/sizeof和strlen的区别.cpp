//sizeof strlen的区别  2016/7/12 1:00
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int size = 15;
	char name[size];

	cout << "what your name?" <<endl;
	cin >> name;
	cout << "your name has " << sizeof(name) << " bytes";
	cout << " and has " << strlen(name) << " letters." << endl;
}

/*
-----------------------------------------
what your name?
yangzheng
your name has 15 bytes and has 9 letters.
-----------------------------------------
sizeof运算符指出整个数组的长度
strlen()函数返回的是储存在数组中的字符串的长度  个人觉得看到strlen想到字符串就行了。
*/