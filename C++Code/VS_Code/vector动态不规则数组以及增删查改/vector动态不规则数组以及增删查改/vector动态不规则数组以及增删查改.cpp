//vector��̬�����������Լ���ɾ���	2016/8/17	23:16
#include <iostream>
#include <vector>
#include <stdlib.h>
using std::cout;
using std::endl;

int main()
{
	std::vector<int> myvector(5);	//����5���ռ䣬Ĭ��Ϊ0
	myvector.push_back(1);	//��
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	myvector.erase(myvector.begin() + 5);	//erase��Ƥ  ���ݵ�������λ��ɾ��Ԫ��
	myvector.pop_back();	//������һ��Ԫ�أ���ɾ�����һ��
	myvector.insert(myvector.begin() + 1, 999);		//�ڵ�2��λ�ò���999
	//myvector.clear();	//ɾ������Ԫ��
	for (int i = 0; i < myvector.size(); ++i)
	{
		cout << myvector.at(i) << endl;		//myvector.at(i)�൱��myvector[i]
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
			cout << allvector.at(i).at(j) << "	";	//allvector.at(i).at(j)��allvector[i][j]
		}
		cout << endl;
	}

	system("pause");
	return 0;
}