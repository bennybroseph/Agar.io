#include "Collision.h"


namespace Collision
{
	std::vector<BoundingCircle*> VectorBC;

	void Init()
	{

	}

	void Update()
	{
		CheckCollisions();
	}

	void CheckCollisions()
	{
		for (int i = 0; i < VectorBC.size(); i++)
		{
			if (VectorBC[i]->GetShouldDelete())
			{
				VectorBC.erase(VectorBC.begin() + i);
				continue;
			}
			for (int j = 0; j < VectorBC.size(); j++)
			{
				if (i != j && !VectorBC[i]->GetIsStatic())
				{
					if (sqrt(
						pow(VectorBC[i]->GetPos().GetX() - VectorBC[j]->GetPos().GetX(), 2) +
						pow(VectorBC[i]->GetPos().GetY() - VectorBC[j]->GetPos().GetY(), 2)) < VectorBC[i]->GetRadius() + VectorBC[j]->GetRadius())
					{
						VectorBC[i]->OnCollision(*VectorBC[j]);
						VectorBC[j]->OnCollision(*VectorBC[i]);
					}
				}
			}
		}
	}

	BoundingCircle * NewBoundingCircle( Cell * a_oCell, const Vector2D<float> & a_fPos, const float a_fRadius, const bool a_bIsStatic)
	{
		BoundingCircle * NewBC = new BoundingCircle(a_oCell, a_fPos, a_fRadius, a_bIsStatic);
		VectorBC.push_back(NewBC);

		return NewBC;
	}

	void Quit()
	{
		VectorBC.clear();
	}
}