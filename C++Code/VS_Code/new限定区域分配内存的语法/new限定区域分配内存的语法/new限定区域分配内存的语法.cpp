//new�޶���������ڴ���﷨	2016/8/18	8:48
#include<iostream>
#include<new>
const int buf(512);//�޶�һ����������512
int N(5);//����ĳ���
char buffer[buf] = { 0 };//��̬��

//p1,p3,p5��Ϊָ�������ջ�����洢�ĵ�ַָ�����
//�ֶ��ͷ��ڴ�

//p2,p4,p6��Ϊָ�������ջ�����洢�ĵ�ַ�ھ�̬������������
//�Զ��ͷ��ڴ棬���ڷ��������˾Ͳ������õ�����
//�����ڴ�й©���Զ��ͷ��ڴ档�������ڴ���ʶ����ԣ�

using namespace std;
void main()
{
	double *p1, *p2;

	std::cout << "\n\n\n";
	p1 = new double[N];//�����ڴ棬N��Ԫ�صĴ�С
	p2 = new (buffer)double[N];//ָ����������ڴ�
	for (int i = 0; i < N; i++)
	{
		p1[i] = p2[i] = i + 10.8;//���������ʼ��
		std::cout << "p1===   " << &p1[i] << "  " << p1[i];
		std::cout << "   p2===   " << &p2[i] << "  " << p2[i] << std::endl;
	}

	double *p3, *p4;
	std::cout << "\n\n\n";
	p3 = new double[N];//�����ڴ棬N��Ԫ�صĴ�С
	p4 = new (buffer)double[N];//ָ����������ڴ�

	for (int i = 0; i < N; i++)
	{
		p3[i] = p4[i] = i + 10.8;//���������ʼ��
		std::cout << "p3===   " << &p3[i] << "  " << p3[i];
		std::cout << "   p4===   " << &p4[i] << "  " << p4[i] << std::endl;
	}

	double *p5, *p6;
	std::cout << "\n\n\n";
	p5 = new double[N];//�����ڴ棬N��Ԫ�صĴ�С
	p6 = new (buffer)double[N];//ָ����������ڴ�

	for (int i = 0; i < N; i++)
	{
		p6[i] = p5[i] = i + 10.8;//���������ʼ��
		std::cout << "p5===   " << &p5[i] << "  " << p5[i];
		std::cout << "   p6===   " << &p6[i] << "  " << p6[i] << std::endl;
	}

	std::cin.get();
}