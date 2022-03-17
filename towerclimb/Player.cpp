#include "Player.h"

sf::Texture* Player::playerTexture = nullptr;

Player::Player()
	: GameObject()
	, alive(true)
	, vel()
	, GRAVITY(100)
	, spd(100)
	, jumpSpd(-100)
{
	if (playerTexture == nullptr)
	{
		playerTexture = new sf::Texture();
		playerTexture->loadFromFile("Assets/Graphics/star.png");
	}
	
	objectSpr.setTexture(*playerTexture);
}

bool Player::GetAlive()
{
    return false;
}

void Player::SetAlive(bool newAlive)
{
}

void Player::Jump()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
	{
		vel.y = jumpSpd;
	}
}

void Player::Update(sf::Time frameTime)
{
	GameObject::Update(frameTime);

	Jump();
	vel.y += GRAVITY * frameTime.asSeconds();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		vel.x = -spd;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		vel.x = spd;
	}

	SetPosition(GetPosition() + vel * frameTime.asSeconds());


}
