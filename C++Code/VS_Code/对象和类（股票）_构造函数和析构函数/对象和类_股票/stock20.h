#ifndef STORK_H_
#define STORK_H_

#include <string>

class Stock		//类定义
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();	//构造函数，默认为void，不要写void，构造函数的名称和类名一样
	Stock(const std::string &co, long n, double pr);	//构造函数，利用了函数重载，创造了多个同名的构造函数
	~Stock();	//析构函数，以~开头，不需要写参数，自动调用
	//void acquire(const std::string & co, long n, double pr);	//成员函数对对象初始化，现在改用构造函数，淘汰这个函数
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;	//该函数隐式地访问一个对象，而显式地访问另一个对象，并返回其中一个对象的引用
};

#endif