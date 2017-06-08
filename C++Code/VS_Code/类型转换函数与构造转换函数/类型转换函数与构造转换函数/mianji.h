#pragma once
class mianji
{
private:
	int cx;
	int cy;
public:
	friend class fushu;	//ÓÑÔªÀà
	mianji();
	mianji(int a, int b);
	~mianji();
	void show() const;
};

