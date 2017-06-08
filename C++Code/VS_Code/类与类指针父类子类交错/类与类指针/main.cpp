//类与类指针_父类子类交错	2016/8/23	21：17
#include <iostream>

#include"fu.h"
#include "zi.h"

//dynamic适用于虚函数

//类而言，数据是私有，代码是公有的
//指针为空，指向一个类，可以直接调用方法
//涉及内部成员会崩溃，不涉及可以执行

//父类指针引用父类对象，完全正常引用
//子类指针引用子类对象，覆盖父类的同名函数
//父类指针引用子类对象，只能引用父类中的函数
//子类指针，引用父类对象，子类不涉及内部数据的函数会调用成功
//涉及到内部数据的会调用成功，执行失败
//子类指针可以引用父类的不重名的函数
//子类指针（不是pzi->fu::print();方法）无法引用父类的同名方法

void main()
{
	{
		//fu *pfu = new fu;
		//delete pfu;
	}
	{
	   ///  zi  *pzi = new zi;
		// delete pzi;
	}
	{
		//fu *pfu = new zi;
		//delete pfu;//内存泄漏
	}
	{
		//fu *pfu = new fu;
	    zi *pzi = static_cast<zi *>(new fu);
		delete pzi;//内存越界,超过界限释放内存，有时出错，有时无措    
	}

	std::cin.get();
}

void main3()
{
	zi *pzi(nullptr);
	pzi->zizi();

	std::cin.get();
}

void main4()
{
	fu *pfu = new fu;
	zi *pzi = static_cast<zi *>(pfu);	//派生类指针只有经过强制类型转换后，才能引用基类对象
	pzi->fufu();
	
	pzi->zizi();
	pzi->fu::print();

	//pzi->print();		//发生冲突

	//std::cout << pzi->strzi << std::endl;

	//pzi->print();

	std::cin.get();
}

void main2()
{
	fu *pfu = new zi;
	pfu->print();	//父类指针引用子类对象，只能引用父类中的函数
	pfu->fufu();

	std::cin.get();
}

void main1()
{
	fu *pfu = new fu;
	pfu->print();
	pfu->fufu();

	zi *pzi = new zi;
	pzi->print();//子类覆盖父类
	pzi->zizi();
	pzi->fufu();

	/*
	fu fu1;
	fu1.print();
	fu1.fufu();
	*/
	std::cin.get();
}