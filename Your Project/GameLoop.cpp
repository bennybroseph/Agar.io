#include "GameLoop.h"



void GameLoop::Loop()
{
	SDL_Event sdlEvent; // Will hold the next event to be parsed

	while (m_bRunning)
	{
		// Events get called one at a time, so if multiple things happen in one frame, they get parsed individually through 'SDL_PollEvent'
		// The next event to parse gets stored into 'sdlEvent', and then passed to the 'EventHandler' class which will call it's appropriate function here
		// 'SDL_PollEvent' returns 0 when there are no more events to parse
		while (SDL_PollEvent(&sdlEvent))
		{
			// Calls the redefined event function for the EventHandler class
			// Refer to its header file and cpp for more information on what each inherited function is capable of
			// and its syntax
			OnEvent(sdlEvent);
		}
		GetDeltaTime();

		Update();

		LateUpdate();

		Draw();

		Graphics::Flip(); // Required to update the window with all the newly drawn content
	}
}

void GameLoop::Update()
{
	Time::Update();

	for (int i = 0; i < VectorPlayer.size(); i++)
	{
		VectorPlayer[i]->Update(fMousePos);
	}
}
void GameLoop::LateUpdate()
{

}

void GameLoop::GetDeltaTime()
{
	
}

void GameLoop::Draw()
{
	// Objects are drawn in a painter's layer fashion meaning the first object drawn is on the bottom, and the last one drawn is on the top
	// just like a painter would paint onto a canvas

	for (int i = 0; i < VectorPlayer.size(); i++)
	{
		Graphics::DrawCircle({ VectorPlayer[i]->GetPos().GetX(), VectorPlayer[i]->GetPos().GetY() }, VectorPlayer[i]->GetRadius(), 25.0f, { 255, 255, 255, 255 });
	}
}

void GameLoop::OnMouseMove(const int ac_iMouseX, const int ac_iMouseY, const int ac_iVelX, const int ac_VelY, const bool ac_bLeft, const bool ac_bRight, const bool ac_bMiddle)
{
	for (int i = 0; i < VectorPlayer.size(); i++)
	{
		if ((VectorPlayer[i]->GetPos().GetX() != ac_iMouseX) && (VectorPlayer[i]->GetPos().GetY() != ac_iMouseY))
		{
			fMousePos.SetX(ac_iMouseX);
			fMousePos.SetY(ac_iMouseY);
		}
	}
}

void GameLoop::OnKeyDown(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode)
{

	switch (ac_sdlSym)
	{
	case SDLK_ESCAPE: m_bRunning = false; break; // End the loop

	default: 
		break;
	}
}
void GameLoop::OnKeyUp(const SDL_Keycode ac_sdlSym, const Uint16 ac_uiMod, const SDL_Scancode ac_sdlScancode)
{
	switch (ac_sdlSym)
	{
	default: break;
	}
}
void GameLoop::OnExit()
{
	m_bRunning = false; // End the loop
}

GameLoop::GameLoop()
{
	Time::Init();
	Collision::Init();

	Player * NewPlayer = new Player();

	VectorPlayer.push_back(NewPlayer);

	m_bRunning = true;
}
GameLoop::~GameLoop()
{
	Time::Quit();
	Collision::Quit();
}
