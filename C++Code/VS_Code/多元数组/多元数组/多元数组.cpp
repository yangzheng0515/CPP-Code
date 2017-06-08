//多元数组	2016/8/18	8：23
#include<iostream>
#include<map>

void main(void)//void在参数内部意味着参数为空，不写也意味着为空
{
	int int1 = 10;
	double double1 = 99.8;
	char ch = 'A';
	char *str = "hellochina";
	std::tuple<int, double, char, const char *> mytuple(int1, double1, ch, str);
	const int num = 3;
	auto data0 = std::get<0>(mytuple);//下标只能是常量
	auto data1 = std::get<1>(mytuple);
	auto data2 = std::get<2>(mytuple);
	auto data3 = std::get<num>(mytuple);
	std::cout << typeid(data3).name() << std::endl;
	decltype(data0) dataA;//获取数据类型再次创建
	//mytuple.swap(mytuple);array.vetor都有交换的公能
	std::cout << data0 << "  " << data1 << "  " << data2 << "   " << data3 << std::endl;
	std::cin.get();

}
//tuple必须是一个静态数组，
//配合vector, array