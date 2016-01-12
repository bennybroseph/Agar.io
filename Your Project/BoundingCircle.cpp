#include "Collision.h"
#include "Cell.h"

namespace Collision
{
	void BoundingCircle::Update(const Vector2D<float> & a_fPos, const float a_fRadius)
	{
		fPos = a_fPos;
		fRadius = a_fRadius;
	}

	void BoundingCircle::OnCollision(const BoundingCircle & a_oOtherBC)
	{
		ParentCell->OnCollision();
	}

	void BoundingCircle::SetShouldDelete(const bool a_bShouldDelete)
	{
		ShouldDelete = a_bShouldDelete;
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

	const bool BoundingCircle::GetShouldDelete()
	{
		return ShouldDelete;
	}

	BoundingCircle::BoundingCircle(Cell * a_oCell, const Vector2D<float> & a_fPos, const float a_fRadius, const bool a_bIsStatic)
	{
		fPos = a_fPos;
		fRadius = a_fRadius;
		IsStatic = a_bIsStatic;
		ParentCell = a_oCell;
	}

	BoundingCircle::BoundingCircle()
	{

	}
	BoundingCircle::~BoundingCircle()
	{

	}
}