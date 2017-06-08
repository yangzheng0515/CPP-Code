//����ָ��	2016/7/15	17:54
#include <iostream>

using namespace std;

double betsy(int);
void estimate(int lines, double (*pf)(int));

int main()
{
	int code;

	cout << "How many lines of code do you need? ";
    cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code, betsy);

	return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}
/*
---------------------------------------
How many lines of code do you need? 30
Here's Betsy's estimate:
30 lines will take 1.5 hour(s)
---------------------------------------
1.��ȡ�����ĵ�ַ
���������Ǻ����ĵ�ַ�����think()��һ����������think()���Ǹú����ĵ�ַ
2.��������ָ��
double (*pf)(int);
(*pf)�൱�ں�������pf���Ǻ���ָ��
Ϊ�ṩ��ȷ����������ȼ���������������ʹ�����Ž�*fp��������
���д��double *pf(int)������һ������ָ��ĺ���
3.ʹ��ָ���������ú���
double (*pf)(5);
double pf(5);	�����ֵ��÷�ʽ������
*/