#pragma once
class mianji
{
private:
	int cx;
	int cy;
public:
	friend class fushu;	//��Ԫ��
	mianji();
	mianji(int a, int b);
	~mianji();
	void show() const;
};

