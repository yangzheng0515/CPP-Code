//���ð�װ��	2016/8/18	9��46
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
void com(T arg)
{
	arg++;
}

int main()
{
	int count = 10;
	int & rcount = count;
	com(count);
	cout << count << endl;
	com(rcount);	//�ϴ�������Ч
	cout << count << endl;

	com(std::ref(count));	//std::ref(����)�� ����ģ�壬���ð�װ��
	cout << count << endl;

	std::cin.get();
	return 0;
}