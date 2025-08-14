#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow renderWindow(sf::VideoMode({ 1280, 720 }), "Sparkle Engine");

	while (renderWindow.isOpen())
	{
		while (const std::optional event = renderWindow.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				renderWindow.close();
			}

			renderWindow.clear(sf::Color::Blue);
			renderWindow.display();
		}
	}

	return 0;
}