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
	Complex operator~() const;	//返回值不要写成Complex &
	Complex operator+(const Complex & t) const;
	Complex operator-(const Complex & t) const;
	Complex operator*(const double d) const;	//不要写成Complex  operator*(const Complex & t) const;
	Complex operator*(const Complex & t) const;
	friend Complex operator*(const double d, const Complex & t)
	{
		return t * d;
	}
	friend std::ostream & operator<<(std::ostream & os, const Complex & t);
	friend bool operator>>(std::istream & is, Complex & t);		//Complex & x前不要加const  这里要返回bool型
};

#endif 