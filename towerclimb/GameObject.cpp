#include "GameObject.h"

GameObject::GameObject()
	: pos()
	, objectSpr()
{
}

void GameObject::Draw(sf::RenderTarget& target)
{
	target.draw(objectSpr);
}

void GameObject::Update(sf::Time frameTime)
{
	
}

sf::Vector2f GameObject::GetPosition()
{
	return pos;
}

void GameObject::SetPosition(sf::Vector2f newPos)
{
	pos = newPos;
	objectSpr.setPosition(pos);
}

sf::FloatRect GameObject::GetCollider()
{
	return sf::FloatRect();
}
