#include "Engine.h"
#include <SDL.h>
#include <iostream>

Engine::Engine()
{
	std::cout << "Engine created" << std::endl;
}

Engine::~Engine()
{
	std::cout << "Engine destroyed" << std::endl;
}

void Engine::Initialize()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cerr << "Error initializing SDL." << std::endl;
		return;
	}
	SDL_Window* window = SDL_CreateWindow(
		NULL, 
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		800,
		600,
		SDL_WINDOW_BORDERLESS
	);

	if (!window)
	{
		std::cerr << "Error creating SDL window." << std::endl;
		return;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, NULL);
	if (!renderer)
	{
		std::cerr << "Error creating SDL renderer." << std::endl;
		return;
	}
}

void Engine::Run()
{
	/*while (true)
	{
		ProcessInput();
		Update();
		Render();
	}*/
}

void Engine::ProcessInput()
{
	std::cout << "Input..." << std::endl;
}

void Engine::Update()
{
	std::cout << "Update..." << std::endl;

}

void Engine::Render()
{
	std::cout << "Render..." << std::endl;

}

void Engine::Destroy()
{
}
