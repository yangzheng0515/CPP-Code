#ifndef STORK_H_
#define STORK_H_

#include <string>

class Stock		//�ඨ��
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();	//���캯����Ĭ��Ϊvoid����Ҫдvoid�����캯�������ƺ�����һ��
	Stock(const std::string &co, long n, double pr);	//���캯���������˺������أ������˶��ͬ���Ĺ��캯��
	~Stock();	//������������~��ͷ������Ҫд�������Զ�����
	//void acquire(const std::string & co, long n, double pr);	//��Ա�����Զ����ʼ�������ڸ��ù��캯������̭�������
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;	//�ú�����ʽ�ط���һ�����󣬶���ʽ�ط�����һ�����󣬲���������һ�����������
};

#endif