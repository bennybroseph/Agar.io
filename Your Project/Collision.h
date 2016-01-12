//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief: 
//////////////////////////////////////////////////////////////
#ifndef _COLLISION_H_
#define _COLLISION_H_

#include "Vector2D.h"

#include <vector>

class Cell;

namespace Collision
{
	class BoundingCircle
	{
	private:
		Vector2D<float> fPos;
		float fRadius;
		bool IsStatic;
		bool ShouldDelete;

		Cell * ParentCell;

	public:
		void Update(const Vector2D<float> & a_fPos, const float a_fRadius);

		void OnCollision(const BoundingCircle & a_oOtherBC);

		void SetShouldDelete(const bool a_bShouldDelete);

		const Vector2D<float> & GetPos();
		const float GetRadius();
		const bool GetIsStatic();
		const bool GetShouldDelete();

		BoundingCircle( Cell * a_oCell, const Vector2D<float> & a_fPos, const float a_fRadius, const bool IsStatic);
		BoundingCircle();

		~BoundingCircle();
	};

	void Init();

	void Update();
	void CheckCollisions();

	BoundingCircle * NewBoundingCircle( Cell * a_oCell, const Vector2D<float> & a_fPos, const float a_fRadius, const bool a_bIsStatic);

	void Quit();
};

#endif // _COLLISION_H_
