//д�뵽�ı��ļ���	2016/7/14	21:19
#include <iostream>
#include <fstream>	//�������ͷ�ļ�<fstream>
#include <string>

using namespace std;

int main()
{
	string str;
	ofstream outFile;	//����������һ��ofstream����
	outFile.open("д��.txt");	//����ofstream����ͬһ���ļ���������

	getline(cin, str);
	cout << str << endl;
	outFile << str;		//����ʹ��cout����ʹ�ø�ofstream����

	outFile.close();	//ʹ�����ļ���ʹ�÷���close()����رա�ע�⣬����close()����Ҫʹ���ļ�����Ϊ����
	return 0;
}
/*
ʹ���ļ��������Ҫ���裺
1.����ͷ�ļ�<fstream>
2.����һ��ofstream����
3.����ofstream����ͬһ���ļ���������
4.����ʹ��cout����ʹ�ø�ofstream����
5.ʹ�����ļ���ʹ�÷���close()����ر�
*/
