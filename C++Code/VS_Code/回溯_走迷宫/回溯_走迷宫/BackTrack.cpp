#include "BackTrack.h"
#include "Application.h"
#include "Maze.cpp"

using namespace std;

BackTrack::BackTrack(const Application & app)
{
	this->app = app;
}

bool BackTrack::tryToSolve(Position pos)
{
	bool success = false;

	Application::Iterator itr = pos.begin();
	while (!success && itr != pos.end())
	{
		pos = itr++;
		if (app.valid(pos)) //判断pos的位置是否为1
		{
			app.record(pos);
			if (app.done(pos))
				success = true;
			else
			{
				success = tryToSolve(pos);
				if (!success)
					app.undo(pos);
			}
		}
	}
	return success;
}

