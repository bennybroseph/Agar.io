//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: Base class for all cells/pellets. Holds mostly
//	attributes
//////////////////////////////////////////////////////////////
#ifndef _CELL_H_
#define _CELL_H_

class Cell
{
private: 
	Vector2D<float> Pos;
	float Radius;
	BoundingCircle* BC;
public:
	Cell();
	~Cell();
};

#endif _CELL_H_