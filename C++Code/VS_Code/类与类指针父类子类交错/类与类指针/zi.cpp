#include "zi.h"

zi::zi()
{
	this->strzi = "儿子";
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
	std::cout << "我是你儿子" << "\n";
}
