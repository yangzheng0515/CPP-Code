#include "mianji.h"
#include <iostream>


mianji::mianji()
{
}


mianji::~mianji()
{
}

mianji::mianji(int a, int b)
{
	cx = a;
	cy = b;
}

void mianji::show() const
{
	std::cout << cx * cy << std::endl;
}
