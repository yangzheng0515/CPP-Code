//acctabc.h  bank accont classes
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <iostream>
#include <string>

//Abstract Base Class 抽象基类
class AcctABC
{
private:
	std::string fullName;	
	long acctNum;	//账号
	double balance;	//当前余额
protected:    //保护方法FullName()、AcctNum()提供了对数据成员fullName和acctNum的只读访问
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string & FullName() const { return fullName; }
	long AcctNum() const { return acctNum; }
	Formatting SetFormat() const;
	void Restore(Formatting & f) const;
public:
	AcctABC (const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);	//取款
	virtual void Withdraw(double amt) = 0;	//纯虚函数，在类中只能声明，不能定义
	double Balance() const { return balance; }
	virtual void ViewAcct() const = 0;	//显示账户信息
	virtual ~AcctABC() {};
};

class Brass :public AcctABC
{
public:
	Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
	virtual void Withdraw(double amt);	//存款
	virtual void ViewAcct() const;
	virtual ~Brass() {}
};

class BrassPlus :public AcctABC
{
private:
	double maxLoan;	//透支上限
	double rate;	//利率
	double owesBank;	//透支总额
public:
	BrassPlus(const std::string & s = "Nullbody", long an = -1,
		double bal = 0.0, double m1 = 500, double r = 0.10);
	BrassPlus(const Brass & ba, double m1 = 500, double r = 0.10);
	virtual void ViewAcct() const;	//定义时不要加virtual
	virtual void Withdraw(double amt);	
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { owesBank = 0; }
};

#endif