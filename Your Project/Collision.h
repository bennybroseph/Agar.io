//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom
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

	BoundingCircle * NewBoundingCircle(Vector2D<float> a_fPos, float a_fRadius);

	void Quit();
};


#endif // _COLLISION_H_
