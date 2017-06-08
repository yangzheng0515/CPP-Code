//引用包装器	2016/8/18	9：46
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
	com(rcount);	//上传引用无效
	cout << count << endl;

	com(std::ref(count));	//std::ref(变量)， 函数模板，引用包装器
	cout << count << endl;

	std::cin.get();
	return 0;
}