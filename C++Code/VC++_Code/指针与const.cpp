//ָ����const	2016/7/15	10:52
#include <iostream>

using namespace std;

int main()
{
	int age = 22; 
	const int * pt = &age;	//ptָ��һ��const int����*pt��ֵ��const�����ܱ��޸�

	//cin >> *pt;	//error
	//*pt += 1;	//error
	age -= 1;	//��pt���ԣ����ֵ�Ǹ���������age���ǳ���������ֱ��ͨ��age���޸�age��ֵ
	cout << age << endl;

	return 0;
}
/*
���ֲ�ͬ�ķ�ʽ��const�ؼ�������ָ�룺
1.��ָ��ָ��һ�����������������Է�ֹʹ��ָ�����޸���ָ���ֵ
2.��ָ�뱾������Ϊ�������������Է�ֹ�ı�ָ��ָ���λ��

int sloth = 3;
const int * ps = &sloth;	��������������ps�޸�sloth��ֵ��������psָ����һ��λ��
int * const finger = &sloth		����������ʽʹ��fingerֻ��ָ��sloth��������ʹ��finger���޸�sloth��ֵ
�����֮��finger��*ps����const����*finger��ps���ǡ�
*/