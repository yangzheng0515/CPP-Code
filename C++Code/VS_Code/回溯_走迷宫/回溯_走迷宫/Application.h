#ifndef APPLICATION
#define APPLICATION

#include <iostream>
#include "Position.h"

using namespace std;

//Application.h����Maze.cpp�ж���ʵ��
class Application
{
	friend ostream & operator<<(ostream & os, Application & app);
public:
	//��������������������������ֵ���ɵ�Application�ĳ�ʼ״̬�Լ���ʼλ��
	Position generatelnitialState();
	//�������������pos��ͨ��Ŀ�ĵص�·�Ͼͷ����棬���򷵻ؼ�
	bool valid(const Position& pos);
	//ǰ��������pos������һ����Чλ�á�����������pos����¼��һ����Чλ��
	void record(const Position& pos);
	//�������������pos�����Ӧ�õ����һ��λ�þͷ����棬���򷵻ؼ�
	bool done(const Position& pos);
	//����������pos�����Ϊ����ͨ��Ŀ�ĵص�·����
	void undo(const Position& pos);

	class Iterator //������
	{
	public:
		Iterator();
		Iterator(const Position& pos);
		Position operator++(int);
		bool atEnd();
	protected:
		void * fieldPtr;    //�Ժ����
	};
};

#endif // APPLICATION
