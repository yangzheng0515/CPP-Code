#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int num = 8888;
	cout << setw(10) << setfill('*') << setiosflags(ios::right) << num ;
	cout << setw(10) << setfill('#') << resetiosflags(ios::right) << setiosflags(ios::left) << num << endl;
	cout << setbase(8) << num;

	//resetiosflags	�����ʷ�ż�
	//setw	���
	//setbase	��������������

	cin.get();
	return 0;
}