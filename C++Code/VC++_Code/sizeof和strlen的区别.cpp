//sizeof strlen������  2016/7/12 1:00
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
sizeof�����ָ����������ĳ���
strlen()�������ص��Ǵ����������е��ַ����ĳ���  ���˾��ÿ���strlen�뵽�ַ��������ˡ�
*/