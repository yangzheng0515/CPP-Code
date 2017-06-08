#include <string>

//该头文件包含了头文件常包含的内容：常量、结构定义和函数原型
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;	//debts里使用了Person结构，所以要使用using编译指令，让pers在debts名称空间中可用
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}
