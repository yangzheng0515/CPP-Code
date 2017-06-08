//string类 与 数组的比较  2016/7/12 18:40
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, " juice");

	int len1 = str1.size();	//str1是一个string对象，而size()是string类的一个方法
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		 << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		 << len1 << " characters.\n";
}
/*
------------------------------------------------
The string panther paste contains 13 characters.
The string jaguar juice contains 13 characters.
------------------------------------------------
处理string对象的语法通常比使用C字符串函数简单，尤其是执行较为复杂的操作时。
例如，对于以下操作：
str3 = str1 + str2;
而使用C-风格字符串时，需要的函数如下：
strcpy(str3, str1);
strcat(str3, str2);
另外，使用字符数组时，总是存在目标数组过小，无法存储指定信息的危险。

下面是两种确定字符串中字符数的方法：
	int len1 = str1.size();
	int len2 = strlen(charr1);
	str1是一个string对象，而size()是string类的一个方法
*/