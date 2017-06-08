//�����	2016/8/22	23��44
#include <iostream>

//Ҫʹ��������(obj)��������(Aobj, Bobj)��ֻ����һ���Ӷ��󣬱�����������(Aobj, Bobj)����Ϊ��̳У�ʹ����������Ϊ�����
//���������Ͳ��ܷ��Ͳ����ˡ�

class obj
{
public:
	int num;
	obj(int data) :num(data)
	{
		std::cout << "obj  create\n";
	}

	obj()
	{
		num = 0;
		std::cout << "obj  create\n";
	}
	~obj()
	{
		std::cout << "obj  delete\n";
	}
};

class  Aobj : virtual  public obj	//����������ؼ��֣�virtual
{
public:
	Aobj(int data) :obj(data)
	{
		std::cout << "Aobj  create\n";
	}
	~Aobj()
	{
		std::cout << "Aobj  delete\n";
	}
};

class  Bobj : virtual public obj	//����������ؼ��֣�virtual
{
public:
	Bobj(int data) :obj(data)
	{
		std::cout << "Bobj  create\n";
	}
	~Bobj()
	{
		std::cout << "Bobj  delete\n";
	}
};

class ABobj :public Aobj, public Bobj
{
public:
	ABobj(int x, int y) :Aobj(x), Bobj(y)
	{
		std::cout << "ABobj  create\n";
	}

	ABobj(int z) :Aobj(z), Bobj(z)
	{
		std::cout << "ABobj  create\n";
	}

	~ABobj()
	{
		std::cout << "ABobj  delete\n";
	}
};

void main()
{
	ABobj *p = new ABobj(10);
	std::cout << p->num <<std::endl;
	std::cout << p->Aobj::obj::num << "\n";
	std::cout << p->Bobj::obj::num << "\n";
	delete p;

	std::cin.get();
}

