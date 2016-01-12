#include "Player.h"

void Player::OnCollision()
{
	Radius += 3;
}
void Player::Follow(Vector2D<float> &a)
{
	if ((Pos.GetX() != a.GetX()) || (Pos.GetY() != a.GetY()))
	{
		Velocity.SetX(((a.GetX() - Pos.GetX()) * Time::fDeltaTime)* speed);
		Velocity.SetY(((a.GetY() - Pos.GetY()) * Time::fDeltaTime)* speed);
	}
}

void Player::Update(Vector2D<float>& a)
{
	Follow(a);

	Pos = Pos + Velocity;
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
	speed = 1;
	Radius = 20;
	BC = Collision::NewBoundingCircle(this, Pos, Radius, false);
}


Player::~Player()
{
}
