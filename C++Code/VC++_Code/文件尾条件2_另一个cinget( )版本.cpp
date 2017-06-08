//cin.get(ch)与ch=cin.get()		2016/7/14 15:11
#include <iostream>

using namespace std;

int main(void)
{
	int count = 0; 
	int ch;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));		//cout << ch;
		count++;
	}
   
    cout << count << " characters read\n";
	return 0; 
}
/*
-------------------
yang zheng
yang zheng
haha
haha
^Z
16 characters read
-------------------
属性							cin.get(ch)								ch = cin.get()
传递输入字符的方式				赋给参数ch								将函数返回值赋给ch
用于字符输入时函数的返回值		istream对象（执行bool转换后为true）		int类型的字符编码
到达EOF时函数的返回值			istream对象（执行bool转换后为false）	EOF
*/