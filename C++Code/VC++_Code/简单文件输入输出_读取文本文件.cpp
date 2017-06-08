//��ȡ�ı��ļ�	2016/7/14	22:12
#include <iostream>
#include <fstream>	//�������ͷ�ļ�<fstream>
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
	inFile.open("��ȡ.txt");
	if (!inFile.is_open())  // �ж��ļ��Ƿ񱻴򿪣��򿪷���is_open()������true
    {						//is_open()��C++�н��µ����ݣ����ý��ϵķ���good()������
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
Enter name of data file: ��ȡ.txt
100

����֮ǰ�����ڳ����ִ���ļ��������ļ����д����� ��ȡ.txt�ļ� �����и�����100

ע�⣺��Щ�ı������������Զ���ĩβ���ϻ��з�����ˣ����ʹ�������ı��༭�� 
	  �������������ı����»س�����Ȼ���ٱ����ļ�

�ο����룺
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