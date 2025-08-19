#include <SFML/Graphics.hpp>
#include "utilities/Logger.h"

int main()
{
	Logger::LogMessage("Program entry.");

	sf::RenderWindow renderWindow(sf::VideoMode({ 1280, 720 }), "Sparkle Engine");

	Logger::LogError("Oops");

	while (renderWindow.isOpen())
	{
		while (const std::optional event = renderWindow.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				renderWindow.close();
			}

			sf::Color earthyGreen = sf::Color(132, 169, 140, 255);
			renderWindow.clear(earthyGreen);
			renderWindow.display();
		}
	}

	return 0;
}