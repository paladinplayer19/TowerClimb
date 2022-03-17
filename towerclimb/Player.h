#pragma once
#include "GameObject.h"


class Player : public GameObject
{
public:
	Player();

	bool GetAlive();
	void SetAlive(bool newAlive);
	void Jump();
	void Update(sf::Time frameTime) override;

private:
	bool alive;
	sf::Vector2f vel;
	static sf::Texture* playerTexture;
	const float GRAVITY;
	float spd;
	float jumpSpd;
	
};

