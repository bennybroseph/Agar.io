#include "Pellet.h"



Pellet::Pellet() : Cell()
{
	Radius = 15;
	BC = Collision::NewBoundingCircle(this, Pos, Radius, true);
}


Pellet::~Pellet()
{
}
