#ifndef WORKMI_H_
#define WORKMI_H_

#include <iostream>
#include <string>

class Worker	//抽象基类（至少包含一个纯虚函数），不能创造该类的对象
{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0;	//纯虚函数
	virtual void Set() = 0;
	virtual void Show() const = 0;
};

class Waiter : virtual public Worker //虚基类
{
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string & s, long n, int p = 0)
		: Worker(s, n), panache(p) {}
	Waiter(const Worker & wk, int p = 0)
		: Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};

class Singer : virtual public Worker
{
protected:
	enum{other, alto, contralto, soprano, bass, barirone, tenor};
	enum{Vtypes = 7};
	void Data() const;
	void Get();
private:
	static char *pv[Vtypes];
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string & s, long n, int v = other)
		: Worker(s, n), voice(v) {}
	Singer(const Worker & wk, int v = other)
		: Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};

class SingingWaiter : public Waiter, public Singer
{
protected:
	void Data() const;
	void Get();
public:
	SingingWaiter() {};
	SingingWaiter(const std::string & s, long n, int p = 0, int v = other)
		: Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}	//Worker(s, n)，必须显式调用该虚基类的某个构造函数
	SingingWaiter(const Worker & wk, int p = 0, int v = other)
		: Worker(wk), Waiter(wk, p), Singer(wk, v) {}
	SingingWaiter(const Waiter & wk, int v = other)
		: Worker(wk), Waiter(wk), Singer(wk, v) {}
	SingingWaiter(const Singer & wk, int p = 0)
		: Worker(wk), Waiter(wk, p), Singer(wk) {}
	void Set();
	void Show() const;
};

#endif