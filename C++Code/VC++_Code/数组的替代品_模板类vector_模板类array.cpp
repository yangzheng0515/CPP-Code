//��������Ʒ ģ����vector��ģ����array	2016/7/14 9:26
#include <iostream>
#include <vector>	//STL C++98
#include <array>	//C++ 11

using namespace std;

int main()
{
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };

	vector<double> a2(4);	//vector<typeName> vt(n_elem); n_elem���������γ�����Ҳ���������α���
	a2[0] = 1.0;
	a2[1] = 2.0;
	a2[2] = 3.0;
	a2[3] = 4.0;

	array<double, 4> a3 = { 1.1, 2.2, 3.3, 4.4 };		//array<typeName, n_elem> arr; n_elem�����Ǳ���
	array<double, 4> a4;
	a4 = a3;	//���Խ�һ��array���󸳸���һ��array����

	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	system("pause");
}
/*
-----------------------
a1[2]: 3.6 at 0037FD0C
a2[2]: 3 at 007E93A0
a3[2]: 3.3 at 0037FCCC
a4[2]: 3.3 at 0037FCA4
-----------------------
1.���������顢vector������array���󣬶�����ʹ�ñ�׼�����ʾ�������ʸ���Ԫ��
2.�ɵ�ַ��֪��array���������洢����ͬ���ڴ����򣨼�ջ���У���vector����洢����һ���������ɴ�������ѣ�
3.���Խ�һ��array���󸳸���һ��array���󣬶��������飬�������Ԫ�ظ�������
*/