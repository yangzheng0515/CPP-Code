#pragma once
class mianji;
class fushu
{
private:
	int x;
	int y;
public:
	fushu(int x, int y);
	fushu(){}
	fushu(int n);
	fushu(mianji m);
	~fushu();
	void show() const;
	operator int();
	operator mianji();

};

