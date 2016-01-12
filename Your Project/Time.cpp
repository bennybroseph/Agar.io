#include "Time.h"



namespace Time
{
	float fDeltaTime, fPrevClock;

	void Init()
	{
		fDeltaTime = NULL;
		fPrevClock = NULL;
	}

	void Update()
	{
		fDeltaTime = ((float)(SDL_GetTicks() - fPrevClock)) / 1000;
		fPrevClock = SDL_GetTicks();
	}

	void Quit()
	{

	}
}
