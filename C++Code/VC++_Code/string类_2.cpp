//string�� �� ����ıȽ�  2016/7/12 18:40
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

	int len1 = str1.size();	//str1��һ��string���󣬶�size()��string���һ������
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
����string������﷨ͨ����ʹ��C�ַ��������򵥣�������ִ�н�Ϊ���ӵĲ���ʱ��
���磬�������²�����
str3 = str1 + str2;
��ʹ��C-����ַ���ʱ����Ҫ�ĺ������£�
strcpy(str3, str1);
strcat(str3, str2);
���⣬ʹ���ַ�����ʱ�����Ǵ���Ŀ�������С���޷��洢ָ����Ϣ��Σ�ա�

����������ȷ���ַ������ַ����ķ�����
	int len1 = str1.size();
	int len2 = strlen(charr1);
	str1��һ��string���󣬶�size()��string���һ������
*/