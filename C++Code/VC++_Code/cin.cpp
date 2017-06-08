# include <iostream>
using namespace std;

int main()
{
	char name[20];
	char gender;	//性别
	int age;

	cout << "请输入姓名、性别（F/M）、年龄：" << endl;
	cin >> name >> gender >> age;
	cout << "姓名：" << name << endl;
	cout << "性别：" << gender << endl;
	cout << "年龄：" << age << endl;
}

/*
------------------------------
请输入姓名、性别（F/M）、年龄：
杨正 M 21
姓名：杨正
性别：M
年龄：21
-------------------------------
*/