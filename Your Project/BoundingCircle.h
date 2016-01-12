//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: 
//////////////////////////////////////////////////////////////

#ifndef _BOUNDINGCIRCLE_H_
#define _BOUNDINGCIRCLE_H_

#include "Vector2D.h"

class BoundingCircle
{
private:
	Vector2D<float> fPos;
	float fRadius;
	bool IsStatic;

public:
	void Update(const Vector2D<float> & a_fPos, const float a_fRadius);

	void OnCollision(const BoundingCircle & a_oOtherBC);

	const Vector2D<float> & GetPos();
	const float GetRadius();
	const bool GetIsStatic();

	BoundingCircle(const Vector2D<float> & a_fPos, const float a_fRadius, const bool IsStatic);
	BoundingCircle();

	~BoundingCircle();
};

#endif // _BOUNDINGCIRCLE_H_
