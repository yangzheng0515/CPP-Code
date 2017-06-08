#include "complex0.h"

Complex::Complex()
{
	real = imaginary = 0;
}

Complex::Complex(const double & r, const double & i)
{
	real = r;
	imaginary = i;
}

Complex::~Complex()
{
}

Complex Complex::operator~() const
{
	Complex t;
	t.real = real;
	t.imaginary = -1 * imaginary;
	return t;
}

Complex Complex::operator+(const Complex & t) const
{
	Complex sum;
	sum.real = real + t.real;
	sum.imaginary = imaginary + t.imaginary;
	return sum;
}

Complex Complex::operator-(const Complex & t) const
{
	Complex diff;
	diff.real = real - t.real;
	diff.imaginary = imaginary - t.imaginary;
	return diff;
}

Complex  Complex::operator*(const double d) const
{
	Complex result;
	result.real = d * real;
	result.imaginary = d * imaginary;
	return result;
}

Complex Complex::operator*(const Complex & t) const
{
	Complex s;
	s.real = real * t.real - imaginary * t.imaginary;
	s.imaginary = real * t.imaginary+ imaginary * t.real;
	return s;
}

std::ostream & operator<<(std::ostream & os, const Complex & t)	//operator<< 不属于类成员，不要写Complex::  不要写const std::ostream & os
{
	os << "(" << t.real << ", " << t.imaginary << "i)";
	return os;
}

bool operator>>(std::istream & is, Complex & t)
{
	std::cout << "real: ";
	if (is >> t.real)
	{
		std::cout << "imaginary:";
		if (is >> t.imaginary)
			return true;
		else
			return false;
	}
	else
		return false;
}
