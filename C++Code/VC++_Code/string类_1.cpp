//string����		2016/7/12 18:26
#include <iostream>
#include <string>	//��ͬ��<cstring>

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
�����ʾ����֪���ںܶ෽�棬ʹ��string����ķ�ʽ��ʹ���ַ�������ͬ��
	1.����ʹ��C-����ַ�������ʼ��string����
	2.����ʹ��cin�����������봢�浽string������
	3.����ʹ��cout����ʾstring����
   *4.����ʹ�������ʾ�������ʴ�����string�����е��ַ�

�����У�
	1.���Խ�string��������Ϊ�򵥱���
	2.��������ó����Զ�����string�Ĵ�С
   *3.���ܽ�һ�����鸳ֵ����һ�����飬���ǿ��Խ�һ��string����ֵ����һ��string����
   *4.string������ַ����ϲ�����������ʹ������� + ������string����ϲ�������
	  ������ʹ�� += ���ַ������ӵ�string�����ĩβ
*/