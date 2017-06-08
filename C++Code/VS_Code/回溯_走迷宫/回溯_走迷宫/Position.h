#ifndef POSITION
#define POSITION

class Position
{
private:
	int row, col;
public:
	Position();
	Position(int row, int col);
	void setPosition(int row, int col);
	int getRow();
	int getCol();
};

#endif // POSITION
