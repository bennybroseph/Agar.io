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
	float speed;
	Vector2D<float> Velocity;

public:
	void OnCollision();

	void Split();
	void Merge();
	void Follow(Vector2D<float> &a);
	void Update(Vector2D<float> &a);

	Player();
	~Player();
};

#endif _PLAYER_H_
