//��Ԫ����	2016/8/18	8��23
#include<iostream>
#include<map>

void main(void)//void�ڲ����ڲ���ζ�Ų���Ϊ�գ���дҲ��ζ��Ϊ��
{
	int int1 = 10;
	double double1 = 99.8;
	char ch = 'A';
	char *str = "hellochina";
	std::tuple<int, double, char, const char *> mytuple(int1, double1, ch, str);
	const int num = 3;
	auto data0 = std::get<0>(mytuple);//�±�ֻ���ǳ���
	auto data1 = std::get<1>(mytuple);
	auto data2 = std::get<2>(mytuple);
	auto data3 = std::get<num>(mytuple);
	std::cout << typeid(data3).name() << std::endl;
	decltype(data0) dataA;//��ȡ���������ٴδ���
	//mytuple.swap(mytuple);array.vetor���н����Ĺ���
	std::cout << data0 << "  " << data1 << "  " << data2 << "   " << data3 << std::endl;
	std::cin.get();

}
//tuple������һ����̬���飬
//���vector, array