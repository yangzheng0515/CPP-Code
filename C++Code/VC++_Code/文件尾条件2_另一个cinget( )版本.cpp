//cin.get(ch)��ch=cin.get()		2016/7/14 15:11
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
����							cin.get(ch)								ch = cin.get()
���������ַ��ķ�ʽ				��������ch								����������ֵ����ch
�����ַ�����ʱ�����ķ���ֵ		istream����ִ��boolת����Ϊtrue��		int���͵��ַ�����
����EOFʱ�����ķ���ֵ			istream����ִ��boolת����Ϊfalse��	EOF
*/