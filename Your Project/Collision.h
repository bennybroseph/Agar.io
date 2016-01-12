//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: 
//////////////////////////////////////////////////////////////
#ifndef _COLLISION_H_
#define _COLLISION_H_

#include "BoundingCircle.h"

#include <vector>

namespace Collision
{
	void Init();

	void CheckCollisions();

	BoundingCircle * NewBoundingCircle(const Vector2D<float> & a_fPos, const float a_fRadius, const bool a_bIsStatic);

	void Quit();
};


#endif // _COLLISION_H_
