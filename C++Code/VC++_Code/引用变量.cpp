//���ñ���  2016/7/9 0:09
# include <iostream>

using namespace::std;

int main()
{
	int intOne = 0;
	int& r_int_one = intOne;

	intOne = 5;

	cout << intOne << endl;
	cout << r_int_one << endl; 

	r_int_one = 7;

	cout << intOne << endl;
	cout << r_int_one << endl; 

	cout << &(intOne) << endl;
	cout << &(r_int_one) << endl; 

	return 0;
}

/*
--------
5
5
7
7
0018FF44
0018FF44
--------
���ò���
	& ֻ������������ʱ�����ò�����������ʱ���ǵ�ַ������

���úͱ���ָ��ͬһ�����浥Ԫ
	����һ����ʼ��������άϵ��һ����Ŀ���ϣ���Ҳ���ֿ�
���ã���ͳ��������

ָ������õĲ��
	ָ���Ǹ����������԰����ٸ�ֵ��ָ��𴦵ĵ�ַ
	��������ʱ������г�ʼ�����Ҿ������ٹ���������ͬ�ı���
����ָ��Ҳ�Ǳ������Կ�����ָ�����������
	int * a = NULL;
	int* &p = a;
*/