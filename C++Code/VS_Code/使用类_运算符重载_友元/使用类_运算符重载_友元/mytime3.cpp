#include "mytime3.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::Addhr(int h)
{
	hours += h;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::Reset(int h, int m)	//(int h = 0, int m = 0)  error 默认参数只需在函数声明时写
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + t.hours * 60;
	tot2 = minutes + hours * 60;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time Time::operator*(double mult) const
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

//友元函数不属于成员函数，所以不要写成Time::operator  定义时不需要加friend
std::ostream & operator<<(std::ostream & os, const Time & t)	
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;	//函数的返回值就是传递给它的对象
}