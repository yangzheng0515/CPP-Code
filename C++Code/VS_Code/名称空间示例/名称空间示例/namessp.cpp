//名称空间	2016/7/21  17：15
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(void)
{
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { "Benny", "Goatsniff", 120.0 };
	showDebt(golf);
	other();
	another();

	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles", "Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	for (int i = 0; i < 3; ++i)
	{
		getDebt(zippy[i]);
	}
	for (int i = 0; i < 3; ++i)
	{
		showDebt(zippy[i]);
	}
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another(void)
{
	using pers::Person;
	Person collertor = { "Milo", "Rightshift" };
	pers::showPerson(collertor);
	std::cout << std::endl;
}
/*
运行结果见《C++ Primer Plus》334页
*/