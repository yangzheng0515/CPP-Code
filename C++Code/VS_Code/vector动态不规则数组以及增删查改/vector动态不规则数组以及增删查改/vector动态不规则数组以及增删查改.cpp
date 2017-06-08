//vector动态不规则数组以及增删查改	2016/8/17	23:16
#include <iostream>
#include <vector>
#include <stdlib.h>
using std::cout;
using std::endl;

int main()
{
	std::vector<int> myvector(5);	//分配5个空间，默认为0
	myvector.push_back(1);	//增
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	myvector.erase(myvector.begin() + 5);	//erase橡皮  根据迭代器的位置删除元素
	myvector.pop_back();	//弹出第一个元素，即删除最后一个
	myvector.insert(myvector.begin() + 1, 999);		//在第2个位置插入999
	//myvector.clear();	//删除所有元素
	for (int i = 0; i < myvector.size(); ++i)
	{
		cout << myvector.at(i) << endl;		//myvector.at(i)相当于myvector[i]
	}
	cout << endl;

	std::vector<int> myvector1;
	myvector1.push_back(11);
	myvector1.push_back(12);
	myvector1.push_back(13);
	std::vector<int> myvector2;
	myvector2.push_back(21);
	std::vector<int> myvector3;
	myvector3.push_back(31);
	myvector3.push_back(32);
	std::vector<std::vector<int>> allvector;
	allvector.push_back(myvector1);
	allvector.push_back(myvector2);
	allvector.push_back(myvector3);

	for (int i = 0; i < allvector.size(); ++i)
	{
		for (int j = 0; j < allvector.at(i).size(); ++j)
		{
			cout << allvector.at(i).at(j) << "	";	//allvector.at(i).at(j)即allvector[i][j]
		}
		cout << endl;
	}

	system("pause");
	return 0;
}