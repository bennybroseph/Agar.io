#include "BoundingCircle.h"



void BoundingCircle::Update(Vector2D<float> a_fPos, float a_fRadius)
{
	fPos = a_fPos;
	fRadius = a_fRadius;
}

BoundingCircle::BoundingCircle(Vector2D<float> a_fPos, float a_fRadius, bool a_IsStatic)
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
