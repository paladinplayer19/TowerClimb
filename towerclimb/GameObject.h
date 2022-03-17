#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	GameObject();

	void Draw(sf::RenderTarget& target);
	virtual void Update(sf::Time frameTime);
	sf::Vector2f GetPosition();
	void SetPosition(sf::Vector2f newPos);
	sf::FloatRect GetCollider();

private:
	sf::Vector2f pos;

protected:
	sf::Sprite objectSpr;

};

