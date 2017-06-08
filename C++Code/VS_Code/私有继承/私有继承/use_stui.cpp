//Ë½ÓÐ¼Ì³Ð	2016/8/9	9£º51
#include <iostream>
#include "studenti.h"
using std::cout;
using std::cin;
using std::endl;

void set(Student & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main()
{
	Student ada[pupils] =
	{ Student(quizzes), Student(quizzes), Student(quizzes) };

	int i;
	for (i = 0; i < pupils; ++i)
		set(ada[i], quizzes);
	cout << "\nStudent List:\n";
	for (i = 0; i < pupils; ++i)
		cout << ada[i].Name() << endl;
	cout << "\nResult:";
	for (i = 0; i < pupils; ++i)
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].Average() << endl;
	}
	cout << "Done.\n";
	system("pause");
	return 0;
}

void set(Student & sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << "quiz scores:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}
/*
----------------------------------------------
Please enter the student's name: yang
Please enter 5quiz scores:
11 22 33 44 55
Please enter the student's name: zheng
Please enter 5quiz scores:
44 55 66 77 88
Please enter the student's name: yangzheng
Please enter 5quiz scores:
44 55 66 99 88

Student List:
yang
zheng
yangzheng

Result:
Scores for yang:
11 22 33 44 55
average: 33

Scores for zheng:
44 55 66 77 88
average: 66
----------------------------------------------
*/