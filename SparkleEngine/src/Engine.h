#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <SDL.h>

class Engine
{
public:
	Engine();
	~Engine();
	void Initialize();
	void Run();
	void ProcessInput();
	void Update();
	void Render();
	void Destroy();

private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;

	bool m_isRunning;
};

#endif
