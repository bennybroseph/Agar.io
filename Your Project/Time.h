//////////////////////////////////////////////////////////////
// File: GameLoop.h
// Author: Ben Odom
// Brief: 
//////////////////////////////////////////////////////////////
#ifndef  _TIME_H_
#define _TIME_H_

#include <SDL.h>

namespace Time
{
	extern float fDeltaTime;

	void Init();

	void Update();

	void Quit();
}

#endif // _TIME_H_
