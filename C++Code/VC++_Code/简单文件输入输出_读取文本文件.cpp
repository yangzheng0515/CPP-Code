//读取文本文件	2016/7/14	22:12
#include <iostream>
#include <fstream>	//必须包含头文件<fstream>
#include <string>
#include <cstdlib>	 // support for exit()

using namespace std;

int main()
{
	int i;
	string filename;
	cout << "Enter name of data file: ";
	getline(cin, filename);

	ifstream inFile;
	inFile.open("读取.txt");
	if (!inFile.is_open())  // 判断文件是否被打开，打开方法is_open()将返回true
    {						//is_open()是C++中较新的内容，可用较老的方法good()来代替
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
	inFile >> i;
	cout << i << endl;
	
	inFile.close();
	return 0;
}

/*
Enter name of data file: 读取.txt
100

编译之前，已在程序可执行文件所属的文件夹中创建了 读取.txt文件 里面有个数字100

注意：有些文本编译器不会自动在末尾加上换行符，因此，如果使用这种文本编辑， 
	  请在输入最后的文本后按下回车键，然后再保存文件

参考代码：
// sumafile.cpp -- functions with an array argument
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // object for handling file input

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        // cin.get();    // keep window open
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // number of items read

    inFile >> value;        // get first value
    while (inFile.good())   // while input good and not at EOF
    {
        ++count;            // one more item read
        sum += value;       // calculate running total
        inFile >> value;    // get next value
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();         // finished with the file
    // cin.get();
    return 0;
}
*/