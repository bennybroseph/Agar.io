#include "Cell.h"



Cell::Cell(Vector2D<float> pos, float rad)
{
	Pos = pos;
	Radius = rad;
}

void Cell::OnCollision()
{
	BC->SetShouldDelete(true);
	ShouldDelete = true;
}

const bool Cell::GetShouldDelete()
{
	return ShouldDelete;
}

const Vector2D<float>& Cell::GetPos()
{
	return Pos;
}

const Vector4D<float>& Cell::GetColor()
{
	return Color;
}

const float Cell::GetRadius()
{
	return Radius;
}

const System::Point2D<float> Cell::GetSystemPoint()
{
	return{ Pos.GetX(), Pos.GetY() };
}

const System::Color<float> Cell::GetSystemColor()
{
	return{ Color.GetX(), Color.GetY(), Color.GetZ(), Color.GetT() };
}

void Cell::SetPos(const Vector2D<float> & a)
{
	Pos = a;
}

void Cell::SetRadius(const float b)
{
	Radius = b;
}

void Cell::Update()
{
	BC->Update(Pos, Radius);
}

Cell::Cell()
{
	Pos = Vector2D<float>(rand() % 1600 + 1, rand() % 900 + 1);
	Color = Vector4D<float>(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1, 255);
}


Cell::~Cell()
{

}
