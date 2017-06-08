#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)  // slick use of cin
	{
		pplace = rect_to_polar(rplace);		//调用了file2.cpp里的函数
		show_polar(pplace);		//调用了file2.cpp里的函数
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!\n";
	return 0;
}