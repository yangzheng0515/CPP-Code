//�����ñ�����Ϊ�������� ����ͨ������ָ�������Ϊ��Ϊ�����Ƚ�  2016/7/17  19:29
#include <iostream>

using namespace std;

void swapr(int & a, int & b);   // a, b are aliases for ints
void swapp(int * p, int * q);   // p, q are addresses of ints
void swapv(int a, int b);	//a, b are new variables

int main()
{
	int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);   // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << endl << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);   // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swapp(int * p, int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

void swapv(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
/*
---------------------------------------
wallet1 = $300 wallet2 = $350

Using references to swap contents:
wallet1 = $350 wallet2 = $300

Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350

Trying to use passing by value:
wallet1 = $300 wallet2 = $350
---------------------------------------
��Ȼ��ֻ�д�����ͨ�����ǲ�������������ֵĽ���
���ǣ�ʹ�����ú�ָ�����������
void swapr(int & a, int & b)	//ʹ��a��b�ֱ�Ϊwallet1��wallet2�ı���
{
	...
}
*/