#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using std::cout;
using std::endl;

int main()
{
	double db = 10.9;
	float fl = db;//默认数据类型转换

	void *p = new int[10];
	int *pint = (int*)p;//C语言风格

	//static_cast<需要转换的数据类型>(要转换的数据)   80% static_cast
	printf("\n%d", 98.87);
	printf("\n%d", static_cast<int>(98.87));
	printf("\n%f", 98);
	printf("\n%f", static_cast<float>(98));

	int *p3 = static_cast<int*> (malloc(100));

	//const int num = 10,可以修改无法生效，编译的时候不读内存
	//const int *p指向变量限定权限，只读不可写，
	//const_cast去掉常量指针属性 %5
	int num[3] = { 1, 2, 3 };
	const int *p1 = num;
	std::cout << *p1 << *(p1 + 1) << *(p1 + 2) << std::endl;
	//*p = 10;
	//*(p + 1) = 20;
	int *pnew = const_cast<int *>(p1);
	*pnew = 10;

	//reinterpret_cast %1  专业转换指针，最安全
	//指针。强类型，类型决定了数据的解析方式，内存占多大
	int num1 = 3;
	char *p2 = reinterpret_cast<char *>(&num1);
	for (int i = 0; i < 4; i++)
	{
		printf("%c,%d,%p\n", *(p2 + i), *(p2 + i), p2 + i);
	}

	system("pause");
	return 0;
}