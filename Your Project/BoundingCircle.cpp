#include "BoundingCircle.h"



void BoundingCircle::Update(const Vector2D<float> & a_fPos, const float a_fRadius)
{
	fPos = a_fPos;
	fRadius = a_fRadius;
}

void BoundingCircle::OnCollision(const BoundingCircle & a_oOtherBC)
{

}

const Vector2D<float> & BoundingCircle::GetPos()
{
	return fPos;
}

const float BoundingCircle::GetRadius()
{
	return fRadius;
}

const bool BoundingCircle::GetIsStatic()
{
	return IsStatic;
}

BoundingCircle::BoundingCircle(const Vector2D<float> & a_fPos, const float a_fRadius, const bool IsStatic)
{
	fPos = a_fPos;
	fRadius = a_fRadius;
}

BoundingCircle::BoundingCircle()
{

}
BoundingCircle::~BoundingCircle()
{

}
