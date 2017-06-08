#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <string>
#include <iostream>
#include <valarray>

class Student : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	std::ostream & arr_out(std::ostream & os) const;
public:
	Student() : std::string("Null Student"), ArrayDb() {}
	explicit Student(const std::string & s) : std::string(s), ArrayDb() {}
	explicit Student(int i) : std::string("Null Student"), ArrayDb(i) {}
	Student(const std::string & s, int i) : std::string(s), ArrayDb(i) {}
	Student(const std::string & s, const ArrayDb & a) : std::string(s), ArrayDb(a) {}
	Student(const std::string & s, const double * pd, int n)
		: std::string(s), ArrayDb(pd, n) {}
	~Student() {}
	double Average() const;
	double & operator[](int i);
	double operator[](int i) const;
	const std::string & Name() const;
	//friend
	//input
	friend std::istream & operator>>(std::istream & is, Student & stu);	//a word
	friend std::istream & getline(std::istream & is, Student & stu);  //a line
	//output
	friend std::ostream & operator<<(std::ostream & os, Student & stu);
};

#endif