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

float Cell::GetRadius()
{
	return Radius;
}

void Cell::SetPos(Vector2D<float> a)
{
	Pos = a;
}

void Cell::SetRadius(float b)
{
	Radius = b;
}

void Cell::Update()
{

}

Cell::Cell()
{
	Pos = Vector2D<float>((rand() % 1600 + 1), (rand() % 900 + 1));
	Radius = 20;
	BC = Collision::NewBoundingCircle(Pos, Radius, false);
}


Cell::~Cell()
{
}
