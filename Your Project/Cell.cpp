#include "Cell.h"
#include <stdlib.h>
#include "Collision.h"

Cell::Cell(Vector2D<float> pos, float rad)
{
	Pos = pos;
	Radius = rad;
}

Vector2D<float> Cell::GetPos()
{
	return Pos;
}

float GetRadius()
{

}

void SetPos()
{

}

void SetRadius()
{

}

Cell::Cell()
{
	Pos = Vector2D<float>((rand() % 1600 + 1), (rand() % 900 + 1));
	Radius = 20;
	BC = Collision::NewBoundingCircle(Pos, Radius);
}


Cell::~Cell()
{
}
