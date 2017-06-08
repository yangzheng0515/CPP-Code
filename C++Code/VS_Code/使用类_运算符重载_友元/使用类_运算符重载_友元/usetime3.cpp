//使用类 运算符重载 友元	2016/7/25	17:43
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
	cout << "10.0 * Tosca : " << 10.0 * tosca << endl;	//友元operator*  operator<<

	getchar();
	return 0;
}
//运行结果见《C++ Primer Plus》397页