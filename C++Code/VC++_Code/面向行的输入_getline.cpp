//面向行的输入：getline()  2016/7/12 15:40
#include <iostream>

using namespace std;

int main()
{
	char name[20];
	char book[20];

	cout << "what your name? " << endl;
	cin >> name;
	cout << "what your favorite book? " << endl;
	cin >> book;
	cout << "name: " << name << endl;
	cout << "book: " << book << endl;

	fflush(stdin);	 //清空输入缓冲区
	cout <<endl << "what your name? " << endl;
	cin.getline(name, 20);		//第一个参数是数组名，第二个参数是数组长度
	cout << "name: " << name << endl;
} 

/*
-------------------------
what your name?
yang zheng
what your favorite book?
name: yang
book: zheng

what your name?
yang zheng
name: yang zheng
-------------------------
总结：
cin使用空白（空格、制表符和换行符）来确定字符串的结束位置
getline()函数读取整行，它使用回车键输入的换行符来确定输入结尾

下面将一行输入到string对象中的代码：
getline(cin, str);	
注意：这里的getline()前不需要加cin.  getline是istream类的方法
*/

