#ifndef APPLICATION
#define APPLICATION

#include <iostream>
#include "Position.h"

using namespace std;

//Application.h将在Maze.cpp中定义实现
class Application
{
	friend ostream & operator<<(ostream & os, Application & app);
public:
	//后置条件：返回这个利用输入或赋值生成的Application的初始状态以及起始位置
	Position generatelnitialState();
	//后置条件：如果pos在通往目的地的路上就返回真，否则返回假
	bool valid(const Position& pos);
	//前置条件：pos代表了一个有效位置。后置条件：pos被记录成一个有效位置
	void record(const Position& pos);
	//后置条件：如果pos是这个应用的最后一个位置就返回真，否则返回假
	bool done(const Position& pos);
	//后置条件：pos被标记为不在通往目的地的路径上
	void undo(const Position& pos);

	class Iterator //迭代器
	{
	public:
		Iterator();
		Iterator(const Position& pos);
		Position operator++(int);
		bool atEnd();
	protected:
		void * fieldPtr;    //以后解释
	};
};

#endif // APPLICATION
