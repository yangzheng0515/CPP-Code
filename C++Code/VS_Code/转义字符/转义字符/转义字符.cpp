#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	//string path = "D:\Program Files (x86)\Tencent\QQ\Bin\QQScLauncher.exe";
	//R"()";	括号之间去掉转义字符
	std::string path = R"("D:\Program Files (x86)\Tencent\QQ\Bin\QQScLauncher.exe")";
	system(path.c_str());

	system("pause");
	return 0;
}