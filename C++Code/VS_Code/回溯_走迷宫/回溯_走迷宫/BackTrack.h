#ifndef BACKTRACK
#define BACKTRACK

#include "Application.h"
#include "Position.h"

class BackTrack
{
protected:
	Application app;

public:
	BackTrack(const Application & app);
	bool tryToSolve(Position pos);
};

#endif // BACKTRACK
