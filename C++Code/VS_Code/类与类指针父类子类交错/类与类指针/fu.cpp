#include "fu.h"

fu::fu()
{
	this->strfu = "����";
	std::cout << "fu create" << std::endl;
}

fu::~fu()
{
	std::cout << "fu delete" << std::endl;
}

void fu::print()
{
	std::cout << this->strfu << "\n";
}

void fu::fufu()
{
	std::cout << "�������" << "\n";
}
