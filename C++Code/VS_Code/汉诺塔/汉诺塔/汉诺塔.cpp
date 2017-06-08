//µİ¹éººÅµËş	2016/8/19	10£º40
#include <iostream>

void han(int n, char A, char B, char C)
{
	if (n >= 1)
	{
		han(n - 1, A, C, B);
		std::cout << A << "->" << C << std::endl;
		han(n - 1, B, A, C);
	}
}

//  f(n)=2*f(n-1)+1 //f(n)=2^n-1
//2^64- 1

int main()
{
	int n;
	std::cout << "Input the number of the diskes: ";
	std::cin >> n;
	han(n, 'A', 'B', 'C');

	std::cin.get();
	std::cin.get();
}