//写入到文本文件中	2016/7/14	21:19
#include <iostream>
#include <fstream>	//必须包含头文件<fstream>
#include <string>

using namespace std;

int main()
{
	string str;
	ofstream outFile;	//声明，创建一个ofstream对象
	outFile.open("写入.txt");	//将该ofstream对象同一个文件关联起来

	getline(cin, str);
	cout << str << endl;
	outFile << str;		//就像使用cout那样使用该ofstream对象

	outFile.close();	//使用完文件后，使用方法close()将其关闭。注意，方法close()不需要使用文件名作为参数
	return 0;
}
/*
使用文件输出的主要步骤：
1.包含头文件<fstream>
2.创建一个ofstream对象
3.将该ofstream对象同一个文件关联起来
4.就像使用cout那样使用该ofstream对象
5.使用完文件后，使用方法close()将其关闭
*/
