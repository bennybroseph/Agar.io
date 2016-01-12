#include "Collision.h"


namespace Collision
{
	std::vector<BoundingCircle*> VectorBC;

	void Init()
	{

	}

	void CheckCollisions()
	{
		for (int i = 0; i < VectorBC.size(); i++)
		{

		}
	}

	BoundingCircle * NewBoundingCircle(Vector2D<float> a_fPos, float a_fRadius)
	{
		BoundingCircle * NewBC = new BoundingCircle(a_fPos, a_fRadius);
		VectorBC.push_back(NewBC);

		return NewBC;
	}

	void Quit()
	{

	}
}