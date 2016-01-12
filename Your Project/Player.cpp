#include "Player.h"

void Player::Follow(Vector2D<float> &a)
{
	if ((Pos.GetX() != a.GetX) || (Pos.GetY() != a.GetY()))
	{
		Pos.SetX(Pos.GetX() + ((a.GetX() - Pos.GetX()) * Time::fDeltaTime));
		Pos.SetY(Pos.GetY() + ((a.GetY() - Pos.GetY()) * Time::fDeltaTime));
	}
}

void Player::Update(Vector2D<float>& a)
{
	Follow(a);
}

void Player::Split()
{

}

void Player::Merge()
{

}

Player::Player()
{
}


Player::~Player()
{
}
