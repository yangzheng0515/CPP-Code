#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class Complex
{
	double real;
	double imaginary;
public:
	Complex(const double & r, const double & i);
	Complex();
	~Complex();
	Complex operator~() const;	//����ֵ��Ҫд��Complex &
	Complex operator+(const Complex & t) const;
	Complex operator-(const Complex & t) const;
	Complex operator*(const double d) const;	//��Ҫд��Complex  operator*(const Complex & t) const;
	Complex operator*(const Complex & t) const;
	friend Complex operator*(const double d, const Complex & t)
	{
		return t * d;
	}
	friend std::ostream & operator<<(std::ostream & os, const Complex & t);
	friend bool operator>>(std::istream & is, Complex & t);		//Complex & xǰ��Ҫ��const  ����Ҫ����bool��
};

#endif 