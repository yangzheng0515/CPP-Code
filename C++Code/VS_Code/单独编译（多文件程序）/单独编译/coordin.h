#ifndef COORDIN_H_
#define COORDIN_H_

struct polar	//结构声明
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);	//函数声明
void show_polar(polar dapos);

#endif