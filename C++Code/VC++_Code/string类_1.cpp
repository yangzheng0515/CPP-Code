//string类简介		2016/7/12 18:26
#include <iostream>
#include <string>	//不同于<cstring>

using namespace std;

int main()
{
	char charr1[20];
	char charr2[20] = "efgh";
	string str1;
	string str2 = "EFGH";

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another a kind of feline: ";
	cin >> str1;
	cout << "Here are some felines: ";
	cout << charr1 << " " << charr2 << " "
		 << str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;

	str1 += str2;
	cout << "Here is a new feline: " << str1 << endl;
}
/*
--------------------------------------------
Enter a kind of feline: abcd
Enter another a kind of feline: ABCD
Here are some felines: abcd efgh ABCD EFGH
The third letter in efgh is g
The third letter in EFGH is G
Here is a new feline: ABCDEFGH
--------------------------------------------
从这个示例可知，在很多方面，使用string对象的方式与使用字符数组相同：
	1.可以使用C-风格字符串来初始化string对象
	2.可以使用cin来将键盘输入储存到string对象中
	3.可以使用cout来显示string对象
   *4.可以使用数组表示法来访问储存在string对象中的字符

区别有：
	1.可以将string对象声明为简单变量
	2.类设计能让程序自动处理string的大小
   *3.不能将一个数组赋值给另一个数组，但是可以将一个string对象赋值给另一个string对象
   *4.string类简化了字符串合并操作，可以使用运算符 + 将两个string对象合并起来，
	  还可以使用 += 将字符串附加到string对象的末尾
*/