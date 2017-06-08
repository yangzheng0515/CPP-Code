//���󡢼̳к�����	2016/7/18	10:51
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main()
{
	ofstream fout;
	const char * fn = "����-����-�̳�.txt";
	fout.open(fn);

	double objective;
	cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;

    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT
         << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }

	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done\n";
	return 0;
}

void file_it(ostream & os, double fo, const double fe[],int n)	//����os��������Ϊostream &������ָ��ostream������cout����
{																//Ҳ����ָ��ofstream������fout��
    ios_base::fmtflags initial;									//os����fout��cout�ı���
    initial = os.setf(ios_base::fixed);	//setf(ios_base::fixed)����������ʹ�ö����ʾ����ģʽ
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
	os.setf(ios::showpoint);	//setf(ios::showpoint)������������ʾС����ģʽ
    os.precision(1);	//����precision()ָ����ʾ����λС��
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);	//����width()������һ���������ʹ�õ��ֶο��
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}
/*
---------------------------------------------------------------
Enter the focal length of your telescope objective in mm: 1800
Enter the focal lengths, in mm, of 5 eyepieces:
Eyepiece #1: 30
Eyepiece #2: 19
Eyepiece #3: 14
Eyepiece #4: 8.8
Eyepiece #5: 7.5
Focal length of objective: 1800 mm
f.l. eyepiece  magnification
        30.0             60
        19.0             95
        14.0            129
         8.8            205
         7.5            240
Done
---------------------------------------------------------------
�̳У�
ostream�ǻ��ࣨ��Ϊfostream�ǽ��������Ļ���֮�ϵģ�
fostream�������ࣨ��Ϊ���Ǵ�ostream���������ģ�
1.������̳��˻���ķ���������ζ��ofstream�������ʹ�û�������ԣ�
  ���ʽ������precision()��setf()
2.�������ÿ���ָ���������������ǿ������ת��
��ˣ����Զ���һ�����ܻ���������Ϊ�����ĺ�����
���øú���ʱ�����Խ����������Ϊ������Ҳ���Խ������������Ϊ����

file_it(fout, objective, eps, LIMIT);
file_it(cout, objective, eps, LIMIT);
void file_it(ostream & os, double fo, const double fe[],int n)
{
	...	
}
����os��������Ϊostream &������ָ��ostream������cout����Ҳ����ָ��ofstream������fout��
*/