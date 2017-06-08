//sudo与函数模板	2016/8/16	21：10
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

//自动数据类型，根据实际推导出类型
template<class T1, class T2>		//根据类型获取类型
auto get(T1 data1, T2 data2)->decltype(data1 *data2)
{
	return  data1 * data2;
}

int main()
{
	cout << typeid(get(15, 'A')).name() << endl;
	cout << get(15, 'A') << endl;
	cout << typeid(get(15.0, 'A')).name() << endl;
	cout << get(15.0, 'A') << endl;

	system("pause");
	return 0;
}