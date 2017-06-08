# include <iostream>
using namespace std;

int main()
{
	int i = 100;
	char c = 'A';
	char a[100] = "hello\0world";

	cout << "i = " << i << endl;
	cout << "c = " << c << endl;
	cout << "a = " << a << endl;
}
/*
""里的是字符串，原样输出
*/