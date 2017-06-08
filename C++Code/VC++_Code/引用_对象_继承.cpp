//对象、继承和引用	2016/7/18	10:51
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main()
{
	ofstream fout;
	const char * fn = "引用-对象-继承.txt";
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

void file_it(ostream & os, double fo, const double fe[],int n)	//参数os（其类型为ostream &）可以指向ostream对象（如cout），
{																//也可以指向ofstream对象（如fout）
    ios_base::fmtflags initial;									//os就是fout、cout的别名
    initial = os.setf(ios_base::fixed);	//setf(ios_base::fixed)将对象置于使用定点表示法的模式
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
	os.setf(ios::showpoint);	//setf(ios::showpoint)将对象置于显示小数点模式
    os.precision(1);	//方法precision()指定显示多少位小数
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);	//方法width()设置下一次输出操作使用的字段宽度
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
继承：
ostream是基类（因为fostream是建立在它的基础之上的）
fostream是派生类（因为它是从ostream派生而来的）
1.派生类继承了基类的方法，这意味着ofstream对象可以使用基类的特性，
  如格式化方法precision()、setf()
2.基类引用可以指向派生类对象，无需强制类型转换
因此，可以定义一个接受基类引用作为参数的函数，
调用该函数时，可以将基类对象作为参数，也可以将派生类对象作为参数

file_it(fout, objective, eps, LIMIT);
file_it(cout, objective, eps, LIMIT);
void file_it(ostream & os, double fo, const double fe[],int n)
{
	...	
}
参数os（其类型为ostream &）可以指向ostream对象（如cout），也可以指向ofstream对象（如fout）
*/