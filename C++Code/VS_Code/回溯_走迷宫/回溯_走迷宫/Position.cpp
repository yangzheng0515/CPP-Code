#include "Position.h"

Position::Position()
{
	row = 0;
	col = 0;
}

Position::Position(int row, int col)
{
	this->row = row;
	this->col = col;
}

void Position::setPosition(int row, int col)
{
	this->row = row;
	this->col = col;
}

int Position::getRow()
{
	return row;
}

int Position::getCol()
{
	return col;
}
