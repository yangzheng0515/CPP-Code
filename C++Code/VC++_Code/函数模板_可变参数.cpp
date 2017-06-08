//����ģ��  �ɱ����	2016/8/16	20:25
#include <iostream>
#include <cstdarg>

template<typename T>
T get_max(T * p, const int n)
{
	T max(p[0]);
	for (int i = 0; i < n; ++i)
	{
		if (max < p[i])
			max = p[i];
	}
	return max;
}

//����ģ��  �ɱ����
//��������Ҫ��һ����ģ������
template<class NT>
NT sum(int count, NT data ...)//�ۼ�
{
	va_list arg_ptr;//�����б��ָ��
	va_start(arg_ptr, count);//�޶���count��ʼ,�޶����ٸ�����
	NT sumres(0);
	for (int i = 0; i < count; ++i)
	{
		sumres += va_arg(arg_ptr, NT);
	}
	va_end(arg_ptr);//����
	return sumres;
}

int main()
{
	int num1[5] = {1, 2, 13, 4, 5};
	std::cout << get_max(num1, 5) << std::endl;

	double num2[6] = {1.0, 2.0, 34.0, 5.0, 6.0, 7.0};
	std::cout << get_max(num2, 6) << std::endl;

	std::cout << sum(5, 1, 2, 3, 4, 5) << std::endl;
	std::cout << sum(6, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0) << std::endl;

	return 0;
}