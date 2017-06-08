//文件尾条件 cin.get(ch)	//2016/7/14 12:19
//通过键盘来模拟文件尾条件，按Ctrl+Z和Enter
#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	char ch;

	cin.get(ch);
	while (cin.fail() == false)	//应将cin.eof()或cin.fail()测试放在读取后
	//while (!cin.fail())
	//while (cin)
	{
		cout << ch;
		count++;
		cin.get(ch);
	}
	/*
	while (cin.get(ch))		//因为cin.get(char)的返回值是cin因此循环可以精简成这种格式：
	{
		cout << ch;
		count++;
	}
	*/
	cout << count << " characters read\n";
	return 0;
}
/*
-------------------
yang zheng
yang zheng
ha ha
ha ha
^Z
17 characters read
-------------------	
cin将两位（eofbit和failbit）都设置为1。可以通过成员函数eof()来查看
eofbit是否被设置；如果检测到EOF，则cin.eof()将返回bool值true，否则返回false
*/