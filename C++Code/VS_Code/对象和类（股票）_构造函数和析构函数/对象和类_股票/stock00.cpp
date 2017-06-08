#include <iostream>
#include "stock20.h"

/*
使用成员函数初始化，现在改用构造函数，淘汰这个函数
void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}*/


Stock::Stock()
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		std::cout << "You can't sell more you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show() const
{
	std::cout << "Company:" << company
		<< " Shares:" << shares << std::endl
		<< " Share Price: $" << share_val
		<< " Total Price: $" << total_val << std::endl;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)	//total_val其实是this->total_val的简写	
		return s;
	else
		return *this;	//this指针被设置为调用对象的地址，因此*this是该对象的别名
}