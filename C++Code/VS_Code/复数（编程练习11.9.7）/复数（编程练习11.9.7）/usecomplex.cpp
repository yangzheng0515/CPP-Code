//���� ��C++ Primer Plus��423ҳ 11.9�����ϰ7  2016/7/27	21��07
#include "complex0.h"
using namespace std;

int main()
{
	Complex a(3.0, 4.0);
	Complex c;

	cout << "Enter a complex number (q to quit):\n";
	while (cin >> c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Done!\n";
	return 0;
}
//���н������C++ Primer Plus��424ҳ