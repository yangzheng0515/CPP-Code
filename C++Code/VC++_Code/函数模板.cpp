//函数模板	2016/7/18	16:34
#include <iostream>
using namespace std;

template <typename T>	//函数声明、函数定义前都要写这句template <typename T>
void Swap(T &a, T &b);	//也可以写成template <class T>

int main()
{
	int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j);  // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated double swapper:\n";
    Swap(x,y);  // generates void Swap(double &, double &)
    cout << "Now x, y = " << x << ", " << y << ".\n";

	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

/*
-----------------------------------------
i, j = 10, 20.
Using compiler-generated int swapper:
Now i, j = 20, 10.
x, y = 24.5, 81.7.
Using compiler-generated double swapper:
Now x, y = 81.7, 24.5.
-----------------------------------------
如果需要多个将同一种算法用于不同类型的函数，请使用模板

template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
	AnyType temp;
	...
}
关键字template和typename是必需的，也可以用class代替typename
必须使用尖括号，类型名可以是任意的，这里是AnyType，一般写成T
*/