//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: Base class for all players/pellets. Holds mostly
//	attributes
//////////////////////////////////////////////////////////////
#ifndef _CELL_H_
#define _CELL_H_

#include "Collision.h"
#include "Vector4D.h"
#include "System.h"

#include <stdlib.h>

class Cell
{
protected: 
	Vector2D<float> Pos;
	Vector4D<float> Color;

	float Radius;

	BoundingCircle* BC;
	bool ShouldDelete;

public:
	const Vector2D<float>& GetPos();
	const Vector4D<float>& GetColor();
	const float GetRadius();

	const System::Point2D<float> GetSystemPoint();
	const System::Color<float> GetSystemColor();

	void SetPos(const Vector2D<float> &);
	void SetRadius(const float);
	virtual void Update();

	Cell();
	Cell(Vector2D<float>, float);
	~Cell();
};

#endif _CELL_H_