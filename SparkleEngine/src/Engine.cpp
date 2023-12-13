#include "Engine.h"
#include <SDL.h>
#include <SDL_image.h>
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

	SDL_DisplayMode displayMode;
	SDL_GetCurrentDisplayMode(0, &displayMode);
	windowWidth = 800;
	windowHeight = 600;

	m_window = SDL_CreateWindow(
		NULL, 
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		windowWidth,
		windowHeight,
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

	//SDL_SetWindowFullscreen(m_window, SDL_WINDOW_FULLSCREEN_DESKTOP);
	m_isRunning = true;
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

void Engine::Setup()
{

}

void Engine::Update()
{

}

void Engine::Render()
{
	SDL_SetRenderDrawColor(m_renderer, 21, 21, 21, 255);
	SDL_RenderClear(m_renderer);

	SDL_Surface* surface = IMG_Load("assets/images/tank-tiger-right.png");
	SDL_Texture* texture = SDL_CreateTextureFromSurface(m_renderer, surface);
	SDL_FreeSurface(surface);

	SDL_Rect dstRect = { 10, 10, 64, 64 };

	SDL_RenderCopy(m_renderer, texture, NULL, &dstRect);

	SDL_DestroyTexture(texture);

	SDL_RenderPresent(m_renderer);
}

void Engine::Run()
{
	Setup();
	while (m_isRunning)
	{
		ProcessInput();
		Update();
		Render();
	}
}

void Engine::Destroy()
{
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}
