//new限定区域分配内存的语法	2016/8/18	8:48
#include<iostream>
#include<new>
const int buf(512);//限定一个常量整数512
int N(5);//数组的长度
char buffer[buf] = { 0 };//静态区

//p1,p3,p5作为指针变量在栈区，存储的地址指向堆区
//手动释放内存

//p2,p4,p6作为指针变量在栈区，存储的地址在静态区。缓冲区。
//自动释放内存，用于分配用完了就不会再用的数据
//避免内存泄漏，自动释放内存。牺牲了内存访问独立性，

using namespace std;
void main()
{
	double *p1, *p2;

	std::cout << "\n\n\n";
	p1 = new double[N];//分配内存，N个元素的大小
	p2 = new (buffer)double[N];//指定区域分配内存
	for (int i = 0; i < N; i++)
	{
		p1[i] = p2[i] = i + 10.8;//对于数组初始化
		std::cout << "p1===   " << &p1[i] << "  " << p1[i];
		std::cout << "   p2===   " << &p2[i] << "  " << p2[i] << std::endl;
	}

	double *p3, *p4;
	std::cout << "\n\n\n";
	p3 = new double[N];//分配内存，N个元素的大小
	p4 = new (buffer)double[N];//指定区域分配内存

	for (int i = 0; i < N; i++)
	{
		p3[i] = p4[i] = i + 10.8;//对于数组初始化
		std::cout << "p3===   " << &p3[i] << "  " << p3[i];
		std::cout << "   p4===   " << &p4[i] << "  " << p4[i] << std::endl;
	}

	double *p5, *p6;
	std::cout << "\n\n\n";
	p5 = new double[N];//分配内存，N个元素的大小
	p6 = new (buffer)double[N];//指定区域分配内存

	for (int i = 0; i < N; i++)
	{
		p6[i] = p5[i] = i + 10.8;//对于数组初始化
		std::cout << "p5===   " << &p5[i] << "  " << p5[i];
		std::cout << "   p6===   " << &p6[i] << "  " << p6[i] << std::endl;
	}

	std::cin.get();
}