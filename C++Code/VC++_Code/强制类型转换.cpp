/*
C++�����ǿ��ת����ʽ 
2016/7/12 0:55
*/
#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);	//fixed-point//���ʱ��֪���Ǹ����
	int i = 5;

	cout << i << endl;
	cout << (float)i << endl;	//�����C���Ը�ʽ
	cout << float(i) << endl;	//C++�¸�ʽ�����������Ǻ�������
	cout << static_cast<float>(i) << endl;	//C++�¸�ʽ��static_cast<����>��������
}

/*
---------
5
5.000000
5.000000
5.000000
---------
ǿ������ת�������޸ı����������Ǵ���
һ���µġ�ָ�����͵�ֵ�������ڱ��ʽ��ʹ�����ֵ
*/