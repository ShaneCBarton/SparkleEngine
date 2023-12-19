#ifndef _ENGINE_H_
#define _ENGINE_H_

const int FPS = 60;
const int MILLISECONDS_PER_FRAME = 1000 / FPS;

class Engine
{
public:
	Engine();
	~Engine();
	void Initialize();
	void Run();
	void Setup();
	void ProcessInput();
	void Update();
	void Render();
	void Destroy();


private:
	struct SDL_Window* m_window;
	struct SDL_Renderer* m_renderer;

	int m_windowHeight;
	int m_windowWidth;
	int m_previousFrameTime;

	bool m_isRunning;
};

#endif
