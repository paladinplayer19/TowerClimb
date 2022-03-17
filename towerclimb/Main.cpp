#include <SFML/Graphics.hpp>
#include "Player.h"

int main()
{

	sf::RenderWindow window(sf::VideoMode(700, 700), "TowerClimb");

	sf::Clock gameClock;

	Player playerInstance;

	while (window.isOpen())
	{
		sf::Time frameTime = gameClock.restart();
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		playerInstance.Update(frameTime);






		window.clear();

		playerInstance.Draw(window);

		window.display();

	}


	return 0;
}