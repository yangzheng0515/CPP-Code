//�ɱ����ͨ������ģ�庯��	2016/8/17	13��26
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

//�ɱ����ͨ������ģ�庯��  �����޶������Ĳ����� ����ͬ����

//��ƿ����޸�ԭ��������	T & value, Args &...args
//��ƿ����޸ĸ���	T value, Arge...args
//��Ʋ����Ը�ԭ�������ݲ������޸ĸ���  const T value, const Args ...args
//�������ԭ�������ݲ������޸�	const T & value, const Args &...args

void showall() {} //Ԥ��һ���ݹ����  �պ��� �ӿ� ��ý����ݹ�

template<typename T, typename...Args>
void showall(T value, Args...args)
{
	cout << value << endl;
	showall(args...);	//��������
}

int main()
{
	int n1 = 1, n2 = 2;
	double db = 1.5;
	char ch = 'A';
	char * str = "yangzheng";

	showall(n1, n2);
	cout << endl;
	showall(n1, db, ch);
	cout << endl;
	showall(n1, n2, db, ch, str);

	system("pause");
	return 0;
}
/*
----------
1
2

1
1.5
A

1
2
1.5
A
yangzheng
----------
*/