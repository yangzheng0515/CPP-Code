//�����е����룺get()��getlien()������  2016/7/12/16:08
#include <iostream>

using namespace std;

int main()
{
	char name[20];
	char book[20];
	char food[20];

	cout << "what your name? " << endl;
	cin.getline(name, 20);

	cout << "what your favorite book? " << endl;
	cin.get(book, 20);

	cout << "what your favorite food? " << endl;
	cin.get(food, 20);

	cout << "name: " << name << endl;
	cout << "book: " << book << endl;
	cout << "food: " << food << endl;
}

/*
-------------------------
what your name?
yang zheng
what your favorite book?
C����
what your favorite food?
name: yang zheng
book: C����
food:
-------------------------

�ܽ᣺
����ʾ����׿�����get()��getline()������ʽ���ƣ�
��get()�����ٶ�ȡ���������з������ǽ���������������С�

���������
cin.get(book, 20);
cin.get();
cin.get(food, 20);

�� (get��һ�ֱ���)
cin.get(book, 20).get();
cin.get(food, 20);
*/