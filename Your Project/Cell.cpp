#include "Cell.h"
<<<<<<< Updated upstream

=======
#include <stdlib.h>
>>>>>>> Stashed changes


Cell::Cell()
{
	Pos((rand() % 1600 + 1), (rand() % 900 + 1));
	Radius = 20;
	BC = NewBoundingCircle(Pos, Radius);
}


Cell::~Cell()
{
}
