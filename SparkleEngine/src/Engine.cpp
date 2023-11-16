#include "Engine.h"
#include <SDL.h>
#include <iostream>

Engine::Engine()
{
	m_isRunning = false;
}

Engine::~Engine()
{
}

void Engine::Initialize()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cerr << "Error initializing SDL." << std::endl;
		return;
	}
	m_window = SDL_CreateWindow(
		NULL, 
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		800,
		600,
		NULL
	);

	if (!m_window)
	{
		std::cerr << "Error creating SDL window." << std::endl;
		return;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, NULL);
	if (!m_renderer)
	{
		std::cerr << "Error creating SDL renderer." << std::endl;
		return;
	}

	m_isRunning = true;
}

void Engine::Run()
{
	while (m_isRunning)
	{
		ProcessInput();
		Update();
		Render();
	}
}

void Engine::ProcessInput()
{
	SDL_Event sdlEvent;
	while (SDL_PollEvent(&sdlEvent))
	{
		switch (sdlEvent.type)
		{
		case SDL_QUIT: 
			m_isRunning = false;
			break;
		case SDL_KEYDOWN:
			if (sdlEvent.key.keysym.sym == SDLK_ESCAPE)
			{
				m_isRunning = false;
			}
			break;
		}
	}
}

void Engine::Update()
{

}

void Engine::Render()
{

}

void Engine::Destroy()
{
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}
