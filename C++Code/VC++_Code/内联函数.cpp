//��������  2016/7/17 19:12
#include <iostream>

using namespace std;

inline double square(double x) { return x * x; }

int main()
{
	double a, b; 
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "square(c++) = " << square(c++) << endl;
	cout << "now c = " << c << endl;
	
	return 0;
}
/*
------------------
a = 25
b = 144
c = 13
square(c++) = 169
now c = 14
------------------
���������ı������������������롰�����������ˡ�
Ҳ����˵����������ʹ����Ӧ�ĺ��������滻�������ã�
�����������ٶȱȳ��溯���Կ죬����������Ҫռ�ø�����ڴ�
ʹ�÷�����
�ں�������ǰ���Ϲؼ���inline
�ں�������ǰ���Ϲؼ���inline
*/