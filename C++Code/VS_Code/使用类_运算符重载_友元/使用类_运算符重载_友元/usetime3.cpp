//ʹ���� ��������� ��Ԫ	2016/7/25	17:43
#include "mytime3.h"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << endl;	//operator<<
	temp = aida + tosca;	//operator+
	cout << "Aida + Tosca : " << temp << endl;
	temp = aida * 1.17;		//operator*
	cout << "Aida * 1.17 : " << temp << endl;
	cout << "10.0 * Tosca : " << 10.0 * tosca << endl;	//��Ԫoperator*  operator<<

	getchar();
	return 0;
}
//���н������C++ Primer Plus��397ҳ