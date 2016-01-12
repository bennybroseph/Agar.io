#include "Player.h"

void Player::Follow(Vector2D<float> &a)
{
	if ((Pos.GetX() != a.GetX()) || (Pos.GetY() != a.GetY()))
	{
		Pos.SetX(Pos.GetX() + (((a.GetX() - Pos.GetX()) * Time::fDeltaTime))* speed);
		Pos.SetY(Pos.GetY() + (((a.GetY() - Pos.GetY()) * Time::fDeltaTime))* speed);
	}
}

void Player::Update(Vector2D<float>& a)
{
	Follow(a);
	if (speed > 5)
	{
		speed -= 1;
	}
	Cell::Update();
}

void Player::Split()
{

}

void Player::Merge()
{

}

Player::Player() : Cell()
{
	speed = 6;
	Radius = 20;
	BC = Collision::NewBoundingCircle(Pos, Radius, false);
}


Player::~Player()
{
}
