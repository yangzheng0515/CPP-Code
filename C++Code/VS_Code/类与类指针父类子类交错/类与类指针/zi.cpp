#include "zi.h"

zi::zi()
{
	this->strzi = "����";
	std::cout << "zi create" << std::endl;
}

zi::~zi()
{
	std::cout << "zi delete" << std::endl;
}

void zi::print()
{
	std::cout << this->strzi << "\n";

}
void zi::zizi()
{
//	std::cout << this->strzi << "\n";
	std::cout << "���������" << "\n";
}
