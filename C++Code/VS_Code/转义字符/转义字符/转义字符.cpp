#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	//string path = "D:\Program Files (x86)\Tencent\QQ\Bin\QQScLauncher.exe";
	//R"()";	����֮��ȥ��ת���ַ�
	std::string path = R"("D:\Program Files (x86)\Tencent\QQ\Bin\QQScLauncher.exe")";
	system(path.c_str());

	system("pause");
	return 0;
}