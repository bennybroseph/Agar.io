//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom
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
	void Update(Vector2D<float> a_fPos, float a_fRadius);

	BoundingCircle(Vector2D<float> a_fPos, float a_fRadius, bool IsStatic);
	BoundingCircle();

	~BoundingCircle();
};

#endif // _BOUNDINGCIRCLE_H_
