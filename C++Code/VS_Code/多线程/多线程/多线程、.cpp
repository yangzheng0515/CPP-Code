//多线程	2016/8/18	22：04
#include <iostream>
#include <thread>
#include <windows.h>	//for MessageBoxA()
#include <vector>
using namespace std;
using namespace std::this_thread;

void msg1()
{
	MessageBoxA(0, "123", "456", 0);
}

void msg2()
{
	MessageBoxA(0, "哈哈", "hello", 0);
}

int main()
{
	auto n = thread::hardware_concurrency();	// thread::hardware_concurrency线程
	cout << n << endl;
	cout << "thread=" << get_id() << endl;	//获取当前线程编号

	thread thread1(msg1);	//创建多线程
	thread thread2(msg1);
	thread1.join();	//开始执行
	thread2.join();

	vector<thread *> threads;
	for (int i = 0; i < 10; i++)
	{
		threads.push_back(new thread(msg2));	//创建线程
	}

	for (auto th : threads)
	{
		th->join();
	}

	cin.get();
	return 0;
}