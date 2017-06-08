#include "fushu.h"
#include <iostream>

#include "mianji.h"

fushu::fushu(int x, int y)
{
	this->x = x;
	this->y = y;
}

fushu::fushu(int n)	//构造转换函数
{
	x = n;
	y = n;
}

fushu::fushu(mianji m)
{
	x = m.cx;
	y = m.cy;
}

fushu::~fushu()
{
}

void fushu::show() const
{
	std::cout << x << " + " << y << "i" << std::endl;
}

fushu::operator int()
{
	return x * y;
}

fushu::operator mianji()
{
	mianji temp;
	temp.cx = x;
	temp.cy = y;
	return temp;
}
