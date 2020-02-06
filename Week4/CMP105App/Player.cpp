#include "Player.h"

void Player::handleInput(float dt)
{
	//move up
	if (input->isKeyDown(sf::Keyboard::W))
	{
		setVelocity(0, -speed);
		move(velocity * dt);
	}
	//move down
	if (input->isKeyDown(sf::Keyboard::S))
	{
		setVelocity(0, speed);
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(-speed, 0);
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		setVelocity(speed, 0);
		move(velocity * dt);

	}
	else
		setVelocity(0, 0);
}

int Player::setSpeed(int newSpeed)
{
	speed = newSpeed;
}