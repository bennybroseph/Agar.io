//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom
// Brief:  
//////////////////////////////////////////////////////////////
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Cell.h"

class Player : public Cell
{
private:

public:
	void Split();
	void Merge();

	Player();
	~Player();
};

#endif _PLAYER_H_
