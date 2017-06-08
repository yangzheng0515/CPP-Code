//面型行的输入：get()和getlien()的区别  2016/7/12/16:08
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
C语言
what your favorite food?
name: yang zheng
book: C语言
food:
-------------------------

总结：
由显示结果易看出：get()和getline()工作方式类似，
但get()并不再读取并丢弃换行符，而是将其留在输入队列中。

解决方案：
cin.get(book, 20);
cin.get();
cin.get(food, 20);

或 (get的一种变体)
cin.get(book, 20).get();
cin.get(food, 20);
*/