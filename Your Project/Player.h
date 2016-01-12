//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom and Austin Morrell
// Brief:  
//////////////////////////////////////////////////////////////
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Cell.h"
#include "Time.h"

class Player : public Cell
{
private:

public:
	void Split();
	void Merge();
	void Follow(Vector2D<float> &a);
	void Update(Vector2D<float> &a);

	Player();
	~Player();
};

#endif _PLAYER_H_
