//�����е����룺getline()  2016/7/12 15:40
#include <iostream>

using namespace std;

int main()
{
	char name[20];
	char book[20];

	cout << "what your name? " << endl;
	cin >> name;
	cout << "what your favorite book? " << endl;
	cin >> book;
	cout << "name: " << name << endl;
	cout << "book: " << book << endl;

	fflush(stdin);	 //������뻺����
	cout <<endl << "what your name? " << endl;
	cin.getline(name, 20);		//��һ�����������������ڶ������������鳤��
	cout << "name: " << name << endl;
} 

/*
-------------------------
what your name?
yang zheng
what your favorite book?
name: yang
book: zheng

what your name?
yang zheng
name: yang zheng
-------------------------
�ܽ᣺
cinʹ�ÿհף��ո��Ʊ���ͻ��з�����ȷ���ַ����Ľ���λ��
getline()������ȡ���У���ʹ�ûس�������Ļ��з���ȷ�������β

���潫һ�����뵽string�����еĴ��룺
getline(cin, str);	
ע�⣺�����getline()ǰ����Ҫ��cin.  getline��istream��ķ���
*/

